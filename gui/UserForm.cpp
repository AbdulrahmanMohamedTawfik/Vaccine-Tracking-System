#include "UserForm.h"
#include "Admin.h"
#include "User.h"
#include "login.h"
#include <map>
#include <msclr/marshal_cppstd.h>
#include <string>
System::Void gui::UserForm::ViewUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*map<string, User> users;
	User u;
	u.read_data(users);
	Admin a;
	login^ log = gcnew login();
	String^ all;*/
	//log->ShowDialog(this);
	//all = log->NatIDTextBox->Text;
	//all = NationalIDTextBox->Text;
	//string NatID = msclr::interop::marshal_as< std::string >(all);//convert from sys string to std string
	//cout << "NatId= " << NatID << endl;
	//string contents = a.viewUser(NatID, users);
	//String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	//label1->Text = syscontents;
	//label1->Text = NatID;
	return System::Void();
}

System::Void gui::UserForm::EditUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void gui::UserForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	/*map<string, User> users;
	User u;
	u.read_data(users);
	Admin a;
	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	a.deleteUser(NatID, users);
	u.update_files(users);
	label1->Text = "User Deleteted successfully";*/
	return System::Void();
}
