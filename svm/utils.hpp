#include <iostream>
#ifndef UTILS_HPP
#define UTILS_HPP
namespace utils {
void success() {
	std::cout << "[SYSTEM] Process was successful." << "\n;
}

void insuccess() {
	std::cout << "[SYSTEM] Process was unsuccessful." << "\n";
}

}
#endif
