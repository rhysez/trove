#include <iostream>
#include <filesystem>
#include "args.h"
#include "log.h"
#include "sort.h"
#include "presets.h"

// In Trove, working_dir refers to the directory that we are sorting.

// Trove arguments
// 1: The action trove should take. For example, "sort".
// 2: The directory the action should target. If unspecified, targets current directory.

// argc - argument count
// argv - array of arguments provided
int main(int argc, char *argv[]) {
    Presets presets;
    std::string preset = presets.TYPE;
    std::string version = "1.2.0-alpha";
    std::string working_dir;

    if (argc >= 2) {
        if (argv[1] == std::string("version")) {
            std::cout << version << '\n';
            return 0;
        }

        if (argv[1] == std::string("sort")) {
            // Checks if a directory has been specified. If not, default to current directory.
            if (argc > 2 && argv[2]) {
                working_dir = auto_format_dir_arg(argv[2]);
            } else {
                working_dir = "./";
            }
        } else {
            std::cerr << "Error: Invalid argument at argument 2. Try passing a valid argument after 'trove'." << '\n';
        }
    } else {
        std::cerr << "Missing arguments! Aborting..." << '\n';
    }

    if (!std::filesystem::exists(working_dir)) {
        const std::string msg_working_dir_missing = "Could not find directory " + working_dir;
        log_message(msg_working_dir_missing);
        return 1;
    }
    const std::string msg_working_dir_exists = "Found " + working_dir + ", using target directory " + working_dir;
    log_message(msg_working_dir_exists);

    sort_files_type(working_dir);

    // TODO: Handles 'undo' functionality (placeholder).
    std::string input;
    do {
        std::cout <<
            "Sort action completed. If you are happy with the result, press enter. Otherwise, to undo this action, enter 'undo':"
            << '\n';
        std::getline(std::cin, input);
        if (input == "undo") {
            std::cout << "Running hypothetical undo function" << '\n';
            break;
        }
    } while (!input.empty());

    std::cout << "Farewell." << '\n';
    return 0;
}
