// Crazy Taxi (XBLA) -- Game-specific Xbox 360 API stubs
//
// These override or supplement the ReXGlue SDK's built-in kernel stubs
// for functionality specific to Crazy Taxi.

#include "crazytaxi_config.h"
#include <rex/runtime/guest/context.h>
#include <rex/runtime/guest/memory.h>
#include <cstdio>

using namespace rex::runtime::guest;

#define CT_STUB_RETURN(name, val) \
    extern "C" PPC_FUNC(name) { (void)base; ctx.r3.u64 = (val); }

#define CT_STUB(name) CT_STUB_RETURN(name, 0)

// XAM UI stubs
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
