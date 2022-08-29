#include <spdlog/sinks/stdout_color_sinks.h>
#include "Log.h"

namespace DLENG {
	std::shared_ptr<spdlog::logger> Log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Log::s_ClientLogger;


	void Log::Init()
	{
		Log::s_CoreLogger = spdlog::stdout_color_mt("ENGINE");
		Log::s_CoreLogger->set_pattern("[%H:%M:%S]%^[%n] %v%$");
		Log::s_CoreLogger->set_level(spdlog::level::trace);
		Log::s_ClientLogger = spdlog::stdout_color_mt("SANDBOX");
		Log::s_ClientLogger->set_pattern("[%H:%M:%S]%^[%n] %v%$");
		Log::s_ClientLogger->set_level(spdlog::level::trace);
	}

}