//
// Created by Rhys Work on 03/03/2025.
//
#include "sort.h"
#include <iostream>
#include <filesystem>
#include <vector>

std::vector<std::string> sort_files(std::string path) {
    std::vector<std::string> files;
    // Iterates through each entry in the directory.
    // Takes a reference to the entry, which is of type 'auto' (automatically assigned).
    for (const auto& entry : std::filesystem::directory_iterator(path)) {
        //files.push_back(entry.path());
        std::filesystem::path file = entry.path().extension();
        std::cout << file.string() << '\n';
    }

    return files;
}