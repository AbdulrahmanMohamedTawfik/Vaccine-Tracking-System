#include "UserForm.h"
#include "Admin.h"
#include "User.h"
#include "login.h"
#include <map>
#include <msclr/marshal_cppstd.h>
#include <string>
map<string, User> users;
System::Void gui::UserForm::UserForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	//hello + "username"
	/*User u;
	string std_str = u.getUserName(users);
	String^ sys_str = gcnew String(std_str.c_str());
	HelloUserLabel->Text = sys_str;*/
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
	
	User u;
	login^ l = gcnew login();
	u.read_data(users);
	Admin a;
	string contents = a.viewUser(u.getNAtIDTextBox_Text(), users);
	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	label1->Text = syscontents;
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
	return System::Void();
}

System::Void gui::UserForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
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
	User u;
	u.read_data(users);
	Admin a;
	a.deleteUser(u.getNAtIDTextBox_Text(), users);
	u.update_files(users);
	label1->Text = "User Deleteted successfully";
	this->Close();
	return System::Void();
}

System::Void gui::UserForm::EditNameButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New Name :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditIDButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New ID :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditGendrButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New gender :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditAgeButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New Age :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditCountryButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New country :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditGovButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New gov :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditStatusButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New status :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::UserForm::EditPassButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NewvalueLabel->Text = "New pass :";
	NewvalueLabel->Show();
	NewvalueTextBox->Show();
	SubmitButton->Show();
	return System::Void();
	return System::Void();
}

System::Void gui::UserForm::SubmitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	User u;
	Admin a;
	u.read_data(users);
	string new_value;
	String^ str_sys;
	str_sys = NewvalueTextBox->Text;
	new_value = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string
	if (NewvalueTextBox->Text == "")
	{
		ErrorLabel->Show();
		ErrorLabel->Text = "Field is Empty!";
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
			u.editGender(new_value, users);
			SuccessLabel->Show();
			SuccessLabel->Text = "Gender Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New country :")
		{
			u.editCountry(new_value, users);
			SuccessLabel->Show();
			SuccessLabel->Text = "Country Changed succesfully!";
		}
		else if (NewvalueLabel->Text == "New status :")
		{
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
		u.update_files(users);
	}
	return System::Void();
}
