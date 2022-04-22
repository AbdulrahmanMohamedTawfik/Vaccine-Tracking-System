#include "reg.h"
#include<string>
#include "User.h"
#include <msclr/marshal_cppstd.h>
System::Void gui::reg::NameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	String^ name = NameTextBox->Text;
	return System::Void();
}

System::Void gui::reg::RegisterButton_Click(System::Object^ sender, System::EventArgs^ e)
{

	//Register function call here
	User l;
	String^ all;
	all = NameTextBox->Text;
	string fullname = msclr::interop::marshal_as< std::string >(all);

	all = NatIDTextBox->Text;
	string NatID = msclr::interop::marshal_as< std::string >(all);

	all = PasswordTextBox->Text;
	string password = msclr::interop::marshal_as< std::string >(all);

	string gender;
	if (MaleCheckBox->Checked)
	{
		gender = "male";
	}
	else if (FemaleCheckBox->Checked)
	{
		gender = "female";
	}
	all = AgeTextBox->Text;
	string age = msclr::interop::marshal_as< std::string >(all);

	string country;
	if (EgyptCheckBox->Checked)
	{
		country = "Egypt";
	}
	else if (AbroadCheckBox->Checked)
	{
		all = OtherCountryComboBox->Text;
		string c = msclr::interop::marshal_as< std::string >(all);
		country = ("other: " + c);
	}

	all = GovernorateTextBox->Text;
	string gov = msclr::interop::marshal_as< std::string >(all);

	string status;
	if (ApplyCheckBox->Checked)
	{
		status = "not vaccinated";
	}
	else if (vaccinatedCheckBox->Checked)
	{
		all = DoseComboBox->Text;
		string c = msclr::interop::marshal_as< std::string >(all);
		status = ("vaccinated: " + c);
	}
	if (l.check_id(NatID))
	{
		label4->Text = "ID is already used by another user!";
	}
	else
	{
		l.registration(fullname, NatID, password, gender, age, country, gov, status);
		label4->Text = "Registered successfully!";
		//this->Close();
	}
	if ((NameTextBox->Text == "") || (NatIDTextBox->Text == "") || (PasswordTextBox->Text == "") || ((!MaleCheckBox->Checked) && (!FemaleCheckBox->Checked)) || (AgeTextBox->Text == "") || ((!EgyptCheckBox->Checked) && (!AbroadCheckBox->Checked)) || (GovernorateTextBox->Text == "") || ((!vaccinatedCheckBox->Checked) && (!ApplyCheckBox->Checked)))
		label4->Text = "Missing info! please, fill all feilds";
	
	return System::Void();
}

System::Void gui::reg::UnseeButton_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (PasswordTextBox->PasswordChar == '*')
	{
		PasswordTextBox->PasswordChar = '\0';
		//open: Project >> properties >> c/c++ >> commandline >> Additional Options >> write " /execution-charset /utf-8 "
		UnseeButton->Text = "🙈";
	}
	else
	{
		PasswordTextBox->PasswordChar = '*';
		UnseeButton->Text = "🐵";
	}

	return System::Void();
}

System::Void gui::reg::MaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (FemaleCheckBox->Checked)//uncheck the other choice
	{
		FemaleCheckBox->Checked = false;
		//MaleCheckBox->Checked = true;
	}
	return System::Void();
}

System::Void gui::reg::FemaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (MaleCheckBox->Checked)//uncheck the other choice
	{
		MaleCheckBox->Checked = false;
		//FemaleCheckBox->Checked = true;
	}
	return System::Void();
}

System::Void gui::reg::AbroadCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
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

System::Void gui::reg::EgyptCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (AbroadCheckBox->Checked)//uncheck the other choice
	{
		AbroadCheckBox->Checked = false;
		//EgyptCheckBox->Checked = true;
	}
	return System::Void();
}

System::Void gui::reg::vaccinatedCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
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

System::Void gui::reg::ApplyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (vaccinatedCheckBox->Checked)//uncheck the other choice
	{
		vaccinatedCheckBox->Checked = false;
		//ApplyCheckBox->Checked = true;
	}
	return System::Void();
}
