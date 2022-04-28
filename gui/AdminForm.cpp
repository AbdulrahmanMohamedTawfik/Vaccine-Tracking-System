#include "AdminForm.h"
#include "Admin.h"
#include "User.h"
#include <unordered_map>
#include <msclr/marshal_cppstd.h>
#include <string>
unordered_map<string, User> users_for_admin;
User u1;
Admin a1;
System::Void gui::AdminForm::ViewInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	
	
	
	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	string contents = a1.viewUser(NatID, users_for_admin);

	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	richTextBox1->Text = syscontents;
	return System::Void();
}

System::Void gui::AdminForm::ViewAllUsers_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	

	string contents = a1.viewAll(users_for_admin);
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

System::Void gui::AdminForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)//bug fix needed here
{


	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	a1.deleteUser(NatID, users_for_admin);
	if (u1.getdel_user_found())//bug fix needed here (always if is executed and else never executed)
	{
		u1.update_files(users_for_admin);
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


	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	a1.deleteAll(users_for_admin);
	u1.update_files(users_for_admin);
	richTextBox1->Text = "All Users Deleteted successfully";
	return System::Void();
}

System::Void gui::AdminForm::AdminForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	u1.read_data(users_for_admin);
	return System::Void();
}
