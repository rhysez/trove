//
// Created by Rhys Work on 03/03/2025.
//

#include "log.h"

#include <iostream>
#include <ostream>
#include <string>

// Using a constant reference to the string
// If we passed the string by value instead of reference,
// this would create a copy,
// which is unnecessary when the value will never change.
void log_message(const std::string& message) {
    std::cout << "LOG: " << message << '\n';
}