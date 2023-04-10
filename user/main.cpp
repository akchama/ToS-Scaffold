// Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Custom injected code entry point

#include "pch-il2cpp.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <iostream>
#include "il2cpp-appdata.h"
#include "helpers.h"
#include <thread>
#include "../hooks.h"
#include "main.h"
#include <Main.hpp>


using namespace app;

// Set the name of your log file here
extern const LPCWSTR LOG_FILE = L"il2cpp-log.txt";



// Custom injected code entry point
void Run()
{
    // Initialize thread data - DO NOT REMOVE
    il2cpp_thread_attach(il2cpp_domain_get());
    uintptr_t baseAddress = il2cppi_get_base_address();
    //il2cppi_new_console();

    // If you would like to write to a log file, specify the name above and use il2cppi_log_write()
    // il2cppi_log_write("Startup");

    // If you would like to output to a new console window, use il2cppi_new_console() to open one and redirect stdout
     il2cppi_new_console();

    /// <summary>
    /// 각갞.갮강  
    /// </summary>

    
    // Place your custom code here
    auto playerShip = (*app::uAC01uAC1A__TypeInfo)->static_fields->uAC2EuAC01->fields;
    printf("X: %d, Y: %d\n", playerShip.coordinates.x, playerShip.coordinates.y);

    auto telepathyClient = (*app::uAC01uAC1E__TypeInfo)->static_fields->client;
    auto onDataMethod = telepathyClient->fields.OnData->fields._._.method;
    auto networkRecv = (*app::uAC01uAC1E__TypeInfo);
    auto importantFields = (*app::uAC02uAC3E__TypeInfo);
    auto lookThis = (*app::uAC02uAC3C__TypeInfo);
    //auto var33 = (*app::uAC03uAC01__TypeInfo);  // contains map info in static data

    IL2CPP::Initialize(); // This needs to be called once!
    hooks::InitHooks();

    while (true)
    {
        auto m_pObjects = Unity::Object::FindObjectsOfType<Unity::CGameObject>(UNITY_OBJECT_CLASS);
        if (m_pObjects != NULL)
        {
            for (uintptr_t u = 0U; m_pObjects->m_uMaxLength > u; ++u)
            {
                Unity::CGameObject* m_pObject = m_pObjects->operator[](static_cast<unsigned int>(u));
                if (!m_pObject) continue;

                //std::cout << m_pObject->GetName()->ToString() << std::endl;

                //void* iterator = nullptr; // initialize the iterator to null

                //while (true) 
                //{
                //    auto field = m_pObject->GetFields(&iterator);
                //    if (field == nullptr) {
                //        break;
                //    }
                //}
            }
            std::cout << "-------------------------------------" << std::endl;
        }

        Sleep(15000);
    }

     // 갂갾.각갌갉 - 48 83 C1 10           - add rcx,10, uAC02uAC3E

}