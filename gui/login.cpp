﻿#include "login.h"
#include<iostream>
using namespace std;
System::Void gui::login::LoginButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserForm^ userform = gcnew UserForm();
	AdminForm^ adminform = gcnew AdminForm();
	User u;
	String^ str_sys;
	str_sys = NatIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(str_sys);
	u.setNAtIDTextBox_Text(NatID);
	str_sys = PasswordTextBox->Text;
	string password = msclr::interop::marshal_as< std::string >(str_sys);

	u.login(NatID, password);
	if ((NatIDTextBox->Text == "") && (PasswordTextBox->Text == ""))
	{
		label4->Text = "Really? u wanna login with Empty user";
	}
	else if ((NatIDTextBox->Text != "") && (PasswordTextBox->Text == ""))
	{
		label4->Text = "Really? u wanna login with Empty pass";
	}
	else if ((NatIDTextBox->Text == "") && (PasswordTextBox->Text != ""))
	{
		label4->Text = "Really? u wanna login with Empty ID";
	}
	else if ((u.correct_NatId && u.correct_pass))
	{
		userform->Show();
		this->Close();
	}
	else
	{
		label4->Text = "Sorry , User does not exist";
	}
	if (NatIDTextBox->Text == "admin" && PasswordTextBox->Text == "admin")
	{
		adminform->Show();
		this->Close();
	}
	/*if (NatID.length()!=14)
	{
		label4->Text = "u know ID is 14 num ,don't u?";
	}*/

	return System::Void();
}

System::Void gui::login::login_Load(System::Object^ sender, System::EventArgs^ e)
{
	NatIDTextBox->Focus();
	return System::Void();
}


System::Void gui::login::label5_Click(System::Object^ sender, System::EventArgs^ e)
{
	reg^ regform = gcnew reg();
	regform->Show();
	return System::Void();
}

System::Void gui::login::PasswordTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Up)
	{
		NatIDTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Enter)
	{
		LoginButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::login::NatIDTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Down)
	{
		PasswordTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Enter)
	{
		LoginButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::login::label5_MouseHover(System::Object^ sender, System::EventArgs^ e)
{
	label5->ForeColor = System::Drawing::Color::HotPink;
	return System::Void();
}

System::Void gui::login::label5_MouseLeave(System::Object^ sender, System::EventArgs^ e)
{
	label5->ForeColor = System::Drawing::Color::MediumOrchid;
	return System::Void();
}

System::Void gui::login::UnseeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (PasswordTextBox->PasswordChar == '\0')
	{
		PasswordTextBox->PasswordChar = '*';
		UnseeButton->Text = "🐵";
	}
	else
	{
		PasswordTextBox->PasswordChar = '\0';
		UnseeButton->Text = "🙈";
	}
	return System::Void();
}
