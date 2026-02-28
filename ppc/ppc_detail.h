#pragma once

// Crazy Taxi (XBLA) -- PPC runtime overrides.
// Included via crazytaxi_init.h AFTER the SDK headers, so we can re-override
// macros that the SDK force-redefines (#undef + #define).
//
// NOTE: Load/store macros and PPC_PHYS_HOST_OFFSET are already correctly
// defined in the SDK's <rex/runtime/guest/memory.h> with #ifndef guards.
//
// NOTE: __rdtsc() timebase override is NOT done here. The SDK uses the raw
// host TSC on x86_64. Overriding it via macro causes include-order conflicts
// with the SDK's headers. TODO: implement proper timebase scaling via a
// different mechanism (e.g., post-include override or SDK configuration).

#include <cstdio>
#include <cstdint>

// ============================================================================
// Override __builtin_trap() for switch-case defaults. The recompiler emits
// these as safety nets for out-of-range jump table indices, but at runtime
// some paths are legitimately reached. Log a warning instead of crashing.
// ============================================================================
#ifdef __builtin_trap
#undef __builtin_trap
#endif
#define __builtin_trap() do { \
    static int _tc = 0; \
    if (++_tc <= 10) \
        fprintf(stderr, "[WARN] Switch case out of range (LR=0x%08X) -- continuing\n", (uint32_t)ctx.lr); \
} while(0)

// ============================================================================
// Safe indirect call with NULL check, range validation, and import thunk
// resolution. Overrides the default PPC_CALL_INDIRECT_FUNC from SDK context.h
// which has no null check and crashes on unresolved vtable entries.
// ============================================================================
#undef PPC_CALL_INDIRECT_FUNC
#define PPC_CALL_INDIRECT_FUNC(x) do { \
    uint32_t _target = (x); \
    if (_target == 0) { \
        static int _nc = 0; \
        if (++_nc <= 5) \
            fprintf(stderr, "[WARN] Indirect call to NULL (LR=0x%08X) -- skipping\n", (uint32_t)ctx.lr); \
        ctx.r3.u32 = 0; \
        break; \
    } \
    if (_target < (uint32_t)PPC_CODE_BASE || _target >= (uint32_t)(PPC_CODE_BASE + PPC_CODE_SIZE)) { \
        /* Import thunks are in image range but below code range. */ \
        if (_target >= (uint32_t)PPC_IMAGE_BASE && _target < (uint32_t)PPC_CODE_BASE) { \
            /* Import thunk: lis r11,hi / lwz r12,lo(r11) / mtctr r12 / bctr */ \
            uint32_t insn0 = PPC_LOAD_U32(_target);      /* lis r11, X */ \
            uint32_t insn1 = PPC_LOAD_U32(_target + 4);  /* lwz r12, Y(r11) */ \
            uint16_t hi = insn0 & 0xFFFF; \
            int16_t lo = (int16_t)(insn1 & 0xFFFF); \
            uint32_t iat_addr = ((uint32_t)hi << 16) + lo; \
            uint32_t resolved = PPC_LOAD_U32(iat_addr); \
            { static int _dbg = 0; if (++_dbg <= 5) { \
                uint32_t i2 = PPC_LOAD_U32(_target + 8); \
                uint32_t i3 = PPC_LOAD_U32(_target + 12); \
                fprintf(stderr, "[THUNK] 0x%08X: [%08X %08X %08X %08X] -> IAT=0x%08X -> 0x%08X\n", \
                    _target, insn0, insn1, i2, i3, iat_addr, resolved); fflush(stderr); } } \
            if (resolved >= (uint32_t)PPC_CODE_BASE && resolved < (uint32_t)(PPC_CODE_BASE + PPC_CODE_SIZE)) { \
                PPCFunc* _fn = PPC_LOOKUP_FUNC(base, resolved); \
                if (_fn) { _fn(ctx, base); break; } \
            } \
            static int _imp = 0; \
            if (++_imp <= 20) \
                fprintf(stderr, "[WARN] Import thunk 0x%08X -> IAT 0x%08X -> 0x%08X (unresolved) -- LR=0x%08X\n", \
                        _target, iat_addr, resolved, (uint32_t)ctx.lr); \
            ctx.r3.u32 = 0; \
            break; \
        } \
        static int _oor = 0; \
        if (++_oor <= 20) \
            fprintf(stderr, "[WARN] Indirect call to 0x%08X outside code range -- LR=0x%08X, CTR=0x%08X\n", \
                    _target, (uint32_t)ctx.lr, ctx.ctr.u32); \
        ctx.r3.u32 = 0; \
        break; \
    } \
    PPCFunc* _fn = PPC_LOOKUP_FUNC(base, _target); \
    if (!_fn) { \
        static int _nf = 0; \
        if (++_nf <= 50) \
            fprintf(stderr, "[WARN] Indirect call to 0x%08X: no recompiled function -- LR=0x%08X\n", \
                    _target, (uint32_t)ctx.lr); \
        ctx.r3.u32 = 0; \
        break; \
    } \
    _fn(ctx, base); \
} while(0)

// ============================================================================
// XAM dialog auto-accept redirects.
// The SDK defines these via GUEST_FUNCTION_HOOK in rexkernel.lib (whole-archive)
// which wins the linker symbol race. Macro-redirect all call sites in the
// generated recomp code to our project-level stubs instead.
// ============================================================================
// Only redirect the main message box. The SDK already handles
// XamShowDeviceSelectorUI headlessly, and XamShowMessageBoxUIEx is a no-op stub.
#define __imp__XamShowMessageBoxUI ct_auto_accept_messagebox
