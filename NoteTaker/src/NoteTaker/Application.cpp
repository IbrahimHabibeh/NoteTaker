#include "Application.h"
#include <tchar.h>
#define SUBMIT 1001
namespace NoteTaker
{
	
	HWND Application::getHandle() const { return m_hwnd; }
	LRESULT CALLBACK Application::WndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
	{
		PAINTSTRUCT ps; 
		RECT rect; 
		HDC hdc;
		HWND button; 
		HFONT hFont; 
		LPOPENFILENAMEW file; 
		switch (msg)
		{
			case WM_PAINT:
				hdc = BeginPaint(hwnd, &ps);
				hFont = CreateFont(48, 0, 0, 0, FW_DONTCARE, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_SWISS, _T("Calibri"));
				SelectObject(hdc, hFont);
				GetClientRect(hwnd, &rect);
				DrawText(hdc, L"Welcome to the automatic notetaker", 34, &rect, DT_CENTER);
				button = CreateWindowW(L"BUTTON", L"Select File", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, 10, 10, 100, 100, hwnd, (HMENU)SUBMIT, (HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE), NULL);
				DeleteObject(hFont);
				EndPaint(hwnd, &ps);
				return 0; 
			case WM_COMMAND:
			{
				if (LOWORD(wparam) == SUBMIT)
				{
					//process video
					//TODO: Make this process multithreaded, add progress bar, add libraries to project 
					
				}
				break;
			}
			case WM_DESTROY:
				PostQuitMessage(0);
				return 0;
			default:
				return DefWindowProc(hwnd, msg, wparam, lparam);
				
		}
	}	
	
	Application::Application()
		: m_hwnd(NULL), m_context(nullptr)
	{
		
	}

	Application::~Application()
	{
	}

	bool Application::Init()
	{
		WNDCLASSEX wcex;
		wcex.cbSize = sizeof(WNDCLASSEX);
		wcex.style = CS_HREDRAW | CS_VREDRAW; 
		wcex.lpfnWndProc = WndProc; 
		wcex.cbClsExtra = 0;
		wcex.cbWndExtra = 0; 
		wcex.hInstance = GetModuleHandle(NULL);
		wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
		wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
		wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
		wcex.lpszMenuName = NULL;
		wcex.lpszMenuName = NULL; 
		wcex.lpszClassName = L"NoteTakerClass";
		wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION); 

		if (!RegisterClassExW(&wcex))
			return false;
		m_hwnd = CreateWindow(wcex.lpszClassName, L"NoteTaker", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, GetModuleHandle(NULL), this);
		if (!m_hwnd)
			return false;
		ShowWindow(m_hwnd, SW_SHOW);
		UpdateWindow(m_hwnd);
		return true;
	}
	void Application::Run()
	{
		MSG msg = {};

		while (GetMessage(&msg, NULL, 0, 0))
		{
			TranslateMessage(&msg); 
			DispatchMessage(&msg);
		}
	}
}