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
    wcx.lpfnWndProc = MainWndProc;  //������Ϣ������
    wcx.cbClsExtra = 0; //��ʹ�����ڴ�
    wcx.cbWndExtra = 0; //��ʹ�ô����ڴ�
    wcx.hInstance = hInstance;  //������Ӧ�ó���ʵ�����
    wcx.hIcon = LoadIcon(NULL, IDI_APPLICATION);    //ͼ�꣺Ĭ��
    wcx.hCursor = LoadCursor(NULL, IDC_ARROW);  //��꣺Ĭ��
    wcx.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);    //����ɫ����ɫ
    wcx.lpszMenuName = NULL;    //�˵�����ʹ��
    wcx.lpszClassName = "MainWClass";   //��������
    wcx.hIconSm = (HICON)LoadImage(hInstance, MAKEINTRESOURCE(5), IMAGE_ICON, GetSystemMetrics(SM_CXSMICON), GetSystemMetrics(SM_CYSMICON), LR_DEFAULTCOLOR);
    //ע�ᴰ����
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
