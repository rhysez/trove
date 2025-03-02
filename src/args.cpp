//
// Created by rhys on 02/03/25.
//

#include <string>

std::string autoFormatDirArg(std::string args) {
    if (args.empty()) {
        std::string currentDirPath = "./";
        return currentDirPath;
    }

    int argsLength = args.length();
    char lastArgChar = args[argsLength - 1];

    if (lastArgChar == '/') {
        return args;
    }

    std::string argsWithTrailingSlash = args + "/";
    return argsWithTrailingSlash;
}
