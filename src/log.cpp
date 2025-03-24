//
// Created by Rhys Work on 03/03/2025.
//

#include "log.h"

#include <iostream>
#include <ostream>
#include <string>

void log_message(const std::string& message) {
    std::cout << "[\033[32mTROVE\033[0m] LOG: " << message << '\n';
}