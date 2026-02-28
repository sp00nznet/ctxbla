// Crazy Taxi (XBLA) -- Game-specific Xbox 360 API stubs
//
// These override or supplement the ReXGlue SDK's built-in kernel stubs
// for functionality specific to Crazy Taxi.

#include "crazytaxi_config.h"
#include <rex/runtime/guest/context.h>
#include <rex/runtime/guest/memory.h>
#include <rex/kernel/kernel_state.h>
#include <rex/kernel/xtypes.h>
#include <rex/memory/utils.h>
#include <cstdio>

using namespace rex::runtime::guest;
using rex::X_RESULT;

#define CT_STUB_RETURN(name, val) \
    extern "C" PPC_FUNC(name) { (void)base; ctx.r3.u64 = (val); }

#define CT_STUB(name) CT_STUB_RETURN(name, 0)

// ---------------------------------------------------------------------------
// XAM message box auto-accept
//
// The SDK renders XAM message boxes via ImGui, but the text encoding from
// guest memory comes through garbled.  Instead of showing broken UI, we
// auto-select button 0 (the primary/accept action) and complete the
// overlapped I/O via the deferred dispatch queue (matching the SDK's own
// xeXamDispatchHeadless timing).
//
// Called via macro redirect in ppc_detail.h -- the recomp code calls
// ct_auto_accept_messagebox instead of __imp__XamShowMessageBoxUI,
// bypassing the SDK's WHOLEARCHIVE symbol entirely.
// ---------------------------------------------------------------------------
extern "C" PPC_FUNC(ct_auto_accept_messagebox) {
    // r3=user_index  r4=title  r5=text  r6=button_count  r7=button_ptrs
    // r8=active_button  r9=flags  r10=result_ptr  stack[0]=overlapped
    uint32_t result_addr = ctx.r10.u32;
    uint32_t overlapped_addr = __builtin_bswap32(
        *reinterpret_cast<uint32_t*>(base + ctx.r1.u32 + 0x54));

    auto* ks = rex::kernel::kernel_state();

    // Callback: write button 0 (accept/OK) to result pointer
    auto run = [base, result_addr]() -> X_RESULT {
        if (result_addr) {
            rex::memory::store_and_swap<uint32_t>(base + result_addr, 0u);
        }
        return X_ERROR_SUCCESS;
    };

    // Pre/post: broadcast XN_SYS_UI on/off like the SDK's xeXamDispatchHeadless
    auto pre = []() {
        rex::kernel::kernel_state()->BroadcastNotification(0x9, true);
    };
    auto post = []() {
        rex::kernel::kernel_state()->BroadcastNotification(0x9, false);
    };

    if (overlapped_addr) {
        // Deferred: returns IO_PENDING, dispatch thread completes after ~100ms
        ks->CompleteOverlappedDeferred(
            std::move(run), overlapped_addr, std::move(pre), std::move(post));
        ctx.r3.u64 = X_ERROR_IO_PENDING;
    } else {
        // Synchronous
        pre();
        run();
        post();
        ctx.r3.u64 = X_ERROR_SUCCESS;
    }
}

// XAM UI stubs (no-op)
CT_STUB(__imp__XamShowGamerCardUI)
CT_STUB(__imp__XamShowAchievementsUI)
CT_STUB(__imp__XamShowMarketplaceUI)
CT_STUB(__imp__XamShowFriendsUI)
CT_STUB(__imp__XamShowMessageComposeUI)

// Networking stubs (XNetStartup/XNetCleanup provided by SDK)
CT_STUB(__imp__NetDll_XNetUnregisterInAddr)
CT_STUB(__imp__NetDll_XNetConnect)
CT_STUB(__imp__NetDll_XNetGetConnectStatus)

// USB Camera stubs
CT_STUB(__imp__XUsbcamCreate)
CT_STUB(__imp__XUsbcamDestroy)
CT_STUB(__imp__XUsbcamGetState)
CT_STUB(__imp__XUsbcamSetConfig)
CT_STUB(__imp__XUsbcamSetView)
CT_STUB(__imp__XUsbcamSetCaptureMode)
CT_STUB(__imp__XUsbcamReadFrame)

// Leaderboard / Content stubs
CT_STUB(__imp__XUserWriteAchievements)
CT_STUB(__imp__XUserCreateStatsEnumeratorByRank)
CT_STUB(__imp__XUserCreateStatsEnumeratorByXuid)
CT_STUB(__imp__XamShowGamerCardUIForXUID)
CT_STUB(__imp__XamUserCreateStatsEnumerator)

// Kernel IO stubs
CT_STUB(__imp__IoCheckShareAccess)
CT_STUB(__imp__IoCompleteRequest)
CT_STUB(__imp__IoDeleteDevice)
CT_STUB(__imp__IoInvalidDeviceRequest)
CT_STUB(__imp__IoRemoveShareAccess)
CT_STUB(__imp__IoSetShareAccess)

// Kernel Object Manager stubs
CT_STUB(__imp__ObIsTitleObject)
CT_STUB(__imp__ObReferenceObject)

// Kernel RTL stubs
CT_STUB(__imp__RtlUpcaseUnicodeChar)
