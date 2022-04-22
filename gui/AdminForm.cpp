#include "AdminForm.h"
#include "Admin.h"
#include "User.h"
#include <map>
#include <msclr/marshal_cppstd.h>
#include <string>
System::Void gui::AdminForm::ViewInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	map<string, User> users;
	User u;
	u.read_data(users);
	Admin a;
	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	string contents = a.viewUser(NatID, users);
	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	richTextBox1->Text = syscontents;
    return System::Void();
}

System::Void gui::AdminForm::ViewAllUsers_Click(System::Object^ sender, System::EventArgs^ e)
{
	map<string, User> users;
	User u;
	u.read_data(users);
	Admin a;
	string contents = a.viewAll(users);
	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	richTextBox1->Text = syscontents;
	return System::Void();
}

System::Void gui::AdminForm::ViewAwaitingListButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	AwaitingList^ awaitinglist = gcnew AwaitingList();
	awaitinglist->Show();

	//function call
	richTextBox1->Text = "Awaiting list viewed successfully";

	return System::Void();
}

System::Void gui::AdminForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	map<string, User> users;
	User u;
	u.read_data(users);
	Admin a;
	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	a.deleteUser(NatID, users);
	if (u.getdel_user_found())
	{
		u.update_files(users);
		richTextBox1->Text = "User Deleteted successfully";
	}
	else
	{
		richTextBox1->Text = "User Not Found!";
	}
	return System::Void();
}

System::Void gui::AdminForm::DeleteAllUsers_Click(System::Object^ sender, System::EventArgs^ e)
{
	map<string, User> users;
	User u;
	u.read_data(users);
	Admin a;
	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	a.deleteAll(users);
	u.update_files(users);
	richTextBox1->Text = "All Users Deleteted successfully";
	return System::Void();
}
