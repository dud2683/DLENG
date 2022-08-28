#include <iostream>
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <spdlog/spdlog.h>

int main(){
	spdlog::info("Welcome to spdlog!");
	if (!glfwInit())
		std::cout << "Error" << std::endl;
	else
		std::cout << "Succes" << std::endl;

}