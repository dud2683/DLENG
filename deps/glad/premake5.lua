project "glad"
	kind "StaticLib"
	targetdir "../libs/%{cfg.buildcfg}"
	objdir "bin-int/%{cfg.buildcfg}"
	language "C"
	systemversion "latest"
	staticruntime "on"
	
	
	files{
		"include/**.h",
		"src/**.c"
	}
	includedirs{
		"include"
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
	