// Crazy Taxi (XBLA) -- Game-specific Xbox 360 API stubs
//
// These override or supplement the ReXGlue SDK's built-in kernel stubs
// for functionality specific to Crazy Taxi.

#include <rex/ppc.h>
#include <rex/types.h>
#include <rex/logging.h>

#include <cstdio>
#include <cstring>

// ── Stub Macro ─────────────────────────────────────────────────────
// Simple no-op stubs that log on first call and return 0.
#define CT_STUB(name)                                                          \
    extern "C" void __imp__##name(PPCContext& ctx, uint8_t* base) {            \
        static bool warned = false;                                            \
        if (!warned) {                                                         \
            printf("[STUB] " #name " called\n");                               \
            warned = true;                                                     \
        }                                                                      \
        ctx.r3.u64 = 0;                                                        \
    }

// ── XAM UI Stubs ──────────────────────────────────────────────────
// Crazy Taxi shows various Xbox UI popups that we stub out.
CT_STUB(XamShowGamerCardUI)
CT_STUB(XamShowAchievementsUI)
CT_STUB(XamShowMarketplaceUI)
CT_STUB(XamShowFriendsUI)
CT_STUB(XamShowMessageComposeUI)

// ── Networking Stubs ───────────────────────────────────────────────
// Crazy Taxi is single-player but may probe network APIs.
CT_STUB(NetDll_XNetStartup)
CT_STUB(NetDll_XNetCleanup)
CT_STUB(NetDll_XNetUnregisterInAddr)
CT_STUB(NetDll_XNetConnect)
CT_STUB(NetDll_XNetGetConnectStatus)

// ── USB Camera Stubs ───────────────────────────────────────────────
CT_STUB(XUsbcamCreate)
CT_STUB(XUsbcamDestroy)
CT_STUB(XUsbcamGetState)
CT_STUB(XUsbcamSetConfig)
CT_STUB(XUsbcamSetView)
CT_STUB(XUsbcamSetCaptureMode)
CT_STUB(XUsbcamReadFrame)

// ── Leaderboard / Content Stubs ────────────────────────────────────
CT_STUB(XUserWriteAchievements)
CT_STUB(XUserCreateStatsEnumeratorByRank)
CT_STUB(XUserCreateStatsEnumeratorByXuid)

// ── Content License Override ───────────────────────────────────────
// Override the content license check to return a full license mask.
// This ensures the game runs as a fully licensed title, not a trial.
// The specific function address will need to be identified during
// recompilation testing.
//
// TODO: Identify the license check function in Crazy Taxi's code.
//       Pattern from vig8: override function that returns license mask
//       to return 0xFFFFFFFF (all bits set = full license).

// ── VdSwap Frame Limiter ───────────────────────────────────────────
// Precise 60 Hz frame pacing using QueryPerformanceCounter.
// Ported from simpsonsarcade's timing fix -- the original Sleep(16)
// actually sleeps ~31ms on Windows due to 15.6ms timer granularity.
#ifdef _WIN32
#include <windows.h>

extern "C" void __imp__VdSwap(PPCContext& ctx, uint8_t* base) {
    static LARGE_INTEGER s_freq = {}, s_last = {};
    if (s_freq.QuadPart == 0) {
        QueryPerformanceFrequency(&s_freq);
        QueryPerformanceCounter(&s_last);
    }

    const int64_t target_us = 16667; // 16.667ms = 60 Hz

    LARGE_INTEGER now;
    for (;;) {
        // Pump Win32 messages to keep the window responsive
        MSG msg;
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        QueryPerformanceCounter(&now);
        int64_t elapsed_us =
            (now.QuadPart - s_last.QuadPart) * 1000000 / s_freq.QuadPart;
        if (elapsed_us >= target_us) break;

        // Coarse yield if more than 2ms remain
        if (elapsed_us < target_us - 2000) Sleep(1);
    }

    QueryPerformanceCounter(&s_last);
}
#endif
