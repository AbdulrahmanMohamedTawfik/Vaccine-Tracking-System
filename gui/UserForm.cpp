#include "UserForm.h"
#include "Admin.h"
#include "User.h"
#include "login.h"
#include <map>
#include <msclr/marshal_cppstd.h>
#include <string>
System::Void gui::UserForm::ViewUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
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
	return System::Void();
}

System::Void gui::UserForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	map<string, User> users;
	User u;
	u.read_data(users);
	Admin a;
	String^ all;
	a.deleteUser(u.getNAtIDTextBox_Text(), users);
	u.update_files(users);
	label1->Text = "User Deleteted successfully";
	this->Close();
	return System::Void();
}
