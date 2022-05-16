#include "start.h"
#include <array>
#include"User.h"
#include<iostream>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Media;
User usr;
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

System::Void gui::start::start_Load(System::Object^ sender, System::EventArgs^ e)
{
	WindowState = FormWindowState::Maximized;
	SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\welcome.wav");
	splayer->Play();
	usr.setvol_on(true);
	return System::Void();
}

System::Void gui::start::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e)
{
	login^ form = gcnew login();
	form->Show();
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

System::Void gui::start::start_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	//tell the form its gonna be draggin'
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
	return System::Void();
}

System::Void gui::start::start_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (this->dragging) { //Move, soldier, MOVE!
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X,
			currentScreenPos.Y - this->offset.Y);
	}
	return System::Void();
}

System::Void gui::start::start_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	dragging = false;
	return System::Void();
}

System::Void gui::start::VolumeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	Bitmap^ vol_on = gcnew Bitmap("icons\\sound_on.ico");
	Bitmap^ vol_off = gcnew Bitmap("icons\\sound_off.ico");
	if (usr.getvol_on())
	{
		usr.setvol_on(false);
		VolumeButton->BackgroundImage = vol_off;
	}
	else if (!usr.getvol_on())
	{
		usr.setvol_on(true);
		VolumeButton->BackgroundImage = vol_on;
	}
	cout << "getvol_on()= " << usr.getvol_on() << "\n";
	return System::Void();
}
