//
// Created by Rhys Work on 03/03/2025.
//
#include "sort.h"
#include "constants.h"
#include <iostream>
#include <filesystem>
#include <vector>

void sort_files(std::string path) {
    std::filesystem::path images_path = path + DIR_NAME_IMAGES;
    std::filesystem::path documents_path = path + DIR_NAME_DOCUMENTS;
    std::filesystem::path audio_path = path + DIR_NAME_AUDIO;
    std::filesystem::path video_path = path + DIR_NAME_VIDEO;
    std::filesystem::path archives_path = path + DIR_NAME_ARCHIVES;
    std::filesystem::path fonts_path = path + DIR_NAME_FONTS;
    std::filesystem::path application_path = path + DIR_NAME_APPLICATION;
    std::filesystem::path misc_path = path + DIR_NAME_MISC;


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
               if (std::find(extensions_images.begin(), extensions_images.end(), file_extension) != extensions_images.end()) {
                   std::cout << file_extension << '\n';

               }
            };
        }
    }
}