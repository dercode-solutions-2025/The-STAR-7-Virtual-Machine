#include "svm.hpp"
// This demonstrates all incrementor commands of the VM.
int main() {
	svm::exec_multiple({"0++", "1++", "2++", "3++", "4++", "5++", "6++", "7++"});
	return 0;
}
