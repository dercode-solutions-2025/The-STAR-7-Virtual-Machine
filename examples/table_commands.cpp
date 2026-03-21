#include "svm.hpp"
// This demonstrates all table commands of the VM.
int main() {
	svm::exec_multiple({"0==", "1==", "2==", "3==", "4==", "5=="});
	return 0;
}
