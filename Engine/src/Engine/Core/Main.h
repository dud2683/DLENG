#pragma once
#ifdef DL_PLATFORM_WINDOWS

extern DLENG::Application* DLENG::CreateApplication();
int main(int argc, char** argv){
	DLENG::Log::Init();
	auto app = DLENG::CreateApplication();
	app->Run();
	delete app;
}
#endif // DL_PLATFORM_WINDOWS