// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include<string>
#define DllExport __declspec (dllexport)

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}

struct MyStruct {
    float varA;
    bool varB;
    float varC[3];
};
DllExport const char* HelloWorld() {
    return "Hello, World!";
}

DllExport MyStruct* GetStruct() {
    MyStruct* t = new MyStruct();
    if (t) {
        t->varA = 0.0f;
        t->varB = false;
        t->varC[0] = 0;
        t->varC[1] = 0;
        t->varC[2] = 0;
    }
    return t;
}

DllExport void SetStruct(MyStruct*
    t_, float varA_, bool varB_, float
    varC1_, float varC2_, float varC3_) {
    if (t_) {
        t_->varA = varA_;
        t_->varB = varB_;
        t_->varC[0] = varC1_;
        t_->varC[1] = varC2_;
        t_->varC[2] = varC3_;
    }
}

