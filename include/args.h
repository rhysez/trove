//
// Created by rhys on 02/03/25.
//

#ifndef ARGS_H
#define ARGS_H
#include <string>

// Automatically formats the provided directory argument with a trailing slash.
// If not provided, returns the path to the current working directory.
std::string autoFormatDirArg(std::string args);

#endif //ARGS_H
