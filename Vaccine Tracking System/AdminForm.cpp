#include "AdminForm.h"
#include "Admin.h"
#include "User.h"
#include "statistics_dashboard.h"
#include <unordered_map>
#include <msclr/marshal_cppstd.h>
#include <string>
User u1;
Admin a1;
System::Void gui::AdminForm::ViewInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	view_or_del = 0;
	richTextBox1->Hide();
	NationalIDLabel->Show();
	NationalIDTextBox->Show();
	SubmitButton->Text = "View";
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::AdminForm::ViewAllUsers_Click(System::Object^ sender, System::EventArgs^ e)
{
	NationalIDLabel->Hide();
	NationalIDTextBox->Hide();
	SubmitButton->Hide();
	string contents = a1.viewAll(u1.getMap());
	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	richTextBox1->Text = syscontents;
	richTextBox1->Show();
	return System::Void();
}

System::Void gui::AdminForm::ViewAwaitingListButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NationalIDLabel->Hide();
	NationalIDTextBox->Hide();
	SubmitButton->Hide();
	string contents = a1.fill_WaitingList(u1.getMap());
	String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
	richTextBox1->Text = syscontents;
	richTextBox1->Show();
	return System::Void();
}

System::Void gui::AdminForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)//bug fix needed here
{
	view_or_del = 1;
	richTextBox1->Hide();
	NationalIDLabel->Show();
	NationalIDTextBox->Show();
	SubmitButton->Text = "Delete";
	SubmitButton->Show();
	return System::Void();
}

System::Void gui::AdminForm::DeleteAllUsers_Click(System::Object^ sender, System::EventArgs^ e)
{
	NationalIDLabel->Hide();
	NationalIDTextBox->Hide();
	SubmitButton->Hide();
	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	u1.deleteAll();
	u1.update_files(u1.getMap());
	richTextBox1->Show();
	richTextBox1->Text = "All Users Deleteted successfully";
	return System::Void();
}

System::Void gui::AdminForm::AdminForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	
	WindowState = FormWindowState::Maximized;
	return System::Void();
}

System::Void gui::AdminForm::StatButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	NationalIDLabel->Hide();
	NationalIDTextBox->Hide();
	SubmitButton->Hide();
	if (Application::OpenForms["statistics_dashboard"] == nullptr)
	{
		// Form is not open
		statistics_dashboard^ form = gcnew statistics_dashboard();
		form->Show();
	}
	richTextBox1->Show();
	richTextBox1->Text = "Statistics dashboard viewed successfully";
	return System::Void();
}

System::Void gui::AdminForm::SubmitButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	richTextBox1->Show();
	String^ all;
	all = NationalIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);
	if (view_or_del)
	{
		u1.deleteUser(NatID);
		if (u1.getdel_user_found())
		{
			u1.update_files(u1.getMap());
			richTextBox1->Text = "User Deleteted successfully";
		}
		else
		{
			richTextBox1->Text = "User Not Found!";
		}
	}
	else //if (!view_or_del)
	{
		string contents = a1.viewUser(NatID, u1.getMap());
		String^ syscontents = gcnew String(contents.c_str());//convert from std string to sys string
		richTextBox1->Text = syscontents;
	}
	return System::Void();
}

System::Void gui::AdminForm::NationalIDTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Enter)
	{
		SubmitButton->PerformClick();
	}
	return System::Void();
}
