#ifdef DL_BUILD_DLL
#define ENG_API _declspec(dllexport)

#else
#define ENG_API _declspec(dllimport)

#endif

#include "Log.h"