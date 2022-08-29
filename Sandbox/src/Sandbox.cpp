#include "Sandbox.h"

DLENG::Application* DLENG::CreateApplication() { return new Sandbox(); }

Sandbox::Sandbox()
{

}

Sandbox::~Sandbox()
{

}


void Sandbox::Run()
{
	while (true);
}
