//
// Created by Rhys Work on 03/03/2025.
//
#include "sort.h"
#include "constants.h"
#include <filesystem>
#include <vector>
#include "log.h"

void sort_files_type(std::string path) {
    // Iterates through each entry in the directory.
    // Takes a reference to the entry, which is of type 'auto' (automatically assigned).
    for (const auto &entry: std::filesystem::directory_iterator(path)) {
        std::filesystem::path file_extension = entry.path().extension();
        std::filesystem::path file_name = entry.path().filename();
        // Iterates through each extension vector and checks for a match on file_extension.
        for (const auto &type: sortable_file_types) {
            if (std::find(type.extensions.begin(), type.extensions.end(), file_extension) != type.extensions.end()) {
                bool dir_exists = std::filesystem::exists(path + type.dir_name);
                // If the images directory exists
                if (dir_exists) {
                    // Move to images directory
                    std::string msg_dir_found = "Found directory " + type.dir_name + ", moving " + file_name.string() +
                                                " to " + type.dir_name;
                    log_message(msg_dir_found);
                    std::filesystem::rename(entry.path(), path + type.dir_name + file_name.string());
                } else {
                    // Create images directory, then move
                    std::string msg_dir_creating =
                            "Creating directory " + type.dir_name + ", moving " + file_name.string() + " to " + type.
                            dir_name;
                    log_message(msg_dir_creating);
                    std::filesystem::create_directory(path + type.dir_name);
                    std::filesystem::rename(entry.path(), path + type.dir_name + file_name.string());
                }
            }
        }
    };
}
