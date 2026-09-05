//header file 

#include<windows.h>
#include "Window.h"


//MACROS
#define WIN_WIDTH 800
#define WIN_HEIGHT 600




//Global function declaration 

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);


//Entry point function 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpsCmdLine, int iCmdShow)
{
    //variable declaration 
    WNDCLASSEX wndclass;//type def struct 
    HWND hwnd = NULL;
    MSG msg;//struct type def 
    TCHAR szAppName[]=TEXT("RTR7_PS");// type def 

    //CODE
    //WNDCLASSEX initialization 
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.style = CS_HREDRAW | CS_VREDRAW;
    wndclass.cbClsExtra= 0;
    wndclass.cbWndExtra = 0;
    wndclass.lpfnWndProc = WndProc;
    wndclass.hInstance = hInstance;
    wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    wndclass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));
    wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
    wndclass.lpszClassName = szAppName;
    wndclass.lpszMenuName = NULL;
    wndclass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(MYICON));

    //register above WNDCLASS 
    RegisterClassEx(&wndclass);

    //cENTERING
    int ScreenWidth = GetSystemMetrics(SM_CXSCREEN);
    int ScreenHeight = GetSystemMetrics(SM_CYSCREEN);



    //create the window 
    hwnd = CreateWindow(szAppName,
                        TEXT("My First RTR7 Window Program: Prasad Sunil Korade"),
                        WS_OVERLAPPEDWINDOW,
                        ScreenWidth/2-WIN_WIDTH/2,
                        ScreenHeight/2-WIN_HEIGHT/2,
                        WIN_WIDTH,
                        WIN_HEIGHT,
                        NULL,
                        NULL,
                        hInstance,
                        NULL);

    //show window 
    ShowWindow(hwnd, iCmdShow);

    //update the window to paint ints background
    UpdateWindow(hwnd);

    //message loop 
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    TCHAR str[255];
    return((int)msg.wParam);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    //code
    switch (iMsg)
    {
        case WM_CREATE:
        break;
        case WM_SETFOCUS:
        break;
        case WM_KILLFOCUS:
        break;
        case WM_SIZE:
        break;
        case WM_KEYDOWN:
            switch (wParam)
            {
             case VK_ESCAPE:
                 break;
             
             default:
            break;
            }
        break;
        case WM_CHAR:
           switch (wParam)
           {
           case 'F':
           case 'f':
            break;
           default:
            break;
           }
           break;
          case WM_CLOSE:
           break;

           case WM_DESTROY:
              PostQuitMessage(253);
        break;
    
    default:
        break;
    }
    return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}
