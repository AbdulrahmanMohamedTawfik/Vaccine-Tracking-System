#include "login.h"
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
	//cout << "getNAtIDTextBox_Text= " << u.getNAtIDTextBox_Text() << endl;
	str_sys = PasswordTextBox->Text;
	string password = msclr::interop::marshal_as< std::string >(str_sys);

	u.login(NatID, password);

	if (u.correct_NatId && u.correct_pass)
	{
		userform->Show();
		this->Close();
	}
	else
	{
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
		else
		{
			label4->Text = "Sorry , User does not exist";
		}
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
	return System::Void();
}

System::Void gui::login::HidePassCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (PasswordTextBox->PasswordChar == '\0')
	{
		PasswordTextBox->PasswordChar = '*';
		HidePassCheckBox->Text = "🐵";
	}
	else
	{
		PasswordTextBox->PasswordChar = '\0';
		HidePassCheckBox->Text = "🙈";
	}
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
	if (e->KeyValue == (int)Keys::Enter)//if enter is pressed
	{
		LoginButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::login::NatIDTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Enter)
	{
		PasswordTextBox->Focus();
	}
	return System::Void();
}
