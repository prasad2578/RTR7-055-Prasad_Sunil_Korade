//header file 

#include<windows.h>
#include<stdio.h>//for file I/O
#include<stdlib.h>
#include "Window.h"



//MACROS
#define WIN_WIDTH 800
#define WIN_HEIGHT 600




//Global function declaration 

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);



//GLOBAL VARIABLE DECLARATION

HWND ghwnd = NULL;
BOOL bFullscreen = FALSE;
BOOL bActiveWindow = FALSE;
BOOL bEscapeIsPressed = FALSE;
DWORD dwStyle;
WINDOWPLACEMENT wpPrev;
FILE *gpFile = NULL; 



//Entry point function 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpsCmdLine, int iCmdShow)
{
    //function declaration   
    int initialize(void);
    void render(void);
    void update(void);
    void uninitialize(void);

    //variable declaration 
    WNDCLASSEX wndclass;//type def struct 
    HWND hwnd = NULL;
    MSG msg;//struct type def 
    TCHAR szAppName[]=TEXT("RTR7_PS");// type def 
    BOOL bdone = FALSE;

    //CODE
    //create logfile 
    gpFile = fopen("log.txt" ,"w");
    if (gpFile == NULL)
    {
        MessageBox(NULL,TEXT("LOG FILE CREATION FAIL"),TEXT("ERROR"),MB_OK);
        exit(0);
    }
    else 
    {
        fprintf(gpFile, "program started Successfully");
    }

    //WNDCLASSEX initialization 
    wndclass.cbSize = sizeof(WNDCLASSEX);
    wndclass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
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
    hwnd = CreateWindowEx(WS_EX_APPWINDOW,
                        szAppName,
                        TEXT("RTR2026-prasad_sunil_korade - 055\01-OpenGL\01-Windows\01-Windowing\06-Fullscreen"),
                        WS_OVERLAPPEDWINDOW | WS_CLIPCHILDREN | WS_CLIPSIBLINGS | WSF_VISIBLE,
                        ScreenWidth/2-WIN_WIDTH/2,
                        ScreenHeight/2-WIN_HEIGHT/2,
                        WIN_WIDTH,
                        WIN_HEIGHT,
                        NULL,
                        NULL,
                        hInstance,
                        NULL);

    //set global window handle 
    ghwnd = hwnd; 
    int iResult = initialize();
    if (iResult != 0)
    {
        fprintf(gpFile, "wimmain: initialize falied ");
        DestroyWindow(hwnd);
        hwnd = NULL;
    }
    else
    {
        fprintf(gpFile, "winmain: initialize succeeded");
    }


    //show window 
    ShowWindow(hwnd, iCmdShow);

    //update the window to paint ints background
    UpdateWindow(hwnd);
    SetForegroundWindow(hwnd);
    SetFocus(hwnd);


    //message loop 
    while (bdone == FALSE)
    {
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            if (msg.message == WM_QUIT)
            {
                bdone = TRUE;
            }
            else
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
        else
        {
            //here call update and display 
            if (bActiveWindow == TRUE)
            {
                if (bEscapeIsPressed == TRUE)
                {
                    bdone = TRUE;
                }

                //rendering code
                render();

                //update code
                update();

            }
        }
    }
    TCHAR str[255];
    //uninitialize
    
    
    return((int)msg.wParam);
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
    //local function declaration 
    void resize(int,int);
    void toggleFullscreen(void);
    void uninitialize(void);

    
    


    //code
    switch (iMsg)
    {
        case WM_CREATE:
        memset(&wpPrev,0,sizeof(WINDOWPLACEMENT));
        wpPrev.length = sizeof(WINDOWPLACEMENT);
        break;
        case WM_SETFOCUS:
            bActiveWindow = TRUE;
        break;
        case WM_KILLFOCUS:
            bActiveWindow = FALSE;
        break;
        case WM_SIZE:
            resize(LOWORD(lParam), HIWORD(lParam));
        break;
        case WM_KEYDOWN:
            switch (wParam)
            {
             case VK_ESCAPE:
                bEscapeIsPressed = TRUE;

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
           if (bFullscreen == FALSE)
           {
            toggleFullscreen();
            bFullscreen = TRUE;
           }
           else
           {
            toggleFullscreen();
            bFullscreen = FALSE;
           } 
            break;
           default:
            break;
           }
           break;
          case WM_CLOSE:
            uninitialize();
           break;

           case WM_DESTROY:
            PostQuitMessage(253);
        break;
    
    default:
        break;
    }
    return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}
void toggleFullscreen()
{
    //local variable declaration 
    MONITORINFO mi;

    //code
    if (bFullscreen == FALSE)
    {
        dwStyle = GetWindowLong(ghwnd ,GWL_STYLE);
        if (dwStyle & WS_OVERLAPPEDWINDOW)
        {
            memset(&mi,0, sizeof(MONITORINFO));
            mi.cbSize = sizeof(MONITORINFO);
            if (GetWindowPlacement(ghwnd,&wpPrev) && GetMonitorInfo(MonitorFromWindow(ghwnd,MONITORINFOF_PRIMARY),&mi))
            {
                SetWindowLong(ghwnd,GWL_STYLE,dwStyle & ~WS_OVERLAPPEDWINDOW);
                SetWindowPos(ghwnd,HWND_TOP,mi.rcMonitor.left,mi.rcMonitor.top,mi.rcMonitor.right-mi.rcMonitor.left,mi.rcMonitor.bottom-mi.rcMonitor.top,SWP_NOZORDER | SWP_FRAMECHANGED);
            }
        }
        ShowCursor(FALSE);
    }
    else
    {
        SetWindowLong(ghwnd,GWL_STYLE,dwStyle |WS_OVERLAPPEDWINDOW);
        SetWindowPlacement(ghwnd,&wpPrev);
        SetWindowPos(ghwnd,HWND_TOP,0,0,0,0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOOWNERZORDER |SWP_NOZORDER | SWP_FRAMECHANGED );
        ShowCursor(TRUE);
    }
}


int initialize(void)
{
    //code 
    return(0);
}

void resize(int width, int height)
{
    //code 
}

void render(void)
{
    //code
}

void update(void)
{
    //code
}

void uninitialize(void)
{
    //code
    //destroy the window 
    if(ghwnd)
    {
        DestroyWindow(ghwnd);
    }
    
    ghwnd = NULL;
    
    //close the log file
    if(gpFile)
    {
        fprintf(gpFile, "program terminated Successfully");
        fclose(gpFile);
        gpFile = NULL;
    }
}

