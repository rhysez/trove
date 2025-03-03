#include <iostream>
#include "args.h"
#include <filesystem>

// In Trove, workingDir refers to the directory that we are sorting.

// argc - argument count
// argv - array of arguments provided
int main(int argc, char *argv[]) {
    std::cout << "Running Trove version 1.0\n";

    std::string workingDir;

    if (argc > 1) {
        workingDir = autoFormatDirArg(argv[1]);
    } else {
        workingDir = "./";
    }

    if (!std::filesystem::exists(workingDir)) {
        std::filesystem::create_directory(workingDir);
    } else {
        std::cout << "LOG: " << workingDir << " already exists, defaulting to" << workingDir << "\n";
    }

    return 0;
}
