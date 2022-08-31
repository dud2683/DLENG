#include "Window.h"
#include <Core.h>


DLENG::Window::Window(int width, int height, const char* title)
{
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	_glfwWindow = glfwCreateWindow(width, height, title, NULL, NULL);
	if (_glfwWindow == nullptr) {
		DL_CORE_ERROR("Could not create GLFW Window");
	}
	glfwMakeContextCurrent(_glfwWindow);
}

DLENG::Window::~Window()
{
}

