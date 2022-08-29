#pragma once
#include "Core.h"
#include "Window.h"
#include <list>

namespace DLENG {
	class ENG_API Application{
	public:
		Application();
		~Application();
		virtual void Run();
		virtual void Init();
	
	private:
		std::list<Window> _windows;
	};

	Application* CreateApplication();
}

