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

    bool images_exists = std::filesystem::exists(images_path);
    bool documents_exists = std::filesystem::exists(documents_path);
    bool audio_exists = std::filesystem::exists(audio_path);
    bool video_exists = std::filesystem::exists(video_path);
    bool archives_exists = std::filesystem::exists(archives_path);
    bool fonts_exists = std::filesystem::exists(fonts_path);
    bool application_exists = std::filesystem::exists(application_path);
    bool misc_exists = std::filesystem::exists(misc_path);

    // Iterates through each entry in the directory.
    // Takes a reference to the entry, which is of type 'auto' (automatically assigned).
    for (const auto &entry: std::filesystem::directory_iterator(path)) {
        std::filesystem::path file_extension = entry.path().extension();
        std::filesystem::path file_name = entry.path().filename();
        // Iterates through each extension vector and checks for a match on file_extension.
        if (std::find(images.extensions.begin(), images.extensions.end(), file_extension) != images.extensions.end()) {
            bool dir_exists = std::filesystem::exists(path + images.dir_name);
            // If the images directory exists
            if (dir_exists) {
                // Move to images directory
                std::filesystem::rename(entry.path(), path + images.dir_name + file_name.string());
            } else {
                // Create images directory, then move
                std::filesystem::create_directory(path + images.dir_name);
                std::filesystem::rename(entry.path(), path + images.dir_name + file_name.string());
            }
        }
    };
}
