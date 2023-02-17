#include "Application.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow)
{
	NoteTaker::Application* application = new NoteTaker::Application(); 
	if (!application->Init())
		return 1;
	application->Run();
	delete application;
	return 0;
}