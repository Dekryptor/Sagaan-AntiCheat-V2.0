#include <Windows.h>
#include <iostream>

BOOL WINAPI DllMain(
	_In_ HINSTANCE hinstDLL,
	_In_ DWORD     fdwReason,
	_In_ LPVOID    lpvReserved
)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		char Buffer[512];
		sprintf_s(Buffer, "I Am Inected @ %016llx!\n", &DllMain);
		MessageBoxA(0, Buffer, "Hey!", MB_OK);
	}
	return TRUE;
}