#include "Application.h"

#define LOG(command, trace, success, failure) DL_CORE_TRACE(trace);\
	if (command) {DL_CORE_INFO(success);}\
	else DL_CORE_CRIT(failure)

namespace DLENG {
	Application::Application()
	{
		Init();
		
	}

	Application::~Application(){
		glfwTerminate();
	}

	void Application::Run(){
		while (true);
	}
	void Application::Init(){

		LOG(glfwInit(),
			"Initializing GLFW", "GLFW initialization SUCCESS", "GLFW initialization FAILED");
		
		_windows.push_back(Window());

		LOG(gladLoadGLLoader((GLADloadproc)glfwGetProcAddress),
			"Loading Glad", "GLAD load SUCCESS", "GLAD load FAILED");

	}
}