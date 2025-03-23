#!/bin/bash

# Define build directory
BUILD_DIR="build"

if [ ! -d "$BUILD_DIR" ]; then
    mkdir "$BUILD_DIR"
fi

cd "$BUILD_DIR"

# Run CMake to configure the project
cmake ..

# Build the project using the Ninja build files
cmake --build .

