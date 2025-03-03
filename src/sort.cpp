//
// Created by Rhys Work on 03/03/2025.
//
#include "sort.h"
#include "constants.h"
#include <iostream>
#include <filesystem>
#include <vector>

void sort_files(std::string path) {
    // Iterates through each entry in the directory.
    // Takes a reference to the entry, which is of type 'auto' (automatically assigned).
    for (const auto& entry : std::filesystem::directory_iterator(path)) {
        // The file extension of the current file we want to sort.
        std::filesystem::path file_extension = entry.path().extension();

        // Iterates through every vector of extensions
        for (const std::vector<std::string>& extension_vec : extensions_all) {
            // Iterates through every extension within the current extension vector
            for (const std::string& extension : extension_vec) {
                // If the file extension matches the current extension in the loop,
                // Check if the appropriate directory exists.
                // If it does, move it there.
                // Else, create the directory and then move it there.
                // TODO: Currently we have no way of knowing what the extension type is!
               if (extension == ".docx") {
                   std::cout << extension << '\n';
               }
            };
        }
    }
}