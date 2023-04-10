#include "pch-il2cpp.h"
#include <iostream>
#include "hooks.h"
#include <MinHook.h>
#include <helpers.h>
#include <mutex>


using namespace app;

void(__fastcall* recv_function)(ArraySegment_1_Byte_, MethodInfo*);
void __stdcall uAC01uAC1E_uAC0FuAC34_hook(ArraySegment_1_Byte_ uAC00, MethodInfo* method)
{
    // print packets
    //uint8_t* bytes = uAC00._array->vector;
    //for (int i = 0; i < uAC00._count; i++)
    //{
    //    printf("%x", bytes[i]);
    //}
    //printf("\n");

    return recv_function(uAC00, method);
}

void hooks::InitHooks()
{
    uintptr_t baseAddress = il2cppi_get_base_address();

    MH_STATUS status = MH_UNKNOWN;
    MH_Initialize();
    // create hook.
    status = MH_CreateHook(
        reinterpret_cast<LPVOID*>(baseAddress + 0x012A5300),
        &uAC01uAC1E_uAC0FuAC34_hook,
        (LPVOID*)&recv_function
    );

    if (status != MH_OK) {
        printf("failed status: %s", MH_StatusToString(status));
        return;
    }

    // enable hook.
    status = MH_EnableHook(reinterpret_cast<LPVOID*>(baseAddress + 0x012A5300));

    if (status != MH_OK) {
        printf("failed status: %s", MH_StatusToString(status));
        return;
    }

    printf("Hook installed!");
}
