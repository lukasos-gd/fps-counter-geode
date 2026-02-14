cmake_minimum_required(VERSION 3.21)
project(FPSCounter)

# Spune lui CMake unde e Geode SDK
set(GEODE_SDK "$ENV{GEODE_SDK}")

# Include Geode CMake helper
include(${GEODE_SDK}/cmake/Geode.cmake)

# Creează librăria modului
geode_add_module(${PROJECT_NAME}
    src/main.cpp
)

# Adaugă resursele (icon)
geode_add_resources(${PROJECT_NAME}
    resources/fps.png
)

# Specifică target platform
set_target_properties(${PROJECT_NAME} PROPERTIES
    GEODE_TARGET_PLATFORM Android
)
