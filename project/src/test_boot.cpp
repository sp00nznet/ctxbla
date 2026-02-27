// Crazy Taxi (XBLA) -- Console test harness (no GUI)
// Used for testing recompiled code without the full graphics stack.

#include "generated/crazytaxi_config.h"
#include "generated/crazytaxi_init.h"
#include "settings.h"

#include <rex/runtime.h>
#include <rex/ppc.h>
#include <rex/logging.h>

#include <cstdio>

#ifdef _WIN32
#include <windows.h>
#endif

int main(int argc, char* argv[]) {
    printf("=== Crazy Taxi -- Test Boot ===\n");
    printf("Image base: 0x%08X\n", PPC_IMAGE_BASE);
    printf("Code base:  0x%08X\n", PPC_CODE_BASE);
    printf("Code size:  0x%08X\n", PPC_CODE_SIZE);
    printf("Image size: 0x%08X\n", PPC_IMAGE_SIZE);
    printf("Functions:  %zu\n", PPCFuncMappings.size());

    if (argc < 2) {
        printf("\nUsage: crazytaxi_test <path_to_extracted_data>\n");
        return 1;
    }

    printf("\nData path: %s\n", argv[1]);
    printf("TODO: Initialize runtime and launch module\n");

    return 0;
}
