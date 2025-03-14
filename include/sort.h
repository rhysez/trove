//
// Created by Rhys Work on 03/03/2025.
//

#ifndef SORT_H
#define SORT_H
#include <string>
#include <vector>
#include "constants.h"

// Sorter class handles various Trove operations on files at a specified path (m_path)
// The sort method handles the sorting of files into directories based on type
// The restore method finds all Trove directories and lifts their files out.
class Sorter {
private:
    std::string m_path;

public:
    Sorter(std::string path);

    std::string getPath() const {return m_path;}

    void sort() const;
    void restore() const;
};

#endif //SORT_H
