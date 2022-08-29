CALL vendor\premake\premake5.exe vs2017
CALL mkdir deps\include
CALL xcopy /E /y Engine\deps\glad\include Engine\deps\include\
CALL xcopy /E /y Engine\deps\glad\include Engine\deps\include\
CALL xcopy /E /y Engine\deps\glfw\include Engine\deps\include\
CALL xcopy /E /y Engine\deps\spdlog\include Engine\deps\include\
PAUSE