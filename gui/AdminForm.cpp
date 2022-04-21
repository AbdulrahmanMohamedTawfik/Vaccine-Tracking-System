#include "AdminForm.h"

System::Void gui::AdminForm::ViewInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserInfo^ userinfo = gcnew UserInfo();
	userinfo->Show();

	//function call
	label1->Text = "User Info showed successfully";
    return System::Void();
}

System::Void gui::AdminForm::ViewAwaitingListButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	AwaitingList^ awaitinglist = gcnew AwaitingList();
	awaitinglist->Show();

	//function call
	label1->Text = "Awaiting list viewed successfully";

	return System::Void();
}

System::Void gui::AdminForm::DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	label1->Text = "User Deletet successfully";

	return System::Void();
}
