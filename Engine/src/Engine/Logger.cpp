#include <spdlog/sinks/stdout_color_sinks.h>
#include "Logger.h"

namespace DLENG{
	std::shared_ptr<spdlog::logger> Logger::s_CoreLogger;
	std::shared_ptr<spdlog::logger> Logger::s_ClientLogger;


	void Logger::Init()
	{
		Logger::s_CoreLogger = spdlog::stdout_color_mt("ENGINE");
		Logger::s_CoreLogger->set_level(spdlog::level::trace);
		Logger::s_ClientLogger = spdlog::stdout_color_mt("SANDBOX");
		Logger::s_ClientLogger->set_level(spdlog::level::trace);
	}

}