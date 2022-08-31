#pragma once
#include <Engine.h>
#include <Main.h>

class Sandbox : public DLENG::Application {
public:
	Sandbox();
	~Sandbox();
	void Run() override;
};