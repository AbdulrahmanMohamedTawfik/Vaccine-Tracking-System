#include "login.h"
#include<iostream>
#include"User.h"
using namespace std;
using namespace System::Media;
System::Void gui::login::LoginButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserForm^ userform = gcnew UserForm();
	AdminForm^ adminform = gcnew AdminForm();
	String^ str_sys;
	User usr;
	str_sys = NatIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(str_sys);
	usr.setNAtIDTextBox_Text(NatID);
	str_sys = PasswordTextBox->Text;
	string password = msclr::interop::marshal_as< std::string >(str_sys);

	usr.login(NatID, password);
	if ((NatIDTextBox->Text == "") && (PasswordTextBox->Text == ""))
	{
		label4->Text = "You can't login with Empty user";
		if (usr.getvol_on())
		{
			SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\empty_user.wav");
			splayer->Play();
		}
	}
	else if ((NatIDTextBox->Text != "") && (PasswordTextBox->Text == ""))
	{
		label4->Text = "You can't login with Empty pass";
		if (usr.getvol_on())
		{
			SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\empty_pass.wav");
			splayer->Play();
		}
	}
	else if ((NatIDTextBox->Text == "") && (PasswordTextBox->Text != ""))
	{
		label4->Text = "You can't login with Empty ID";
		if (usr.getvol_on())
		{
			SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\empty_id.wav");
			splayer->Play();
		}
	}
	else if ((usr.correct_NatId && usr.correct_pass))
	{
		if (NatID.length() != 13)
		{
			label4->Text = "National ID is 13 number length";
			SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\nat_id_13_num.wav");
			splayer->Play();
		}
		else
		{
			userform->Show();
			this->Close();
		}
	}
	else
	{
		if (NatIDTextBox->Text == "admin" && PasswordTextBox->Text == "admin")
		{
			adminform->Show();
			SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\hello_admin.wav");
			splayer->Play();
			this->Close();
		}
		else
		{
			label4->Text = "Sorry , User does not exist";
			if (usr.getvol_on())
			{
				SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\user_not_exist.wav");
				splayer->Play();
			}
		}
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

System::Void gui::login::login_Load(System::Object^ sender, System::EventArgs^ e)
{
	User usr;
	NatIDTextBox->Focus();
	if (usr.getvol_on())
	{
		SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\login.wav");
		splayer->Play();
	}
	return System::Void();
}
