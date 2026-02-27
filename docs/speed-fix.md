# Speed Fix -- Frame Timing & Timebase Correction

Two timing fixes are critical for correct game speed, ported from
[simpsonsarcade](https://github.com/sp00nznet/simpsonsarcade/blob/main/docs/speed-fix.md).

## Problem

Without correction, the recompiled game runs at the wrong speed because:

1. **VdSwap uses Sleep(16)** -- Windows `Sleep(16)` actually sleeps ~31ms due to
   the default 15.6ms timer granularity. This cuts the frame rate in half.

2. **Host TSC is too fast** -- XenonRecomp translates PPC `mftb` (move from
   timebase) instructions to `__rdtsc()`. The host TSC runs at 3-4 GHz, but the
   Xbox 360 timebase is 49.875 MHz. Without scaling, all time-based logic
   (animations, physics, timers) runs 60-80x too fast.

## Fix 1: VdSwap Frame Limiter

Location: `project/src/stubs.cpp` -- `__imp__VdSwap`

Instead of `Sleep(16)`, we use `QueryPerformanceCounter` for sub-millisecond
precision targeting exactly 16.667ms (60 Hz):

```cpp
extern "C" void __imp__VdSwap(PPCContext& ctx, uint8_t* base) {
    static LARGE_INTEGER s_freq = {}, s_last = {};
    if (s_freq.QuadPart == 0) {
        QueryPerformanceFrequency(&s_freq);
        QueryPerformanceCounter(&s_last);
    }
    const int64_t target_us = 16667; // 60 Hz

    for (;;) {
        // Keep window responsive
        MSG msg;
        while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) { ... }

        LARGE_INTEGER now;
        QueryPerformanceCounter(&now);
        int64_t elapsed_us = (now.QuadPart - s_last.QuadPart) * 1000000 / s_freq.QuadPart;
        if (elapsed_us >= target_us) break;
        if (elapsed_us < target_us - 2000) Sleep(1); // coarse yield
    }
    QueryPerformanceCounter(&s_last);
}
```

The `Sleep(1)` coarse yield prevents burning 100% CPU while still maintaining
<1ms precision for the final approach to the frame boundary.

## Fix 2: Timebase Scaling

Location: `ppc/ppc_config.h` -- `__rdtsc()` macro override

Every PPC `mftb` instruction generates a call to `__rdtsc()`. We override this
at compile time to return scaled values matching the Xbox 360 clock:

```cpp
#include <rex/chrono/clock.h>
inline uint64_t __ppc_query_timebase() {
    return rex::chrono::Clock::QueryGuestTickCount();
}
#define __rdtsc() __ppc_query_timebase()
```

The ReXGlue SDK's `QueryGuestTickCount()` returns time scaled to the Xbox 360's
49.875 MHz timebase frequency, with no per-call overhead beyond a single
`QueryPerformanceCounter` and integer multiply/divide.

This intercepts all `mftb` → `__rdtsc()` conversions without modifying any
generated PPC code.

## Why Both Fixes Are Needed

- Fix 1 alone gives correct frame pacing but game logic still runs too fast
  (animations finish instantly, timers expire immediately)
- Fix 2 alone gives correct game logic timing but frames render at uncapped
  speed (tearing, 1000+ FPS, wasted GPU cycles)
- Together they produce authentic 60 Hz gameplay with correct timing on all
  subsystems
