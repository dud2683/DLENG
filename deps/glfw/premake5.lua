project "GLFW"
	kind "StaticLib"
	targetdir "../libs/%{cfg.buildcfg}"
	objdir "bin-int/%{cfg.buildcfg}"
	language "C"
	systemversion "latest"
	staticruntime "on"
	
	
	files{
		"src/win32_joystick.h",
		"src/win32_init.c",
		"src/win32_joystick.c",	
		"src/win32_monitor.c",
		"src/win32_window.c",
		"src/win32_platform.h",
		"src/wgl_context.c",
		"src/internal.h",
		"src/platform.h",
		"src/mappings.h",
		"src/context.c",
		"src/init.c",
		"src/input.c",
		"src/monitor.c",
		"src/platform.c",
		"src/vulkan.c",
		"src/window.c",
        "src/egl_context.c",
		"src/osmesa_context.c",
		"src/null_platform.h",
		"src/null_joystick.h",
        "src/null_init.c",
		"src/null_monitor.c",
		"src/null_window.c",
		"src/null_joystick.c",
		"src/win32_time.h",
		"src/win32_thread.h",
		"src/win32_module.c",
        "src/win32_time.c",
		"src/win32_thread.c",
		
		"include/GLFW/glfw3.h",
		"include/GLFW/glfw3native.h"
	}
	
	defines{
		"_CRT_SECURE_NO_WARNINGS",
		"_GLFW_WIN32"
	}
	
	filter "configurations:Debug"
		symbols "On"
		optimize "Off"
		runtime "Debug"

	filter "configurations:Release"
		symbols "On"
		optimize "On"
		runtime "Release"
	 
	filter "configurations:Dist"
		symbols "On"
		optimize "Off"
		runtime "Release"
	