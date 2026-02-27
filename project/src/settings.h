#pragma once

#include <string>

struct CrazyTaxiSettings {
    // Display
    bool fullscreen = false;
    int window_width = 1280;
    int window_height = 720;

    // Gameplay
    bool unlock_all_content = true;  // Bypass trial/license check

    // Debug
    bool show_console = false;
    bool show_fps = true;

    static CrazyTaxiSettings& Get();
    static void Load();
    static void Save();

private:
    static constexpr const char* kSettingsFile = "crazytaxi_settings.toml";
};
