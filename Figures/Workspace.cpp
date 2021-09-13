#include "Workspace.h"
#include <Windows.h>

using namespace Figures;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Workspace);
	return 0;
}