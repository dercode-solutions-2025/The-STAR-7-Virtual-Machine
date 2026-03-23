#ifndef FILES_HPP
#define FILES_HPP
#include <iostream>
#include <fstream>
#include <string>
#include "execs.hpp"

namespace files {

auto exec_script(const std::string path) {
    std::ifstream file(path);
    if (!file.is_open()) {
        std::cerr << "[SYSTEM] Error opening file." << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(file, line)) {
        execs::exec_single(line);
    }
    file.close();
}
}
#endif
