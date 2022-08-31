#pragma once
#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"


namespace DLENG{
	class ENG_API Log{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

#ifdef DL_DEBUG

	#define DL_CORE_CRIT(...)		DLENG::Log::GetClientLogger()->critical(__VA_ARGS__)
	#define DL_CORE_ERROR(...)		DLENG::Log::GetCoreLogger()->error(__VA_ARGS__)
	#define DL_CORE_WARN(...)		DLENG::Log::GetCoreLogger()->warn(__VA_ARGS__)
	#define DL_CORE_INFO(...)		DLENG::Log::GetCoreLogger()->info(__VA_ARGS__)
	#define DL_CORE_TRACE(...)		DLENG::Log::GetCoreLogger()->trace(__VA_ARGS__)
	
	#define DL_CRIT(...)			DLENG::Log::GetClientLogger()->critical(__VA_ARGS__)
	#define DL_ERROR(...)			DLENG::Log::GetClientLogger()->error(__VA_ARGS__)
	#define DL_WARN(...)			DLENG::Log::GetClientLogger()->warn(__VA_ARGS__)
	#define DL_INFO(...)			DLENG::Log::GetClientLogger()->info(__VA_ARGS__)
	#define DL_TRACE(...)			DLENG::Log::GetClientLogger()->trace(__VA_ARGS__)

#endif // DL_DEBUG

#ifdef DL_RELEASE

	#define DL_CORE_CRIT(...)	DLENG::Log::GetClientLogger()->critical(__VA_ARGS__)
	#define DL_CORE_ERROR(...)	DLENG::Log::GetCoreLogger()->error(__VA_ARGS__)
	#define DL_CORE_WARN(...)	DLENG::Log::GetCoreLogger()->warn(__VA_ARGS__)
	#define DL_CORE_INFO(...)	DLENG::Log::GetCoreLogger()->info(__VA_ARGS__)
	#define DL_CORE_TRACE(...)

	#define DL_CRIT(...)		DLENG::Log::GetClientLogger()->critical(__VA_ARGS__)
	#define DL_ERROR(...)		DLENG::Log::GetClientLogger()->error(__VA_ARGS__)
	#define DL_WARN(...)		DLENG::Log::GetClientLogger()->warn(__VA_ARGS__)
	#define DL_INFO(...)		DLENG::Log::GetClientLogger()->info(__VA_ARGS__)
	#define DL_TRACE(...)

#endif // DL_RELEASE

#ifdef DL_DIST
	#define DL_CRIT(...)
	#define DL_CORE_CRIT(...)
	#define DL_CORE_ERROR(...)
	#define DL_CORE_WARN(...)
	#define DL_CORE_INFO(...)
	#define DL_CORE_TRACE(...)	

	#define DL_ERROR(...)
	#define DL_WARN(...)
	#define DL_INFO(...)
	#define DL_TRACE(...)

#endif // DL_DIST