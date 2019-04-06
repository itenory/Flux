#pragma once

#ifdef FX_PLATFORM_WINDOWS
	#ifdef FLUX_BUILD_DLL
		#define FLUX_API __declspec(dllexport)
	#else
		#define FLUX_API __declspec(dllimport)
	#endif
#else
	#error Flux engine support for Windows only.
#endif