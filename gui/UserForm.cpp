#include "UserForm.h"
#include "Admin.h"
#include "User.h"
#include "login.h"

#include <unordered_map>
#include <msclr/marshal_cppstd.h>
#include <string>
//#include<iostream>
//using namespace std;
unordered_map<string, User> users;
User u;
Admin a;
System::Void gui::UserForm::UserForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	
	u.read_data(users);
	u.getUserName(users);
	string std_str = u.NameText;
	String^ sys_str = gcnew String(std_str.c_str());
	UsernameLabel->Text = sys_str;
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
	SuccessLabel->Hide();
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
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
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

System::Void gui::UserForm::EditIDButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New ID :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
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

System::Void gui::UserForm::EditGendrButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New gender :";
	NewvalueLabel->Show();
	NewvalueTextBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	MaleCheckBox->Show();
	FemaleCheckBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditAgeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New Age :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
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

System::Void gui::UserForm::EditCountryButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New country :";
	NewvalueLabel->Show();
	NewvalueTextBox->Hide();
	MaleCheckBox->Hide();
	FemaleCheckBox->Hide();
	EgyptCheckBox->Show();
	AbroadCheckBox->Show();
	vaccinatedCheckBox->Hide();
	ApplyCheckBox->Hide();
	DoseComboBox->Hide();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditGovButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New gov :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
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
	FemaleCheckBox->Hide();
	EgyptCheckBox->Hide();
	AbroadCheckBox->Hide();
	OtherCountryComboBox->Hide();
	vaccinatedCheckBox->Show();
	ApplyCheckBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditPassButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New pass :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
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

System::Void gui::UserForm::SubmitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	string new_value;
	String^ str_sys;
	str_sys = NewvalueTextBox->Text;
	new_value = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string
	if ((MaleCheckBox->Checked == false) && (FemaleCheckBox->Checked == false) && (EgyptCheckBox->Checked == false) && (AbroadCheckBox->Checked == false) && (vaccinatedCheckBox->Checked == false) && (ApplyCheckBox->Checked == false) && (NewvalueTextBox->Text == ""))
	{

		ErrorLabel->Show();
		SuccessLabel->Hide();
		ErrorLabel->Text = "Really? Submit Empty!";

	}
	else
	{
		SuccessLabel->Hide();
		ErrorLabel->Hide();
		if (NewvalueLabel->Text == "New Name :")
		{
			u.editName(new_value, users);
			SuccessLabel->Show();
			SuccessLabel->Text = "Name Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New Age :")
		{
			u.editAge(new_value, users);
			SuccessLabel->Show();
			SuccessLabel->Text = " Age Changed succesfully!";
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
			SuccessLabel->Show();
			SuccessLabel->Text = "Gender Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New country :")
		{
			if (EgyptCheckBox->Checked)
			{
				new_value = "Egypt";
			}
			else if (AbroadCheckBox->Checked)
			{
				str_sys = OtherCountryComboBox->Text;
				string choosed_country = msclr::interop::marshal_as< std::string >(str_sys);
				new_value = ("Abroad: " + choosed_country);
			}
			u.editCountry(new_value, users);
			SuccessLabel->Show();
			SuccessLabel->Text = "Country Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New status :")
		{
			if (ApplyCheckBox->Checked)
			{
				new_value = "not vaccinated";
			}
			else if (vaccinatedCheckBox->Checked)
			{
				str_sys = DoseComboBox->Text;
				string choosed_status = msclr::interop::marshal_as< std::string >(str_sys);
				new_value = ("vaccinated: " + choosed_status);
			}
			u.editStatus(new_value, users);
			SuccessLabel->Show();
			SuccessLabel->Text = "Status Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New pass :")
		{
			u.editPassword(new_value, users);
			SuccessLabel->Show();
			SuccessLabel->Text = "Password Changed succesfully!";
		}
		else //if (NewvalueLabel->Text == "New ID :")
		{
			if (u.check_id(new_value))
			{
				ErrorLabel->Show();
				ErrorLabel->Text = "ID is already used!";
			}
			else
			{
				u.editId(new_value, users);
				SuccessLabel->Show();
				SuccessLabel->Text = "ID Changed succesfully!";
			}
		}
		NewvalueTextBox->Text = "";
		MaleCheckBox->Checked = false;
		FemaleCheckBox->Checked = false;
		EgyptCheckBox->Checked = false;
		AbroadCheckBox->Checked = false;
		vaccinatedCheckBox->Checked = false;
		ApplyCheckBox->Checked = false;
		u.update_files(users);
	}
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

