# Crazy Taxi -- Development Progress

## Phase 1: Project Setup & Binary Extraction (DONE)

- Initialized repository and project structure
- Extracted STFS container (LIVE package, 112 files)
- Extracted PE image from XEX2 (LZX decompression, AES-128 decryption)
- Analyzed PE sections: 9 sections, 2.0 MB code, 11.7 MB total image
- Found all 8 ABI register save/restore function addresses
- Set up tools: extract_stfs.py, extract_pe.py, find_abi_addrs.py, etc.
- Created XenonRecomp configuration (crazytaxi.toml)
- Created ReXGlue codegen configuration (crazytaxi_rexglue.toml)
- Documented binary analysis (docs/binary-analysis.md)

### Game file inventory
- **Code:** default.xex (2.7 MB compressed, 12.3 MB decompressed PE)
- **Data archives:** Binc1.afs (12.2 MB), Binc2.afs (11.5 MB), Binc3.afs (3.4 MB)
- **Level data:** Landdc1.afs (1.7 MB), Landdc2.afs (1.7 MB)
- **Music:** 14 ADX tracks in SoundData/music_adx/ (~88 MB total)
- **Textures:** Localized UI in NewTexture/ (6 languages, ~31 MB)
- **Misc:** 12 achievement images, avatar awards, marketplace images

## Phase 2: Runtime Scaffolding (DONE)

- Created project/CMakeLists.txt targeting ReXGlue SDK v0.2.0
  - Uses `rex::system` (renamed from `rex::runtime` in v0.2.0)
  - Uses `ReXApp` base class and `REX_DEFINE_APP` macro (new in v0.2.0)
  - Uses `rexglue_configure_target()` helper (new in v0.2.0)
- Created CrazyTaxiApp main.cpp with:
  - ReXApp inheritance pattern
  - VEH crash handler with full register dump
  - Null page handler for guest memory safety
  - Crash logging to crazytaxi_crash.log
- Created game-specific stubs (stubs.cpp):
  - XAM UI stubs (achievements, marketplace, friends)
  - Network stubs (XNet, single-player only)
  - USB camera stubs
  - VdSwap frame limiter (60 Hz via QueryPerformanceCounter)
- Created settings system (TOML persistence)
- Created menu system placeholder (ImGui)
- Created test boot harness (console-only)
- Ported timing fixes from simpsonsarcade:
  - VdSwap precise frame pacing
  - Timebase scaling (__rdtsc -> Xbox 360 49.875 MHz)

- Added keyboard-to-gamepad input driver (racing layout: Space=accel, Shift=brake, C=drift)
- Added XEX import parser tool (tools/parse_xex_imports.py)
- Documented speed fix (docs/speed-fix.md)

## Phase 3: PPC Recompilation (IN PROGRESS)

- [x] Detect switch tables (13 found, auto-extracted)
- [ ] Run XenonRecomp with patches
- [ ] Resolve missing instructions (if any)
- [ ] Generate ReXGlue bindings
- [ ] Fix cross-function goto issues (if any)

## Phase 4: Get It Running (TODO)

- [ ] Load XEX image into runtime
- [ ] First boot -- crash and iterate
- [ ] Identify and stub missing functions
- [ ] Get past CRI middleware init
- [ ] Get to main menu
- [ ] Get into gameplay

## Phase 5: Polish (TODO)

- [ ] Audio (ADX music, sound effects)
- [x] Keyboard input mapping (done)
- [ ] Gamepad support (SDL, via rex::input)
- [ ] Content/license unlock
- [ ] Achievement display
- [ ] ImGui config dialogs
- [ ] Performance optimization
