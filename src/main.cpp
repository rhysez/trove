#include <iostream>
#include <filesystem>
#include "args.h"
#include "log.h"

// In Trove, working_dir refers to the directory that we are sorting.

// argc - argument count
// argv - array of arguments provided
int main(int argc, char *argv[]) {
    std::string working_dir;

    if (argc > 1) {
        working_dir = auto_format_dir_arg(argv[1]);
    } else {
        working_dir = "./";
    }

    if (!std::filesystem::exists(working_dir)) {
        std::filesystem::create_directory(working_dir);
    } else {
        const std::string message = working_dir + " already exists, defaulting to " + working_dir;
        log_message(message);
    }

    return 0;
}
