#include <iostream>
#include <string>
#include "GLFW/glfw3.h"

#include <memory>
using namespace std;



class Student {
	
public:
	int a, b, c;
	Student() { cout << "Created!" << endl; }
	~Student() { cout << "Destroyed£¡" << endl; }
	void Hello() { cout << "HEllo!" << endl; }
};

int main(){
	int a = glfwInit();
	int offset = (int) & (((Student*)nullptr)->b);
	cout << offset << endl;
}

   