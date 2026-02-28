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

- Created project/CMakeLists.txt targeting ReXGlue SDK v0.1.0
- Created CrazyTaxiApp main.cpp with:
  - rex::ui::WindowedApp pattern (XE_DEFINE_WINDOWED_APP)
  - VEH crash handler with full register dump + stack trace
  - Guest page commit handler for demand-paged memory
  - Crash logging to crazytaxi_crash.log
  - ImGui debug overlay (FPS counter)
- Created game-specific stubs (stubs.cpp):
  - XAM UI stubs (achievements, marketplace, friends, gamer card)
  - Network stubs (XNet, single-player only)
  - USB camera stubs
  - Kernel IO stubs (IoCheckShareAccess, IoCompleteRequest, etc.)
  - Object Manager stubs (ObIsTitleObject, ObReferenceObject)
  - RTL stubs (RtlUpcaseUnicodeChar)
  - Leaderboard/stats stubs
- Created settings system (TOML persistence)
- Created menu system placeholder (ImGui)
- Created test boot harness (console-only)
- Ported timing fixes from simpsonsarcade:
  - Timebase scaling (__rdtsc -> rex::chrono::Clock::QueryGuestTickCount())
  - Physical address host offset for MMIO interception
- Added keyboard-to-gamepad input driver (racing layout)
- Added XEX import parser tool (tools/parse_xex_imports.py)

## Phase 3: PPC Recompilation (DONE)

- [x] Detect switch tables (13 found, auto-extracted)
- [x] Run XenonRecomp -- 13,837 PPC functions, 55 C++ files, 40 MB
- [x] Resolve missing instructions -- 23 new handlers patched into XenonRecomp:
  - Integer ALU: ADDC, ADDME, SUBFZE, MULHD
  - Branch: BDZF, BDNZT (+ BDNZF generalized CR fix)
  - Load with update: LBZUX, LDUX, LFDU, LFDUX, LFSU, LFSUX, LHAU, LHZU, LHZUX
  - Store with update: STBUX, STDUX, STFDU, STFDUX, STFSU, STFSUX, STHU, STHUX
  - VMX: VSEL128, LVEHX
- [x] Generate ReXGlue bindings -- 9,008 functions recompiled, 19 source files
- [x] Fix cross-function goto issues -- 2 tail call targets manually defined
- [x] Build successfully -- both crazytaxi.exe (20 MB) and crazytaxi_test.exe

## Phase 4: Get It Running (DONE)

- [x] Load XEX image into runtime (9,374 functions registered)
- [x] First boot -- game boots cleanly, zero crashes!
  - GPU initialized (D3D12 on RTX 5070)
  - Audio system running (XMA decoder + audio worker threads)
  - Input polling active (XamInputGetCapabilities/State)
  - Game threads spawning (main, load proc, GPU, VSync, etc.)
  - GPU rendering 1280x720 framebuffer (resolve + swap)
  - Texture loading working (920x690 8888 textures)
  - Memory management working (virtual + physical allocation)
  - File I/O working (game:\default.xex, game:\config.txt)
- [x] Identify and stub missing functions (11 kernel stubs added)
- [x] Get past CRI middleware init -- CRI code executing normally

## Phase 5: Polish (IN PROGRESS)

- [ ] Audio (ADX music, sound effects) -- XMA decoder running, needs testing
- [x] Keyboard input mapping (done)
- [ ] Gamepad support (SDL, via rex::input)
- [ ] Content/license unlock
- [ ] Achievement display
- [ ] ImGui config dialogs
- [ ] Performance optimization
- [ ] Full gameplay testing
