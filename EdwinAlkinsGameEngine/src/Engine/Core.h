#pragma once

#ifdef EDALGE_PLATFORM_WINDOWS
	#ifdef EDALGE_BUILD_DLL
		#define EDWINALKINSGAMEENGINE_API __declspec(dllexport)
	#else
		#define EDWINALKINSGAMEENGINE_API __declspec(dllimport)
	#endif
#else
	#error EdwinAlkinsGameEngine only support Windows !
#endif