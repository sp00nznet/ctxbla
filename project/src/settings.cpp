// Crazy Taxi (XBLA) -- Settings persistence (TOML)

#include "settings.h"
#include <cstdio>
#include <cstring>

static CrazyTaxiSettings g_settings;

CrazyTaxiSettings& CrazyTaxiSettings::Get() {
    return g_settings;
}

void CrazyTaxiSettings::Load() {
    // TODO: Parse crazytaxi_settings.toml with toml++ when available.
    // For now, use defaults.
    printf("[Settings] Using defaults (TOML loading not yet implemented)\n");
}

void CrazyTaxiSettings::Save() {
    FILE* f = fopen(kSettingsFile, "w");
    if (!f) return;

    fprintf(f, "# Crazy Taxi -- Settings\n\n");
    fprintf(f, "[display]\n");
    fprintf(f, "fullscreen = %s\n", g_settings.fullscreen ? "true" : "false");
    fprintf(f, "window_width = %d\n", g_settings.window_width);
    fprintf(f, "window_height = %d\n", g_settings.window_height);
    fprintf(f, "\n[gameplay]\n");
    fprintf(f, "unlock_all_content = %s\n",
            g_settings.unlock_all_content ? "true" : "false");
    fprintf(f, "\n[debug]\n");
    fprintf(f, "show_console = %s\n",
            g_settings.show_console ? "true" : "false");
    fprintf(f, "show_fps = %s\n", g_settings.show_fps ? "true" : "false");

    fclose(f);
    printf("[Settings] Saved to %s\n", kSettingsFile);
}
