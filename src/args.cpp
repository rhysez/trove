//
// Created by rhys on 02/03/25.
//

#include <string>

std::string auto_format_dir_arg(std::string args) {
    if (args.empty()) {
        std::string current_dir_path = "./";
        return current_dir_path;
    }

    int args_length = args.length();
    char last_arg_char = args[args_length - 1];

    if (last_arg_char == '/') {
        return args;
    }

    std::string args_formatted = args + "/";
    return args_formatted;
}
