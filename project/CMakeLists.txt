cmake_minimum_required(VERSION 3.25)
project(crazytaxi LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ── ReXGlue SDK ─────────────────────────────────────────────────────
# Prefer source-tree inclusion (REXSDK_DIR), fall back to installed package.
set(REXSDK_DIR "" CACHE PATH "Path to rexglue-sdk source tree")
if(REXSDK_DIR)
    add_subdirectory("${REXSDK_DIR}" rexglue-sdk)
else()
    find_package(rexglue REQUIRED CONFIG)
endif()

# ── Generated sources (PPC recomp output) ───────────────────────────
include("${CMAKE_CURRENT_SOURCE_DIR}/../generated/sources.cmake")

# ── Main executable ─────────────────────────────────────────────────
add_executable(crazytaxi WIN32
    src/main.cpp
    src/stubs.cpp
    src/settings.cpp
    src/menu.cpp
    src/keyboard_driver.cpp
    ${CRAZYTAXI_GENERATED_SOURCES}
)

target_include_directories(crazytaxi PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/../ppc"
    "${CMAKE_CURRENT_SOURCE_DIR}/../generated"
)

target_compile_options(crazytaxi PRIVATE
    -fno-strict-aliasing
    -ffp-model=strict
    -fno-char8_t
    -msse4.1
)

target_link_libraries(crazytaxi PRIVATE
    rex::core
    rex::system
    rex::kernel
    rex::graphics
    rex::input
    rex::ui
)

# Apply platform-specific configuration (entry point, linker flags, etc.)
rexglue_configure_target(crazytaxi)

# Force-link kernel stubs (only referenced by generated PPC code)
if(WIN32)
    target_link_options(crazytaxi PRIVATE /force:multiple)
endif()

# ── Test harness (console, no GUI) ──────────────────────────────────
add_executable(crazytaxi_test
    src/test_boot.cpp
    src/stubs.cpp
    src/settings.cpp
    ${CRAZYTAXI_GENERATED_SOURCES}
)

target_include_directories(crazytaxi_test PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/../ppc"
    "${CMAKE_CURRENT_SOURCE_DIR}/../generated"
)

target_compile_options(crazytaxi_test PRIVATE
    -fno-strict-aliasing
    -ffp-model=strict
    -fno-char8_t
    -msse4.1
)

target_link_libraries(crazytaxi_test PRIVATE
    rex::core
    rex::system
    rex::kernel
    rex::graphics
    rex::ui
)

rexglue_configure_target(crazytaxi_test)

if(WIN32)
    target_link_options(crazytaxi_test PRIVATE /force:multiple)
endif()
