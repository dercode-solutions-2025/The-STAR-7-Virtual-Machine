#include "utils.hpp"
#include "execs.hpp"
#include <string>
#include <list>
#ifndef SVM_HPP
#define SVM_HPP
namespace svm {
	void _main(std::list<std::string> commands) {
		for (std::string inst : commands) {
			execs::exec_single(inst);
		}
	}
}
#endif
