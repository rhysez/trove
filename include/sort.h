//
// Created by Rhys Work on 03/03/2025.
//

#ifndef SORT_H
#define SORT_H
#include <string>
#include <vector>
#include "constants.h"

class Sorter {
public:
    std::string path;
    std::string type;
    std::vector<std::string> files;

    // Add methods
};

void sort_files_type(std::string working_dir);

#endif //SORT_H
