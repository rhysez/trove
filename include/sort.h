//
// Created by Rhys Work on 03/03/2025.
//

#ifndef SORT_H
#define SORT_H
#include <string>
#include <vector>
#include "constants.h"

class Sorter {
private:
    std::string m_path;
    std::vector<std::string> m_files;
public:
    Sorter(std::string path, std::vector<std::string> files);

    std::string getPath() const {return m_path;}
    std::vector<std::string> getFiles() const {return m_files;}
};

void sort_files_type(std::string working_dir);

#endif //SORT_H
