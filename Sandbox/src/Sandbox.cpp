#include <Engine.h>

class Sandbox : public DLENG::Application {
public:
	Sandbox() { }
	~Sandbox() { }
};

DLENG::Application* DLENG::CreateApplication() { return new Sandbox(); }