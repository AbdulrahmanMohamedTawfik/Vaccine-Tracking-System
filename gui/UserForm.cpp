#include "UserForm.h"
#include "Admin.h"
#include "User.h"
#include "login.h"
#include <map>
#include <msclr/marshal_cppstd.h>
#include <string>
System::Void gui::UserForm::ViewUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	EditNameButton->Hide();
	EditIDButton->Hide();
	EditGendrButton->Hide();
	EditAgeButton->Hide();
	EditCountryButton->Hide();
	EditGovButton->Hide();
	EditStatusButton->Hide();
	NewvalueLabel->Hide();
	NewvalueTextBox->Hide();
	SubmitButton->Hide();
	map<string, User> users;
	User u;
	login^ l = gcnew login();
	u.read_data(users);
	Admin a;
	string contents = a.viewUser(u.getNAtIDTextBox_Text(), users);
	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	label1->Text = syscontents;
	//label1->Text = "User Info showed successfully";
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
	NewvalueLabel->Hide();
	NewvalueTextBox->Hide();
	SubmitButton->Hide();
	map<string, User> users;
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
	map<string, User> users;
	User u;
	Admin a;
	u.read_data(users);
	string new_value;
	string new_value1;
	String^ all;
	String^ all1;
	all = NewvalueTextBox->Text;
	new_value = msclr::interop::marshal_as< std::string >(all);//convert from sys string to std string
	all1 = NewvalueLabel->Text;
	new_value1 = msclr::interop::marshal_as< std::string >(all);//convert from sys string to std string

	/*if (new_value1 == "New Name :")
	{
		u.editName(new_value, users);
	}
	else if (NewvalueLabel->Text == "New ID :")
	{
		u.editId(new_value, users);
	}
	else if (NewvalueLabel->Text == "New gender :")
	{
		u.editGender(new_value, users);
	}
	else if (new_value1 == "New Age :")
	{
		u.editAge(new_value, users);
	}
	else if (NewvalueLabel->Text == "New country :")
	{
		u.editCountry(new_value, users);
	}
	else if (NewvalueLabel->Text == "New status :")
	{
		u.editStatus(new_value, users);
	}
	else if (NewvalueLabel->Text == "New pass :")
	{
		u.editPassword(new_value, users);
	}*/
	u.editAge(new_value, users);
	u.update_files(users);
	string s = a.viewUser("123", users);
	cout <<"s="<< s;
	return System::Void();
}
