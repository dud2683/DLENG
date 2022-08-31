#pragma once
#include "Core/Core.h"
#include "Window.h"
#include "EventHandler.h"
#include <list>

namespace DLENG {
	class ENG_API Application{
	public:
		Application();
		~Application();
		virtual void Run();
		virtual void Init();
	
	private:
		void GenerateEvents();
		void HandleEvents();

		static void glfwKeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

		std::list<Window> _windows;
		static EventHandler s_eventHandler;

	};

	Application* CreateApplication();
}

