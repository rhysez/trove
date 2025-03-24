#include <iostream>
#include <filesystem>
#include "args.h"
#include "log.h"
#include "sort.h"

// In Trove, working_dir refers to the directory that we are sorting.

// Trove arguments
// 1: The action trove should take. For example, "sort".
// 2: The directory the action should target. If unspecified, targets current directory.

// argc - argument count
// argv - array of arguments provided
int main(int argc, char *argv[]) {
    std::string version = "1.0.1";
    std::string working_dir = "./";

    if (argc >= 2) {
        // This block checks if target directory exists for any action that requires a directory path.
        // If target directory is not provided, defaults to user's current working directory.
        if (argv[1] == std::string("sort") || argv[1] == std::string("restore")) {
            if (argc > 2 && argv[2]) {
                working_dir = auto_format_dir_arg(argv[2]);
                if (!std::filesystem::exists(working_dir)) {
                    const std::string msg_working_dir_missing = "Could not find directory " + working_dir;
                    log_message(msg_working_dir_missing);
                    return 1;
                }
                const std::string msg_working_dir_exists =
                        "Found " + working_dir + ", using target directory " + working_dir;
                log_message(msg_working_dir_exists);
            }
        }
    } else {
        std::cout << "usage: trove [version] [sort | sort <path-to-directory>] [restore | restore <path-to-directory>]"
                << '\n';
        std::cout << "\n";
        std::cout << "common trove commands:" << "\n";
        std::cout << "version - Get the currently installed version" << '\n';
        std::cout <<
                "sort - Sort all trove compatible files within the provided directory into new subdirectories based on file type"
                << '\n';
        std::cout <<
                "restore - Restore the provided directory to it's original state before any changes made by trove. All trove directories are deleted once emptied."
                << '\n';
        return 0;
    }


    const Sorter sorter{working_dir};

    if (argv[1] == std::string("sort")) {
        sorter.sort();
    } else if (argv[1] == std::string("restore")) {
        sorter.restore();
    } else if (argv[1] == std::string("version")) {
        std::cout << version << '\n';
        return 0;
    }

    std::cout << "Farewell." << '\n';
    return 0;
}
