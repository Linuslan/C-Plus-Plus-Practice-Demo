#include <windows.h>
#pragma comment(lib,"user32")
#pragma comment(lib,"gdi32")
HINSTANCE hinst;
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPSTR lpCmdLine, int nCmdShow);
LRESULT CALLBACK MainWndProc(HWND, UINT, WPARAM, LPARAM);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPSTR lpCmdLine, int nCmdShow) {
    WNDCLASSEX wcx;
    HWND hwnd;
    MSG msg;
    BOOL fGotMessage;
    hinst = hInstance;
    wcx.cbSize = sizeof(wcx);
    wcx.style = CS_HREDRAW | CS_VREDRAW;
    wcx.lpfnWndProc = MainWndProc;  //窗口消息处理函数
    wcx.cbClsExtra = 0; //不使用类内存
    wcx.cbWndExtra = 0; //不使用窗口内存
    wcx.hInstance = hInstance;  //所属的应用程序实例句柄
    wcx.hIcon = LoadIcon(NULL, IDI_APPLICATION);    //图标：默认
    wcx.hCursor = LoadCursor(NULL, IDC_ARROW);  //光标：默认
    wcx.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);    //背景色：白色
    wcx.lpszMenuName = NULL;    //菜单：不使用
    wcx.lpszClassName = "MainWClass";   //窗口类名
    wcx.hIconSm = (HICON)LoadImage(hInstance, MAKEINTRESOURCE(5), IMAGE_ICON, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR);
    //注册窗口类
    if(!RegisterClassEx(&wcx)) {
        return 1;
    }
    hwnd = CreateWindow("MainWClass", "CH 2-3", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, (HWND) NULL, (HMENU) NULL, hInstance, (LPVOID) NULL);
    if(!hwnd) {
        return 1;
    }
    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);
    while((fGotMessage = GetMessage(&msg, (HWND) NULL, 0, 0)) != 0 && fGotMessage != -1) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return msg.wParam;
}

LRESULT CALLBACK MainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch(uMsg) {
        case WM_DESTROY: ExitThread(0); return 0;
        default: return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}
