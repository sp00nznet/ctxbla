# XenonRecomp Workflow for Crazy Taxi

Step-by-step guide to recompiling the Crazy Taxi XBLA binary.

## Prerequisites

1. Build XenonRecomp with the Altivec/VMX patches applied:
   ```bash
   cd xenonrecomp
   git apply /path/to/ctxbla/tools/patches/xenonrecomp-altivec-vmx.patch
   git apply /path/to/ctxbla/tools/patches/xenonrecomp-missing-instructions.patch
   cmake --preset default && cmake --build --preset default-release
   ```

2. Build and install ReXGlue SDK v0.2.0:
   ```bash
   cd rexglue-sdk
   git submodule update --init --recursive
   cmake --preset win-amd64
   cmake --build --preset win-amd64-release
   ```

## Step 1: Extract Game Files

```bash
# Extract STFS container
py tools/extract_stfs.py path/to/STFS_PACKAGE extracted/

# Extract PE from XEX
py tools/extract_pe.py extracted/default.xex extracted/default_pe.exe
```

## Step 2: Find ABI Addresses

```bash
py tools/find_abi_addrs.py extracted/default_pe.exe
```

Results are already configured in `config/crazytaxi.toml`.

## Step 3: Detect Switch Tables

```bash
py scripts/extract_switch_tables.py extracted/default_pe.exe > config/crazytaxi_switch_tables.toml
```

Manually verify the output and fix any false positives.

## Step 4: Run XenonRecomp

```bash
xenonrecomp config/crazytaxi.toml
```

This generates `ppc/crazytaxi_recomp.*.cpp` files -- the recompiled PPC code.

## Step 5: Generate ReXGlue Bindings

```bash
rexglue codegen config/crazytaxi_rexglue.toml
```

This generates:
- `generated/crazytaxi_config.h` -- address constants
- `generated/crazytaxi_init.h` -- function declarations and macro overrides
- `generated/crazytaxi_init.cpp` -- function mapping table
- `generated/sources.cmake` -- CMake source list

## Step 6: Build

```bash
cd project
cmake --preset win-amd64 -DREXSDK_DIR=/path/to/rexglue-sdk
cmake --build --preset win-amd64-release
```

## Step 7: Run

```bash
./out/build/win-amd64/Release/crazytaxi /path/to/extracted/
```

## Troubleshooting

### Missing PPC instructions
If XenonRecomp fails on unrecognized instructions, check if they're Altivec/VMX
instructions and apply the patches in `tools/patches/`.

### Switch table errors
Indirect branches that XenonRecomp can't resolve are usually switch statements.
Add entries to `config/crazytaxi_switch_tables.toml`.

### Crash on startup
Check `crazytaxi_crash.log` for the exception address. Map it back to a PPC
function using the function mapping table.
