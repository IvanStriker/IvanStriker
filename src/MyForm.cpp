#pragma comment(lib, "User32.lib")

#include "MyForm.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int _stdcall main() {
	SetProcessDPIAware();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	DPICorrector::MyForm form;
	Application::Run(% form);
	return 0;
}
