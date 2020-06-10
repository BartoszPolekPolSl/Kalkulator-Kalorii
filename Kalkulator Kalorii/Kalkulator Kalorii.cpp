#include "pch.h"
#include "MyForm.h"

using namespace System;
using namespace KalkulatorKalorii;

[STAThreadAttribute]

int main(array <System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm());
	return 0;
}