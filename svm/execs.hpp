#include "utils.hpp"
#include "execs.hpp"
#include "files.hpp"
#include <string>
#include <list>
#ifndef SVM_HPP
#define SVM_HPP
namespace svm {
	void main_comms(std::list<std::string> commands) {
		for (std::string inst : commands) {
			execs::exec_single(inst);
		}
	}
	auto main_script(const std::string path) {
		xoxo::exec_script(path);
	}
}
#endif
