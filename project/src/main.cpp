// Crazy Taxi (XBLA) -- Static Recompilation
// Main application using ReXGlue SDK v0.2.0

#include "generated/crazytaxi_config.h"
#include "generated/crazytaxi_init.h"
#include "settings.h"
#include "menu.h"

#include <rex/rex_app.h>
#include <rex/logging.h>

#include <cstdio>
#include <cstdlib>
#include <mutex>

#ifdef _WIN32
#include <windows.h>
#endif

// ── Crash Logging ──────────────────────────────────────────────────

static std::mutex g_crash_log_mutex;

static void WriteCrashLog(const char* msg) {
    std::lock_guard<std::mutex> lock(g_crash_log_mutex);
    FILE* f = fopen("crazytaxi_crash.log", "a");
    if (f) {
        fprintf(f, "%s\n", msg);
        fclose(f);
    }
    fprintf(stderr, "%s\n", msg);
}

#ifdef _WIN32
// Vectored Exception Handler -- catches access violations and other crashes
// in recompiled PPC code. Logs full register state for debugging.
static LONG WINAPI CrashVEH(PEXCEPTION_POINTERS info) {
    DWORD code = info->ExceptionRecord->ExceptionCode;

    // Skip non-fatal exceptions
    if (code == DBG_PRINTEXCEPTION_C || code == DBG_PRINTEXCEPTION_WIDE_C)
        return EXCEPTION_CONTINUE_SEARCH;

    // Decode C++ exceptions (MSVC magic: 0xE06D7363)
    if (code == 0xE06D7363)
        return EXCEPTION_CONTINUE_SEARCH;

    char buf[2048];
    CONTEXT* ctx = info->ContextRecord;
    snprintf(buf, sizeof(buf),
        "=== CRASH ===\n"
        "Exception: 0x%08lX at RIP=0x%016llX\n"
        "RAX=%016llX RBX=%016llX RCX=%016llX RDX=%016llX\n"
        "RSI=%016llX RDI=%016llX RBP=%016llX RSP=%016llX\n"
        "R8 =%016llX R9 =%016llX R10=%016llX R11=%016llX\n"
        "R12=%016llX R13=%016llX R14=%016llX R15=%016llX\n",
        code, (unsigned long long)ctx->Rip,
        (unsigned long long)ctx->Rax, (unsigned long long)ctx->Rbx,
        (unsigned long long)ctx->Rcx, (unsigned long long)ctx->Rdx,
        (unsigned long long)ctx->Rsi, (unsigned long long)ctx->Rdi,
        (unsigned long long)ctx->Rbp, (unsigned long long)ctx->Rsp,
        (unsigned long long)ctx->R8,  (unsigned long long)ctx->R9,
        (unsigned long long)ctx->R10, (unsigned long long)ctx->R11,
        (unsigned long long)ctx->R12, (unsigned long long)ctx->R13,
        (unsigned long long)ctx->R14, (unsigned long long)ctx->R15);

    WriteCrashLog(buf);

    // Try to extract PPC context from RDI (first arg in recompiled functions)
    if (ctx->Rdi) {
        // PPCContext is passed as first argument in RDI
        snprintf(buf, sizeof(buf),
            "PPC Context (RDI=0x%016llX):\n"
            "  (PPC register dump requires running binary)\n",
            (unsigned long long)ctx->Rdi);
        WriteCrashLog(buf);
    }

    return EXCEPTION_CONTINUE_SEARCH;
}

// Null page handler -- handles reads from unmapped guest memory by zeroing
// the destination register and continuing. Decodes x86-64 MOV instructions
// with full REX prefix and ModR/M support.
static LONG WINAPI NullPageHandler(PEXCEPTION_POINTERS info) {
    if (info->ExceptionRecord->ExceptionCode != EXCEPTION_ACCESS_VIOLATION)
        return EXCEPTION_CONTINUE_SEARCH;

    // Only handle reads (type 0)
    if (info->ExceptionRecord->NumberParameters < 2 ||
        info->ExceptionRecord->ExceptionInformation[0] != 0)
        return EXCEPTION_CONTINUE_SEARCH;

    CONTEXT* ctx = info->ContextRecord;
    uint8_t* rip = (uint8_t*)ctx->Rip;

    // Decode REX prefix
    uint8_t rex = 0;
    int pos = 0;
    if ((rip[pos] & 0xF0) == 0x40) {
        rex = rip[pos++];
    }

    // Handle MOV r64, [mem] (opcode 0x8B)
    if (rip[pos] == 0x8B) {
        pos++;
        uint8_t modrm = rip[pos++];
        int reg = ((modrm >> 3) & 7) | ((rex & 4) << 1);

        // Zero the destination register
        DWORD64* regs[] = {
            &ctx->Rax, &ctx->Rcx, &ctx->Rdx, &ctx->Rbx,
            &ctx->Rsp, &ctx->Rbp, &ctx->Rsi, &ctx->Rdi,
            &ctx->R8,  &ctx->R9,  &ctx->R10, &ctx->R11,
            &ctx->R12, &ctx->R13, &ctx->R14, &ctx->R15
        };
        *regs[reg] = 0;

        // Skip the rest of the instruction (ModR/M + SIB + displacement)
        uint8_t mod = modrm >> 6;
        uint8_t rm = (modrm & 7) | ((rex & 1) << 3);
        if (rm == 4 && mod != 3) pos++; // SIB byte
        if (mod == 0 && (rm & 7) == 5) pos += 4; // disp32
        else if (mod == 1) pos += 1; // disp8
        else if (mod == 2) pos += 4; // disp32

        ctx->Rip += pos;
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    return EXCEPTION_CONTINUE_SEARCH;
}
#endif // _WIN32

// ── Application ────────────────────────────────────────────────────

class CrazyTaxiApp : public rex::ReXApp {
public:
    using rex::ReXApp::ReXApp;

    static std::unique_ptr<rex::ui::WindowedApp> Create(
        rex::ui::WindowedAppContext& ctx) {
        return std::unique_ptr<CrazyTaxiApp>(new CrazyTaxiApp(ctx, "crazytaxi",
            {PPC_CODE_BASE, PPC_CODE_SIZE, PPC_IMAGE_BASE,
             PPC_IMAGE_SIZE, PPCFuncMappings}));
    }

protected:
    void OnPreSetup() override {
        // Install exception handlers before anything else
#ifdef _WIN32
        AddVectoredExceptionHandler(1, NullPageHandler);  // high priority
        AddVectoredExceptionHandler(0, CrashVEH);         // low priority
#endif

        // Load settings
        CrazyTaxiSettings::Load();
    }

    void OnPostSetup() override {
        // Window title
        // (ReXApp handles window creation via the SDK)
    }

    void OnCreateDialogs() override {
        // ImGui config dialogs will be registered here
        CrazyTaxiMenu::Register();
    }

    void OnShutdown() override {
        CrazyTaxiSettings::Save();
    }
};

REX_DEFINE_APP(crazytaxi, CrazyTaxiApp::Create)
