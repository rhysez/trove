cmake_minimum_required(VERSION 3.30)
project(trove)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(trove src/main.cpp
        include/args.h
        src/args.cpp
        include/log.h
        src/log.cpp
        include/constants.h
        include/sort.h
        src/sort.cpp
        include/presets.h
        src/constants.cpp
)
