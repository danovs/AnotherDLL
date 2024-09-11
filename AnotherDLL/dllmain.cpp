// testfunc.cpp: определяет экспортированную функцию для библиотеки DLL.

#include "pch.h"

extern "C" __declspec(dllexport) void __cdecl TestHello(void)
{
    MessageBox(NULL, L"Hello, you're calling a function in this DLL", L"DLL Skeleton", MB_OK);
    return;
}