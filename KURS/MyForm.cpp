#include "MyForm.h"
#include "INF.h";
#include "FINDER.h";
#include "HELP.h";
#include "March.h";
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KURS::MyForm form;
	Application::Run(%form);
}