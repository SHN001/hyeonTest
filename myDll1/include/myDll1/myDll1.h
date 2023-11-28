#pragma once
#ifdef _EXPORTING
    #define FUNC_API __declspec(dllexport)
#else
    #define FUNC_API __declspec(dllimport)
#endif

FUNC_API void myDll1();