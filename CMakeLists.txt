cmake_minimum_required(VERSION 3.12)

# This path is relative to the build directory!
SET(PICO_SDK_PATH ../../pico-sdk)

# Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

project(pico_playground C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

# Playground subdirectories:
add_subdirectory("0 - Hello World!")
add_subdirectory("1 - Blinky")