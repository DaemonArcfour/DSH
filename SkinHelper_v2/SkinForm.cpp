#include "SkinForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SkinHelperv2::SkinForm form;
	Application::Run(%form);
}