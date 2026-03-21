#include "svm.hpp"
// This demonstrates all system commands of the VM.
int main() {
	svm::exec_multiple({"1--", "2--", "3--", "4--", "5--", "6--", "0--"});
	return 0;
}
