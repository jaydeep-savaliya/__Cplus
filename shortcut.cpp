#include <Windows.h>
#include <Shobjidl.h> // Needed for IShellLink and IPersistFile
#include <stdio.h>    // Include for printf

#pragma comment(lib, "ole32.lib") // Link against ole32.lib
using namespace std;
int main() {
    HRESULT hr;
    IShellLink* pShellLink = NULL;
    IPersistFile* pPersistFile = NULL;
    
    // Initialize COM
    hr = CoInitialize(NULL);
    if (FAILED(hr)) {
        printf("Failed to initialize COM!\n");
        return 1;
    }
    
    // Create an instance of IShellLink
    hr = CoCreateInstance(CLSID_ShellLink, NULL, CLSCTX_INPROC_SERVER, IID_IShellLink, (LPVOID*)&pShellLink);
    if (SUCCEEDED(hr)) {
        // Set the path of the target CMD file
        pShellLink->SetPath(L"C:\\Windows\\System32\\cmd.exe");
        
        // Set the arguments for the CMD shortcut
        pShellLink->SetArguments(L"/k echo Hello World");
        
        // Query IPersistFile interface
        hr = pShellLink->QueryInterface(IID_IPersistFile, (LPVOID*)&pPersistFile);
        if (SUCCEEDED(hr)) {
            // Save the shortcut to disk
            hr = pPersistFile->Save(L"C:\\path\\to\\your\\shortcut.lnk", TRUE);
            if (SUCCEEDED(hr)) {
                printf("Shortcut created successfully!\n");
            } else {
                printf("Failed to save the shortcut!\n");
            }
            pPersistFile->Release();
        } else {
            printf("Failed to get IPersistFile interface!\n");
        }
        
        pShellLink->Release();
    } else {
        printf("Failed to create IShellLink instance!\n");
    }

    CoUninitialize(); // Uninitialize COM
    return 0;
}
