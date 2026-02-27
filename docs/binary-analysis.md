# Crazy Taxi XBLA -- Binary Analysis

## STFS Container

- **Magic:** `LIVE`
- **Title ID:** 0x58410A34
- **Container size:** 219 MB
- **Files extracted:** 112

## XEX2 Header

- **Entry point:** 0x8212A5F0
- **Image base:** 0x82000000
- **Encryption:** AES-128 (Normal)
- **Compression:** LZX (Normal)
- **XDK Version:** 2.0.11626.0
- **Image size:** 0xBC0000 (12,320,768 bytes)

## PE Section Layout

| Section  | Virtual Addr | Virtual Size | Raw Addr   | Raw Size   | Flags            |
|----------|-------------|-------------|------------|------------|------------------|
| .rdata   | 0x00000400  | 0x000B1E54  | 0x00000400 | 0x000B2000 | IDATA R          |
| .pdata   | 0x000B2400  | 0x0000B930  | 0x000B2400 | 0x0000BA00 | IDATA R          |
| .text    | 0x000C0000  | 0x0020434C  | 0x000BDE00 | 0x00204400 | CODE X R         |
| PSFD00   | 0x002C4400  | 0x00004C00  | 0x002C2200 | 0x00004C00 | CODE X R         |
| .data    | 0x002D0000  | 0x006A67B4  | 0x002C6E00 | 0x0013F000 | IDATA R W        |
| .XBMOVIE | 0x00976800  | 0x0000000C  | 0x00405E00 | 0x00000200 | IDATA R W        |
| .idata   | 0x00980000  | 0x00000384  | 0x00406000 | 0x00000400 | IDATA R W        |
| .XBLD    | 0x00990000  | 0x000000E0  | 0x00406400 | 0x00000200 | IDATA R          |
| .reloc   | 0x00990200  | 0x000285B0  | 0x00406600 | 0x00028600 | IDATA R          |

## Code Sections

- **`.text`** -- Main game code: 0x820C0000 - 0x822C434C (2.0 MB)
- **`PSFD00`** -- Additional code (likely CRI middleware): 0x822C4400 - 0x822C9000 (19 KB)
- **Total code range:** 0x820C0000 - 0x822C9000

## ABI Register Save/Restore Functions

```toml
savegprlr_14_address = 0x821843D0
restgprlr_14_address = 0x82184420
savefpr_14_address = 0x82184A50
restfpr_14_address = 0x82184A9C
savevmx_14_address = 0x82186BD0
restvmx_14_address = 0x82186E68
savevmx_64_address = 0x82186C64
restvmx_64_address = 0x82186EFC
```

No `setjmp`/`longjmp` detected.

## Game Data Files

| File | Size | Description |
|------|------|-------------|
| Binc1.afs | 12.2 MB | CRI AFS archive (game data) |
| Binc2.afs | 11.5 MB | CRI AFS archive (game data) |
| Binc3.afs | 3.4 MB | CRI AFS archive (game data) |
| Landdc1.afs | 1.7 MB | CRI AFS archive (Dreamcast level data?) |
| Landdc2.afs | 1.7 MB | CRI AFS archive (Dreamcast level data?) |
| SoundData/music_adx/ | ~88 MB | 14 ADX music tracks |
| NewTexture/*.jpk | ~31 MB | Localized texture packs (6 languages) |

## Notes

- The `PSFD00` section likely contains CRI Middleware code (Crazy Taxi uses CRI's ADX audio and AFS archive format)
- Game uses AFS archives (CRI format) for asset storage, common in SEGA Dreamcast ports
- 14 licensed music tracks in ADX format -- the XBLA version replaced the original Offspring/Bad Religion soundtrack
- Localized texture packs for English, French, German, Italian, Japanese, Spanish
- `.XBMOVIE` section is only 12 bytes -- minimal/stub movie support
- Single-player only (MaxPlayers=1 in ArcadeInfo.xml)
