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
	User u;
	string fullname, NatID, password, gender, age, country, gov, choosed_country, status, choosed_status;
	String^ str_sys;//system string to read from text box
	str_sys = NameTextBox->Text;
	fullname = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string

	str_sys = NatIDTextBox->Text;
	NatID = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string

	str_sys = PasswordTextBox->Text;
	password = msclr::interop::marshal_as< std::string >(str_sys);//convert from sys string to std string


	if (MaleCheckBox->Checked)
	{
		gender = "male";
	}
	else if (FemaleCheckBox->Checked)
	{
		gender = "female";
	}
	str_sys = AgeTextBox->Text;
	age = msclr::interop::marshal_as< std::string >(str_sys);

	if (EgyptCheckBox->Checked)
	{
		country = "Egypt";
	}
	else if (AbroadCheckBox->Checked)
	{
		str_sys = OtherCountryComboBox->Text;
		choosed_country = msclr::interop::marshal_as< std::string >(str_sys);
		country = ("Abroad: " + choosed_country);
	}

	str_sys = GovernorateComboBox->Text;
	gov = msclr::interop::marshal_as< std::string >(str_sys);

	if (ApplyCheckBox->Checked)
	{
		status = "not vaccinated";
	}
	else if (vaccinatedCheckBox->Checked)
	{
		str_sys = DoseComboBox->Text;
		choosed_status = msclr::interop::marshal_as< std::string >(str_sys);
		status = ("vaccinated: " + choosed_status);
	}

	
	if ((NameTextBox->Text == "") || (NatIDTextBox->Text == "") || (PasswordTextBox->Text == "") || ((!MaleCheckBox->Checked) && (!FemaleCheckBox->Checked)) || (AgeTextBox->Text == "") || ((!EgyptCheckBox->Checked) && (!AbroadCheckBox->Checked)) || (GovernorateComboBox->Text == "") || ((!vaccinatedCheckBox->Checked) && (!ApplyCheckBox->Checked)) || ((AbroadCheckBox->Checked) && (OtherCountryComboBox->Text == "")) || ((vaccinatedCheckBox->Checked) && (DoseComboBox->Text == "")))
	{
		label4->ForeColor = System::Drawing::Color::Red;
		label4->Text = "Missing info! please, fill all feilds";
	}
	else if (u.check_id(NatID))
	{
		label4->ForeColor = System::Drawing::Color::Red;
		label4->Text = "ID is already used by another user!";
	}
	else
	{
		u.registration(fullname, NatID, password, gender, age, country, gov, status);
		label4->ForeColor = System::Drawing::Color::Green;
		label4->Text = "Registered successfully!";
	}

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

System::Void gui::reg::reg_Load(System::Object^ sender, System::EventArgs^ e)
{
	WindowState = FormWindowState::Maximized;
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

System::Void gui::reg::NameTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Down)
	{
		NatIDTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Enter)
	{
		RegisterButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::reg::NatIDTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Down)
	{
		PasswordTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Up)
	{
		NameTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Enter)
	{
		RegisterButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::reg::PasswordTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Down)
	{
		AgeTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Up)
	{
		NatIDTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Enter)
	{
		RegisterButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::reg::AgeTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Down)
	{
		GovernorateComboBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Up)
	{
		PasswordTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Enter)
	{
		RegisterButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::reg::GovernorateTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Up)
	{
		AgeTextBox->Focus();
	}
	else if (e->KeyValue == (int)Keys::Enter)
	{
		RegisterButton->PerformClick();
	}
	return System::Void();
}

System::Void gui::reg::reg_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyValue == (int)Keys::Enter)
	{
		RegisterButton->PerformClick();
	}
	return System::Void();
}


