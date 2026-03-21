#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#include "utils.hpp"
#ifndef EXECS_HPP
#define EXECS_HPP
namespace execs {
void repl();
int inc;
std::list<int> table = {};
std::list<std::string> dependencies = {"iostream", "string", "cstdlib", "list"};
std::string update = "[SYSTEM] Made the entire VM and library modular.\n<Usage>: svm::_main(command)";
double version = 0.9;
void exec_single(std::string opcode) {
	std::cout << "\n";
	if(opcode == "0--") {
	       std::cout << "[SYSTEM] Exiting...\n";
	       utils::success();
	       std::exit(0);
    } else if(opcode == "1--") {
        system("echo '[SYSTEM]'");
        #ifdef _WIN32
            system("systeminfo");
        #elif defined(__linux__)
            system("uname -a");
        #elif defined(__APPLE__)
        	system("system_profiler");
        #else
        	std::cout << "[SYSTEM] Your operating system is not supported." << "\n";
        #endif
    } else if(opcode == "2--") {
    	std::cout << "[SYSTEM] \n" << __cplusplus << "\n";
    } else if(opcode == "3--") {
    	system("echo '[SYSTEM] '");
    	system("hostname");
    } else if(opcode == "4--") {
    	std::cout << "[SYSTEM] \n" << __FILE__ << "\n";
    } else if(opcode == "5--") {
    	std::cout << "[SYSTEM] " << "\n";
    	for(std::string i : dependencies) {
    		std::cout << i << "\n";
    	}
    } else if(opcode == "6--") {
    	std::cout << "[SYSTEM] Update:" << update << "\n" << "[SYSTEM] " << "Version Number: " << version << "\n";
    } else if(opcode == "7--") {
    	repl();
    } else if(opcode == "0++") {
    	inc++;
    } else if(opcode == "1++") {
    	inc--;
    } else if(opcode == "2++") {
    	inc = inc / 2;
    } else if(opcode == "3++") {
    	std::cout << "[SYSTEM] " << inc << "\n";
    } else if(opcode == "4++") {
    	char ascii = inc;
    	std::cout << "[SYSTEM] " << ascii << "\n";
    } else if(opcode == "5++") {
    	inc = inc * 2;
    } else if(opcode == "6++") {
    	inc = 0;
    } else if(opcode == "0==") {
    	table.push_front(inc);
    } else if(opcode == "1==") {
    	table.push_back(inc);
    } else if(opcode == "2==") {
    	std::cout << "[SYSTEM] " << "\n";
    	for(char i : table) {
    		std::cout << i;
    	}
    	std::cout << "\n";
    } else if(opcode == "3==") {
    	table = {};
    } else if(opcode == "4==") {
    	std::cout << "[SYSTEM] ";
    	for(int i : table) {
    		std::cout << i << " ";
    	}
    	std::cout << "\n";
    } else if(opcode == "5==") {
    	char incascii = inc;
    	table.push_front(incascii);
    } else if(opcode == "6==") {
    	char asciinc = inc;
    	table.push_back(asciinc);
    }
}
void exec_multiple(std::list<std::string> commands) {
	for(std::string command : commands) {
		exec_single(command);
	}
}
void repl() {
	std::cout << "=========================\nVersion: " << version << "\nUse '0--' to exit.\n=========================\n", version;
	while(1) {
		std::cout << "\n>>> ";
		std::string command;
		std::getline(std::cin, command);
		if(command.empty()) {
			utils::insuccess();
			std::exit(0);
		} else {
			exec_single(command);
		}
	}
}
}
#endif
