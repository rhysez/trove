#include <iostream>
#include <filesystem>
#include "args.h"
#include "log.h"

// In Trove, workingDir refers to the directory that we are sorting.

// argc - argument count
// argv - array of arguments provided
int main(int argc, char *argv[]) {
    std::string workingDir;

    if (argc > 1) {
        workingDir = autoFormatDirArg(argv[1]);
    } else {
        workingDir = "./";
    }

    if (!std::filesystem::exists(workingDir)) {
        std::filesystem::create_directory(workingDir);
    } else {
        const std::string message = workingDir + " already exists, defaulting to " + workingDir;
        logMessage(message);
    }

    return 0;
}
