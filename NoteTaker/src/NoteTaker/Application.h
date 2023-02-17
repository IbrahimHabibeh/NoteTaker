#pragma once
#include <Windows.h>
namespace NoteTaker
{
	
	class Application
	{
		public:
			Application();
			virtual ~Application();
			bool Init(); 
			void Run();
			HWND getHandle() const;
		private:
			HWND m_hwnd;
			HDC m_context; 
			static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM param, LPARAM lparam);
	};

}