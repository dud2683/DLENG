workspace "DLENG"
	architecture "x86"
	configurations { "Debug", "Release", "Dist"}

EngineName = "Engine"
SandboxName = "Sandbox"
	
include "Engine/deps/glfw"
include "Engine/deps/glad"


project "Engine"
	kind "SharedLib"
	language "C++"
	targetdir "bin/%{cfg.buildcfg}/%{prj.name}"
	objdir "bin-int/%{cfg.buildcfg}/%{prj.name}"
	location "%{prj.name}"

	files{
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/src/**.h"
	}
	
	includedirs{
		"Engine/deps/include"
	}
	libdirs{
		"%{prj.name}/deps/libs/%{cfg.buildcfg}"
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
		defines{
			"DL_BUILD_DLL",
			"DL_PLATFORM_WINDOWS"
		}
	
	postbuildcommands{
		"mkdir $(SolutionDir)\\bin\\%{cfg.buildcfg}\\%{SandboxName}",
		"copy $(SolutionDir)\\bin\\%{cfg.buildcfg}\\%{prj.name}\\%{prj.name}.dll $(SolutionDir)\\bin\\%{cfg.buildcfg}\\%{SandboxName} & exit 0"
	}
		
project "Sandbox"
	kind "ConsoleApp"
	location "%{prj.name}"
	language "C++"
	targetdir "bin/%{cfg.buildcfg}/%{prj.name}"
	objdir "bin-int/%{cfg.buildcfg}/%{prj.name}"
	location "%{prj.name}"
	
	files{
		"%{prj.name}/src/**.cpp",
		"%{prj.name}/src/**.h"
	}
	
	includedirs{
		"Engine/src",
		"Engine/deps/include"
	}
	links{"Engine"}
	
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
		defines{"DL_PLATFORM_WINDOWS"}
		systemversion "latest"
		staticruntime "On"
	
	