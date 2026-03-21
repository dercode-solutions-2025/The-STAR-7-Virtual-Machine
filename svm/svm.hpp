/*

Written in C++17 starting on 3-6-26

--COMMAND TABLE--

x-- : System Commands
x++ : Inc Commands
x== : Table commands

0-- : Exit
1-- : Display system info
2-- : Display C++ version
3-- : Print hostname
4-- : Print current file
5-- : List dependencies
6-- : See current update number and features

0++ : Increment inc by 1
1++ : Decrement inc by 1
2++ : Divide inc by 2
3++ : Print inc
4++ : Convert inc to ASCII
5++ : Multiply inc by 2
6++ : Reset inc

0== : Push inc to front of table
1== : Push inc to back of table
2== : Print ASCII value of table
3== : Reset table
4== : Print table

*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <list>
#ifndef SVM_H
#define SVM_H
namespace svm {

void successful() {
	std::cout << "[SYSTEM] Process was successful.";
}

void unsuccessful() {
	std::cout << "[SYSTEM] Process was unsuccessful.";
}

 int inc;
std::list<int> table = {};
std::list<std::string> dependencies = {"iostream", "string", "cstdlib", "list"};
std::string update = "Turned the VM into a .hpp module.";
double version = 0.7;

void exec(std::string opcode) {
	std::cout << "\n";
	if(opcode == "0--") {
	       std::cout << "[SYSTEM] Exiting...\n";
	       successful();
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
    	std::cout << __cplusplus << "\n";
    } else if(opcode == "3--") {
    	system("echo '[SYSTEM]'");
    	system("hostname");
    } else if(opcode == "4--") {
    	std::cout << __FILE__ << "\n";
    } else if(opcode == "5--") {
    	for(std::string i : dependencies) {
    		std::cout << i << "\n";
    	}
    } else if(opcode == "6--") {
    	std::cout << "Update:" << update << "\n" << "Version Number: " << version << "\n";
    } else if(opcode == "0++") {
    	inc++;
    } else if(opcode == "1++") {
    	inc--;
    } else if(opcode == "2++") {
    	inc = inc / 2;
    } else if(opcode == "3++") {
    	std::cout << inc << "\n";
    } else if(opcode == "4++") {
    	char ascii = inc;
    	std::cout << ascii << "\n";
    } else if(opcode == "5++") {
    	inc = inc * 2;
    } else if(opcode == "0==") {
    	table.push_front(inc);
    } else if(opcode == "1==") {
    	table.push_back(inc);
    } else if(opcode == "2==") {
    	for(char i : table) {
    		std::cout << i << " ";
    	}
    	std::cout << "\n";
    } else if(opcode == "3==") {
    	table = {};
    } else if(opcode == "4==") {
    	for(int i : table) {
    		std::cout << i << " ";
    	}
    	std::cout << "\n";
    }
}

void _main() {
	std::cout << "[SYSTEM] Usage: #include \"svm.hpp"\ << "\n" << "[SYSTEM] Use inside script (x = any opcode): svm::exec(x) Or, by writing \"using namespace svm;"\: << "\n" << "exec(x);";
}
#endif
