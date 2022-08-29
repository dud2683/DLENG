#pragma once
#include "Core.h"
namespace DLENG {
	class ENG_API Application{
	public:
		Application();
		~Application();
		void Run();
	};
	Application* CreateApplication();
}

