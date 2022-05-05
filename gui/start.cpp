#include "start.h"
#include <array>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{
	auto arr = gcnew cli::array<String^>(42);
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	gui::start frm;
	Application::Run(% frm);
	return 0;
}

System::Void gui::start::LoginButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	login^ form = gcnew login();
	form->Show();
	//this->Close();
	return System::Void();
}

System::Void gui::start::RegisterButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	reg^ form = gcnew reg();
	form->Show();
	//this->Close();
	return System::Void();
}

System::Void gui::start::ExitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	return System::Void();
}

System::Void gui::start::start_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Enter)//if enter is pressed
	{
		LoginButton->PerformClick();
	}
	return System::Void();
}
