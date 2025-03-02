cmake_minimum_required(VERSION 3.30)
project(trove)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(trove src/main.cpp
        include/spawn_dir.h
        src/spawn_dir.cpp
        include/args.h
        src/args.cpp)
