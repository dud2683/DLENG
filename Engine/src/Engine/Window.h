#pragma once
#include "Core.h"
#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#include <glad/glad.h>
#include "Layers/Layer.h"
#include <list>

namespace DLENG {
	class ENG_API Window{
	public:
		Window(int width = 640, int height = 480, const char* title = "My Title");
		~Window();
	private:
		std::list<Layer> _layers;

		GLFWwindow* _glfwWindow = nullptr;
	};
}