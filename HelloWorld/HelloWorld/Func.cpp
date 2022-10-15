#include <iostream>

void Log(const char* message) {
	int a = 8;
	void* ptr = &a;
	std::cout << ptr << std::endl;
	std::cout << message << std::endl;
}