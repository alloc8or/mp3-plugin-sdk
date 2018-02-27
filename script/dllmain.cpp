#include "stdafx.h"

void ScriptMain();

BOOL WINAPI DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		scriptRegister(hModule, ScriptMain);
		keyboardHandlerRegister(OnKeyboardMessage);
		break;
	case DLL_PROCESS_DETACH:
		scriptUnregister(hModule);
		keyboardHandlerUnregister(OnKeyboardMessage);
		break;
	}
	return TRUE;
}