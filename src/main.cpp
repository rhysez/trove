#include <iostream>
#include <filesystem>
#include "args.h"
#include "log.h"
#include "sort.h"
#include "presets.h"

// In Trove, working_dir refers to the directory that we are sorting.

// argc - argument count
// argv - array of arguments provided
int main(int argc, char *argv[]) {
    Presets presets;

    std::string preset = presets.TYPE;

    std::string working_dir;

    if (argc > 1) {
        working_dir = auto_format_dir_arg(argv[1]);
    } else {
        working_dir = "./";
    }

    if (!std::filesystem::exists(working_dir)) {
        const std::string msg_working_dir_missing = "Could not find directory " + working_dir;
        log_message(msg_working_dir_missing);
        return 1;
    }

    const std::string msg_working_dir_exists = "Found " + working_dir + ", using target directory " + working_dir;
    log_message(msg_working_dir_exists);

    if (preset == presets.TYPE) {
        sort_files_type(working_dir);
    } else if (preset == presets.SIZE) {
        std::cerr << "Preset 'size' not yet available" << '\n';
        return 1;
    } else {
        std::cerr << "Unknown preset: " << preset << '\n';
        return 1;
    }

    const std::string msg_process_ended = "Successfully finished all required jobs";
    log_message(msg_process_ended);
    return 0;
}
