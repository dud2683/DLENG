#include <iostream>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

int main(){
	if (!glfwInit())
		std::cout << "Error" << std::endl;
	else
		std::cout << "Succes" << std::endl;

}