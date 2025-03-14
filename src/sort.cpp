//
// Created by Rhys Work on 03/03/2025.
//
#include "sort.h"
#include "constants.h"
#include <filesystem>
#include <iostream>
#include <vector>
#include "log.h"

// Class definition matching the definition in our header file
// Members are declared after the ':' and separated by commas
Sorter::Sorter(std::string path) : m_path(path)
{
}

// We also need to define the implementation of the class' member functions
// In sort.h we declare the sort member function. Below we define the implementation.
void Sorter::sort() const {
    for (const auto &entry: std::filesystem::directory_iterator(m_path)) {
        std::filesystem::path file_extension = entry.path().extension();
        std::filesystem::path file_name = entry.path().filename();
        // Iterates through each sortable_file_types struct.
        for (const auto &type: sortable_file_types) {
            bool file_type_found = false;
            for (const auto &extension : type.extensions) {
                if (extension == file_extension) {
                    file_type_found = true;
                    break;
                }
            }
            if (file_type_found) {
                bool dir_exists = std::filesystem::exists(m_path + type.dir_name);
                // If the images directory exists
                if (dir_exists) {
                    // Move to images directory
                    std::string msg_dir_found = "Found directory " + type.dir_name + ", moving " + file_name.string() +
                                                " to " + type.dir_name;
                    log_message(msg_dir_found);
                    std::filesystem::rename(entry.path(), m_path + type.dir_name + file_name.string());
                } else {
                    // Create images directory, then move
                    std::string msg_dir_creating =
                            "Creating directory " + type.dir_name + ", moving " + file_name.string() + " to " + type.
                            dir_name;
                    log_message(msg_dir_creating);
                    std::filesystem::create_directory(m_path + type.dir_name);
                    std::filesystem::rename(entry.path(), m_path + type.dir_name + file_name.string());
                }
            }
        }
    };

    const std::string msg_process_ended = "Successfully finished all required jobs";
    log_message(msg_process_ended);
}

void Sorter::restore() const {
    // Iterate through all files
    for (const auto &entry : std::filesystem::directory_iterator(m_path)) {
        // If file is a directory
        if (std::filesystem::is_directory(entry.path())) {
            std::filesystem::path dir_name = entry.path().filename();
            bool is_trove_dir = false;
            for (const auto &trove_dir_name : DIR_NAMES) {
                // If directory was created by Trove and is not empty
                if (dir_name.string()+"/" == trove_dir_name && !std::filesystem::is_empty(m_path + dir_name.string())) {
                    // Tell program we have found a qualifying directory to restore and break the loop
                    is_trove_dir = true;
                    break;
                }
            }

            if (is_trove_dir) {
                for (const auto &sub_entry : std::filesystem::directory_iterator(entry.path())) {
                    // Move file to parent directory
                    std::filesystem::path restorable_file_name = sub_entry.path().filename();
                    std::filesystem::rename(sub_entry.path(), m_path + restorable_file_name.string());
                    std::string message = "Restored " + sub_entry.path().string();
                    log_message(message);
                }
            } else {
                std::string not_trove_dir = dir_name.string() + " is not a qualifying directory, skipping";
                log_message(not_trove_dir);
            }
        }
    }

    for (const auto &entry : std::filesystem::directory_iterator(m_path)) {
        // If file is a directory
        if (std::filesystem::is_directory(entry.path())) {
            std::filesystem::path dir_name = entry.path().filename();
            bool is_empty_trove_dir = false;
            for (const auto &trove_dir_name : DIR_NAMES) {
                // If directory was created by Trove and is not empty
                if (dir_name.string()+"/" == trove_dir_name && std::filesystem::is_empty(m_path + dir_name.string())) {
                    // Tell program we have found a qualifying directory to restore and break the loop
                    is_empty_trove_dir = true;
                    break;
                }
            }

            if (is_empty_trove_dir) {
                std::filesystem::remove(entry.path());
                std::string deleted_trove_dir = "Deleted " + dir_name.string();
                log_message(deleted_trove_dir);
            } else {
                std::string not_trove_dir = dir_name.string() + " is not a Trove directory, skipping";
                log_message(not_trove_dir);
            }
        }
    }
}
