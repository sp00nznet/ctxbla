# Crazy Taxi XBLA Static Recompilation

## Build & Run

```bash
# Prerequisites: Clang 18+, Ninja, CMake 3.25+, ReXGlue SDK v0.2.0
cd project
cmake --preset win-amd64 -DREXSDK_DIR=/path/to/rexglue-sdk
cmake --build --preset win-amd64-release
./out/build/win-amd64/Release/crazytaxi /path/to/extracted/
```

## Key Addresses

- **Image base:** 0x82000000
- **Entry point (_xstart):** 0x8212A5F0
- **Code range:** 0x820C0000 - 0x822C9000 (2.0 MB)
- **Import thunks:** 0x822C37DC - 0x822C433C

## Architecture Notes

- Uses ReXGlue SDK v0.2.0 (not the older version from simpsonsarcade/vig8):
  - `rex::system` (renamed from `rex::runtime`)
  - `ReXApp` base class + `REX_DEFINE_APP` macro
  - `rexglue_configure_target()` CMake helper
  - All deps vendored (no vcpkg)
- Timing fixes ported from simpsonsarcade (VdSwap + timebase scaling)
- 13 switch tables auto-detected, may need manual additions during recomp
- Single-player only (MaxPlayers=1)
- Game uses CRI middleware (ADX audio, AFS archives)
- PSFD00 section contains CRI SDK code

## File Inventory

- 3 main AFS archives (Binc1-3.afs), 2 level archives (Landdc1-2.afs)
- 14 ADX music tracks in SoundData/music_adx/
- Localized texture packs (6 languages) in NewTexture/
- 12 achievement images
