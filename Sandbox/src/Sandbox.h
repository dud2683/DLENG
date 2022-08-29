#pragma once
#include <Engine.h>
#include <Engine/Core/Main.h>

class Sandbox : public DLENG::Application {
public:
	Sandbox();
	~Sandbox();
	void Run() override;
};