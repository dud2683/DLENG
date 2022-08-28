CALL vendor\premake\premake5.exe vs2017
CALL mkdir deps\include
CALL xcopy /E /y deps\glad\include deps\include\
CALL xcopy /E /y deps\glad\include deps\include\
CALL xcopy /E /y deps\glfw\include deps\include\
CALL xcopy /E /y deps\spdlog\include deps\include\
PAUSE