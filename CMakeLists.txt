cmake_minimum_required(VERSION 3.21)
project(FPSCounter)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${GEODE_SDK}
)

target_link_libraries(${PROJECT_NAME}
    geode
)

# Include resources
geode_add_resources(${PROJECT_NAME}
    resources/fps.png
)
