#include "UserForm.h"
#include "Admin.h"
#include "User.h"
#include "login.h"
#include <unordered_map>
#include <msclr/marshal_cppstd.h>
#include <string>
using namespace System::Media;
unordered_map<string, User> users;
User u;
Admin a;
System::Void gui::UserForm::UserForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	WindowState = FormWindowState::Maximized;
	users.clear();
	u.read_data(users);
	u.getUserName(users);
	string std_str = u.NameText;
	String^ sys_str = gcnew String(std_str.c_str());
	UsernameLabel->Text = sys_str;
	this->Text = sys_str;
	if (u.getvol_on())
	{
		SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\user.wav");
		splayer->Play();
	}
	return System::Void();
}

System::Void gui::UserForm::ViewUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	EditNameButton->Hide();
	EditIDButton->Hide();
	EditGendrButton->Hide();
	EditAgeButton->Hide();
	EditCountryButton->Hide();
	EditGovButton->Hide();
	EditStatusButton->Hide();
	EditPassButton->Hide();
	NewvalueLabel->Hide();
	NewvalueTextBox->Hide();
	ErrorLabel->Hide();
	SubmitButton->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	GovernorateComboBox->Hide();
	login^ l = gcnew login();
	string contents = a.viewUser(u.getNAtIDTextBox_Text(), users);
	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	UserInfoRichTextBox->Show();
	UserInfoRichTextBox->Text = syscontents;
	return System::Void();
}

System::Void gui::UserForm::EditUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	EditNameButton->Show();
	EditIDButton->Show();
	EditGendrButton->Show();
	EditAgeButton->Show();
	EditCountryButton->Show();
	EditGovButton->Show();
	EditStatusButton->Show();
	EditPassButton->Show();
	MaleCheckBox->Hide();
	ErrorLabel->Hide();
	SubmitButton->Hide();
	NewvalueTextBox->Hide();
	NewvalueLabel->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	a.deleteUser(u.getNAtIDTextBox_Text(), users);
	u.update_files(users);
	this->Close();
	return System::Void();
}

System::Void gui::UserForm::EditNameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New Name :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	ErrorLabel->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::EditIDButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New ID :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	ErrorLabel->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::EditGendrButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New gender :";
	NewvalueLabel->Show();
	NewvalueTextBox->Hide();
	EgyptCheckBox->Hide();
	ErrorLabel->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	MaleCheckBox->Show();
	FemaleCheckBox->Show();
	SubmitButton->Show();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::EditAgeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New Age :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	ErrorLabel->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::EditCountryButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New country :";
	NewvalueLabel->Show();
	NewvalueTextBox->Hide();
	ErrorLabel->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Show();
	AbroadCheckBox->Show();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	SubmitButton->Show();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::EditGovButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New governorate :";
	NewvalueLabel->Show();
	SubmitButton->Show();
	GovernorateComboBox->Show();
	NewvalueTextBox->Hide();
	ErrorLabel->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::EditStatusButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New status :";
	NewvalueLabel->Show();
	NewvalueTextBox->Hide();
	MaleCheckBox->Hide();
	ErrorLabel->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Show();
	ApplyCheckBox->Show();
	SubmitButton->Show();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::EditPassButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New password :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	ErrorLabel->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	GovernorateComboBox->Hide();
	return System::Void();
}

System::Void gui::UserForm::SubmitButton_Click(System::Object^ sender, System::EventArgs^ e)
{

	string new_value;
	String^ str_sys;
	str_sys = NewvalueTextBox->Text;
	new_value = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string
	if ((MaleCheckBox->Checked == false) && (FemaleCheckBox->Checked == false) && (EgyptCheckBox->Checked == false) && (AbroadCheckBox->Checked == false) && (vaccinatedCheckBox->Checked == false) && (ApplyCheckBox->Checked == false) && (NewvalueTextBox->Text == "") && (GovernorateComboBox->Text == ""))
	{
		ErrorLabel->ForeColor = System::Drawing::Color::Red;
		ErrorLabel->Show();
		ErrorLabel->Text = "You can't submit empty";
		if (u.getvol_on())
		{
			SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\empty_new_val.wav");
			splayer->Play();
		}
	}
	else
	{

		ErrorLabel->Hide();
		if (NewvalueLabel->Text == "New Name :")
		{
			if (new_value.find_first_not_of("0123456789"))
			{
				ErrorLabel->ForeColor = System::Drawing::Color::Red;
				ErrorLabel->Text = "Name must contains only letters";
				ErrorLabel->Show();
				if (u.getvol_on())
				{
					SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\name_only_letters.wav");
					splayer->Play();
				}
			}
			else
			{
				u.editName(new_value, users);
				u.update_files(users);
				ErrorLabel->ForeColor = System::Drawing::Color::Green;
				ErrorLabel->Show();
				ErrorLabel->Text = "Name Changed succesfully!";
				u.read_data(users);
				u.getUserName(users);
				string std_str = u.NameText;
				String^ sys_str = gcnew String(std_str.c_str());
				UsernameLabel->Text = sys_str;
				this->Text = sys_str;
			}
		}
		else if (NewvalueLabel->Text == "New Age :")
		{
			if ((stoi(new_value) < 1) || (stoi(new_value) > 100))
			{
				ErrorLabel->ForeColor = System::Drawing::Color::Red;
				ErrorLabel->Text = "Enter a real age";
				ErrorLabel->Show();
				if (u.getvol_on())
				{
					SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\age_valid.wav");
					splayer->Play();
				}
			}
			else
			{
				u.editAge(new_value, users);
				u.update_files(users);
				ErrorLabel->ForeColor = System::Drawing::Color::Green;
				ErrorLabel->Show();
				ErrorLabel->Text = " Age Changed succesfully!";
			}
		}
		else if (NewvalueLabel->Text == "New gender :")
		{
			if (MaleCheckBox->Checked)
			{
				new_value = "male";
			}
			else //if (FemaleCheckBox->Checked)
			{
				new_value = "female";
			}
			u.editGender(new_value, users);
			u.update_files(users);

			ErrorLabel->ForeColor = System::Drawing::Color::Green;
			ErrorLabel->Show();
			ErrorLabel->Text = "Gender Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New country :")
		{
			if (EgyptCheckBox->Checked)
			{
				new_value = "Egypt";
				u.editCountry(new_value, users);
				u.update_files(users);

				ErrorLabel->ForeColor = System::Drawing::Color::Green;
				ErrorLabel->Text = "Country Changed succesfully!";
				ErrorLabel->Show();
			}
			else if (AbroadCheckBox->Checked)
			{
				str_sys = OtherCountryComboBox->Text;
				string choosed_country = msclr::interop::marshal_as< std::string >(str_sys);
				if (choosed_country == "")
				{
					ErrorLabel->ForeColor = System::Drawing::Color::Red;
					ErrorLabel->Text = "Choose living country";
					if (u.getvol_on())
					{
						SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\empty_other_country.wav");
						splayer->Play();
					}
					ErrorLabel->Show();
				}
				else
				{
					new_value = ("Abroad: " + choosed_country);
					u.editCountry(new_value, users);
					u.update_files(users);

					ErrorLabel->ForeColor = System::Drawing::Color::Green;
					ErrorLabel->Text = "Country Changed succesfully!";
					ErrorLabel->Show();
				}
			}
		}
		else if (NewvalueLabel->Text == "New governorate :")
		{
			str_sys = GovernorateComboBox->Text;
			new_value = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string
			u.editGov(new_value, users);
			u.update_files(users);

			ErrorLabel->ForeColor = System::Drawing::Color::Green;
			ErrorLabel->Show();
			ErrorLabel->Text = "Governorate Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New status :")
		{
			if (ApplyCheckBox->Checked)
			{
				new_value = "not vaccinated";
				u.editStatus(new_value, users);
				u.update_files(users);

				ErrorLabel->ForeColor = System::Drawing::Color::Green;
				ErrorLabel->Text = "Status Changed succesfully!";
				ErrorLabel->Show();
			}
			else if (vaccinatedCheckBox->Checked)
			{
				str_sys = DoseComboBox->Text;
				string choosed_status = msclr::interop::marshal_as< std::string >(str_sys);
				if (choosed_status == "")
				{
					ErrorLabel->ForeColor = System::Drawing::Color::Red;
					ErrorLabel->Text = "Choose 1st dose or both doses";
					if (u.getvol_on())
					{
						SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\empty_dose.wav");
						splayer->Play();
					}
					ErrorLabel->Show();
				}
				else
				{
					new_value = ("vaccinated: " + choosed_status);
					u.editStatus(new_value, users);
					u.update_files(users);

					ErrorLabel->ForeColor = System::Drawing::Color::Green;
					ErrorLabel->Text = "Status Changed succesfully!";
					ErrorLabel->Show();
				}
			}
		}
		else if (NewvalueLabel->Text == "New password :")
		{
			if (new_value.length() < 8)
			{
				ErrorLabel->ForeColor = System::Drawing::Color::Red;
				ErrorLabel->Text = "Weak Password(at least 8 characters)";
				ErrorLabel->Show();
				if (u.getvol_on())
				{
					SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\pass_less_than_8.wav");
					splayer->Play();
				}
			}
			else
			{
				u.editPassword(new_value, users);
				u.update_files(users);

				ErrorLabel->ForeColor = System::Drawing::Color::Green;
				ErrorLabel->Show();
				ErrorLabel->Text = "Password Changed succesfully!";
			}
		}
		else //if (NewvalueLabel->Text == "New ID :")
		{
			if (!new_value.find_first_not_of("0123456789"))//NatID.find_first_not_of("0123456789") returns 1 if all is not number
			{
				ErrorLabel->ForeColor = System::Drawing::Color::Red;
				ErrorLabel->Text = "National ID must contains only numbers";
				ErrorLabel->Show();
				if (u.getvol_on())
				{
					SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\nat_id_only_num.wav");
					splayer->Play();
				}
			}
			else if (new_value.length() != 13)
			{
				ErrorLabel->ForeColor = System::Drawing::Color::Red;
				ErrorLabel->Text = "National ID is 13 number length";
				ErrorLabel->Show();
				if (u.getvol_on())
				{
					SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\nat_id_13_num.wav");
					splayer->Play();
				}
			}
			else if (u.check_id(new_value))
			{
				ErrorLabel->ForeColor = System::Drawing::Color::Red;
				ErrorLabel->Show();
				ErrorLabel->Text = "ID is already used!";
				if (u.getvol_on())
				{
					SoundPlayer^ splayer = gcnew SoundPlayer("sounds\\id_already_used.wav");
					splayer->Play();
				}
			}
			else
			{
				u.editId(new_value, users);
				u.update_files(users);
				ErrorLabel->ForeColor = System::Drawing::Color::Green;
				ErrorLabel->Show();
				ErrorLabel->Text = "ID Changed succesfully!";
			}
		}
		NewvalueTextBox->Text = "";
		MaleCheckBox->Checked = false;
		FemaleCheckBox->Checked = false;
		EgyptCheckBox->Checked = false;
		AbroadCheckBox->Checked = false;
		vaccinatedCheckBox->Checked = false;
		ApplyCheckBox->Checked = false;

	}
	/*if ((ApplyCheckBox->Checked)||(AbroadCheckBox->Checked))
	{
		ErrorLabel->Hide();
	}*/
	return System::Void();
}

System::Void gui::UserForm::MaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (FemaleCheckBox->Checked)//uncheck the other choice
	{
		FemaleCheckBox->Checked = false;
		//MaleCheckBox->Checked = true;
	}
	return System::Void();
}

System::Void gui::UserForm::FemaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (MaleCheckBox->Checked)//uncheck the other choice
	{
		MaleCheckBox->Checked = false;
		//FemaleCheckBox->Checked = true;
	}
	return System::Void();
}

System::Void gui::UserForm::AbroadCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (EgyptCheckBox->Checked)//uncheck the other choice
	{
		EgyptCheckBox->Checked = false;
		//AbroadCheckBox->Checked = true;
	}
	if (AbroadCheckBox->Checked)
	{
		OtherCountryComboBox->Show();
	}
	else
	{
		OtherCountryComboBox->Hide();
	}
	return System::Void();
}

System::Void gui::UserForm::EgyptCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (AbroadCheckBox->Checked)//uncheck the other choice
	{
		AbroadCheckBox->Checked = false;
		//EgyptCheckBox->Checked = true;
	}
	return System::Void();
}

System::Void gui::UserForm::vaccinatedCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (ApplyCheckBox->Checked)//uncheck the other choice
	{
		ApplyCheckBox->Checked = false;
		//vaccinatedCheckBox->Checked = true;
	}

	if (vaccinatedCheckBox->Checked)
	{
		DoseComboBox->Show();
	}
	else
	{
		DoseComboBox->Hide();
	}
	return System::Void();
}

System::Void gui::UserForm::ApplyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (vaccinatedCheckBox->Checked)//uncheck the other choice
	{
		vaccinatedCheckBox->Checked = false;
		//ApplyCheckBox->Checked = true;
	}
	return System::Void();
}

System::Void gui::UserForm::NewvalueTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Enter)//if enter is pressed
	{
		SubmitButton->PerformClick();
	}
	return System::Void();
}

