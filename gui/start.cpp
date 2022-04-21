#include "start.h"
#include <array>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
	User l;
	l.read_data();
	auto arr = gcnew cli::array<String^>(42);
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	gui::start frm;
	Application::Run(% frm);
	return 0;
}