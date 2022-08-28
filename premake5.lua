workspace "DLENG"
	architecture "x86"
	configurations { "Debug", "Release", "Dist"}

	
include "deps/glfw"
include "deps/glad"


project "Engine"
	kind "ConsoleApp"
	language "C++"
	targetdir "bin/%{cfg.buildcfg}"
	objdir "bin-int/%{cfg.buildcfg}"

	files{
		"src/**.cpp",
		"src/**.h"
	}
	
	includedirs{
		"deps/include"
	}
	libdirs{
		"deps/libs/%{cfg.buildcfg}"
	}
	links{
		"opengl32.lib",	
		"GLFW",
		"glad"
	}
	
	filter "configurations:Debug"
		defines { "DL_DEBUG" }
		symbols "On"

	filter "configurations:Release"
		defines { "DL_RELEASE" }
		symbols "On"
		optimize "On"
	 
	filter "configurations:Dist"
		defines { "DL_DIST" }
		symbols "On"
		optimize "Off"
	  

	filter "system:windows"
		cppdialect "C++latest"
		systemversion "latest"
		staticruntime "On"
	  