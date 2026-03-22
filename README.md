# STAR-7 - A blazingly fast, lightweight, and hands-free virtual machine.
Originally written in C++17 in early of March.
## Roadmap
The current plan for STAR-7 is to make it a library and stem away from it being just a VM.
## Rules for Committing
* Format text properly (ex. std::cout << "[SYSTEM] (insert text here)" << "\n")
* Don't use "using namespace x", as it may cause naming issues.
* Use the "[SYSTEM]" handle for text output.
* If editing the main README, and if adding a new section, use "##" for main sections and "###" for subsections.
* External libraries are not allowed for this, as everything is personally tested/written by me.
### Etiquette (Optional but recommended rules)
* Don't use "std::endl", it is bad for performance.
## Q/A
**Q: Will you ever write a file executor?** \
**A: I won't make it natively supported, more as a tool for the library.** \
**Q: Will you ever rewrite the VM?** \
**A: I could rewrite it as a seperate project in most languages I know, but they are significantly slower than C++.**
