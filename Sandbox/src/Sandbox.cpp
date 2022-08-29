#include <Engine.h>

class Sandbox : public DLENG::Application {
public:
	Sandbox() { }
	~Sandbox() { }
	void Run() override {
		DLENG::Logger::Init();
		auto logger = DLENG::Logger::GetClientLogger();
		logger->info("Hello");
	};
};

DLENG::Application* DLENG::CreateApplication() { return new Sandbox(); }
