#pragma once
#include "Core.h"
namespace DLENG {
	class ENG_API Application{
	public:
		Application();
		~Application();
		virtual void Run();
	};
	Application* CreateApplication();
}

