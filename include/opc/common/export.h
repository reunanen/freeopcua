#pragma once

#ifdef FREEOPCUA_BUILD_DLL
#  define FREEOPCUA_EXPORT __declspec(dllexport)
#else
#  define FREEOPCUA_EXPORT __declspec(dllimport)
#endif