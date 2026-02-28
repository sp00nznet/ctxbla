# Crazy Taxi XBLA Static Recompilation

## Build & Run

```bash
# Prerequisites: Clang 18+, Ninja, CMake 3.25+, ReXGlue SDK v0.1.0
cd project
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_C_COMPILER="C:/Program Files/LLVM/bin/clang.exe" \
  -DCMAKE_CXX_COMPILER="C:/Program Files/LLVM/bin/clang++.exe" \
  -DCMAKE_LINKER="C:/Program Files/LLVM/bin/lld-link.exe" \
  -DCMAKE_RC_COMPILER="C:/Program Files/LLVM/bin/llvm-rc.exe"
ninja -C build
./build/crazytaxi /path/to/extracted/

# Test harness (no GUI):
./build/crazytaxi_test /path/to/extracted/
```

## Key Addresses

- **Image base:** 0x82000000
- **Entry point (_xstart):** 0x8212A5F0
- **Code range:** 0x820C0000 - 0x822C9000 (2.0 MB)
- **Import thunks:** 0x822C37DC - 0x822C433C

## Architecture Notes

- Uses ReXGlue SDK v0.1.0:
  - `rex::ui::WindowedApp` base class + `XE_DEFINE_WINDOWED_APP` macro
  - `rex::Runtime` for game runtime management
  - Libraries: rex::core, rex::runtime, rex::kernel, rex::graphics, rex::input, rex::ui
  - `PPC_FUNC(name)` macro for stub definitions
  - `PPC_CALL_INDIRECT_FUNC(x)` single-argument macro (ctx/base in scope)
  - `PPC_LOOKUP_FUNC(base, target)` two-argument lookup
  - `PPC_INCLUDE_DETAIL` compile def for ppc_detail.h inclusion
- Timing fixes in ppc/ppc_detail.h:
  - __rdtsc() override -> rex::chrono::Clock::QueryGuestTickCount()
  - PPC_PHYS_HOST_OFFSET for physical address MMIO interception
- 13 switch tables auto-detected, may need manual additions during recomp
- Single-player only (MaxPlayers=1)
- Game uses CRI middleware (ADX audio, AFS archives)
- PSFD00 section contains CRI SDK code

## Tool Locations

- XenonRecomp (patched): E:\vig8\tools\XenonRecomp\build\XenonRecomp\XenonRecomp.exe
- rexglue: via SDK at tools/rexglue-sdk (junction to E:\simpsons\simpsonsarcade\tools\rexglue-sdk)
- Compiler: C:\Program Files\LLVM\bin\clang++.exe (v21.1.8)

## Recompilation Stats

- XenonRecomp: 13,837 PPC functions, 55 files, 40 MB
- rexglue codegen: 9,008 functions recompiled, 19 source files + init
- 23 custom PPC instruction handlers added to XenonRecomp
- 2 manual function definitions in rexglue config (tail call targets)

## File Inventory

- 3 main AFS archives (Binc1-3.afs), 2 level archives (Landdc1-2.afs)
- 14 ADX music tracks in SoundData/music_adx/
- Localized texture packs (6 languages) in NewTexture/
- 12 achievement images
