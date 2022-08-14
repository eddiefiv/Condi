#pragma once

#ifdef CD_PLATFORM_WINDOWS
	#ifdef CD_BUILD_DLL
		#define CONDI_API __declspec(dllexport)
	#else
		#define CONDI_API __declspec(dllimport)
	#endif
#else
	#error Condi only supports Windows!
#endif