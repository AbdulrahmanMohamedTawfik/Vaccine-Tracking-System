#pragma once
#include"User.h"
//#include<iostream>
namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for User
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
		{
			InitializeComponent();
			UserInfoRichTextBox->Hide();
			EditNameButton->Hide();
			EditIDButton->Hide();
			EditGendrButton->Hide();
			EditAgeButton->Hide();
			EditCountryButton->Hide();
			EditGovButton->Hide();
			EditStatusButton->Hide();
			NewvalueLabel->Hide();
			NewvalueTextBox->Hide();
			EditPassButton->Hide();
			SubmitButton->Hide();
			MaleCheckBox->Hide();
			FemaleCheckBox->Hide();
			EgyptCheckBox->Hide();
			AbroadCheckBox->Hide();
			OtherCountryComboBox->Hide();
			vaccinatedCheckBox->Hide();
			ApplyCheckBox->Hide();
			DoseComboBox->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ViewUserInfoButton;
	protected:
	private: System::Windows::Forms::Button^ EditUserInfoButton;
	private: System::Windows::Forms::Button^ DeleteInfoButton;
	private: System::Windows::Forms::Label^ HelloUserLabel;


	private: System::Windows::Forms::Button^ EditNameButton;
	private: System::Windows::Forms::Button^ EditIDButton;
	private: System::Windows::Forms::Button^ EditGendrButton;
	private: System::Windows::Forms::Button^ EditAgeButton;
	private: System::Windows::Forms::Button^ EditCountryButton;
	private: System::Windows::Forms::Button^ EditGovButton;
	private: System::Windows::Forms::Button^ EditStatusButton;
	private: System::Windows::Forms::TextBox^ NewvalueTextBox;

	private: System::Windows::Forms::Label^ NewvalueLabel;
	private: System::Windows::Forms::Button^ SubmitButton;
	private: System::Windows::Forms::Button^ EditPassButton;
	private: System::Windows::Forms::Label^ SuccessLabel;
	private: System::Windows::Forms::Label^ ErrorLabel;
	private: System::Windows::Forms::CheckBox^ MaleCheckBox;
	private: System::Windows::Forms::CheckBox^ FemaleCheckBox;
	private: System::Windows::Forms::CheckBox^ AbroadCheckBox;
	private: System::Windows::Forms::ComboBox^ OtherCountryComboBox;
	private: System::Windows::Forms::CheckBox^ EgyptCheckBox;
	private: System::Windows::Forms::ComboBox^ DoseComboBox;
	private: System::Windows::Forms::CheckBox^ ApplyCheckBox;
	private: System::Windows::Forms::CheckBox^ vaccinatedCheckBox;
	private: System::Windows::Forms::Label^ UsernameLabel;
	private: System::Windows::Forms::RichTextBox^ UserInfoRichTextBox;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ViewUserInfoButton = (gcnew System::Windows::Forms::Button());
			this->EditUserInfoButton = (gcnew System::Windows::Forms::Button());
			this->DeleteInfoButton = (gcnew System::Windows::Forms::Button());
			this->HelloUserLabel = (gcnew System::Windows::Forms::Label());
			this->EditNameButton = (gcnew System::Windows::Forms::Button());
			this->EditIDButton = (gcnew System::Windows::Forms::Button());
			this->EditGendrButton = (gcnew System::Windows::Forms::Button());
			this->EditAgeButton = (gcnew System::Windows::Forms::Button());
			this->EditCountryButton = (gcnew System::Windows::Forms::Button());
			this->EditGovButton = (gcnew System::Windows::Forms::Button());
			this->EditStatusButton = (gcnew System::Windows::Forms::Button());
			this->NewvalueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NewvalueLabel = (gcnew System::Windows::Forms::Label());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->EditPassButton = (gcnew System::Windows::Forms::Button());
			this->SuccessLabel = (gcnew System::Windows::Forms::Label());
			this->ErrorLabel = (gcnew System::Windows::Forms::Label());
			this->MaleCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->FemaleCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->AbroadCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->OtherCountryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->EgyptCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DoseComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ApplyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->vaccinatedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->UserInfoRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// ViewUserInfoButton
			// 
			this->ViewUserInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewUserInfoButton->Location = System::Drawing::Point(708, 298);
			this->ViewUserInfoButton->Name = L"ViewUserInfoButton";
			this->ViewUserInfoButton->Size = System::Drawing::Size(302, 60);
			this->ViewUserInfoButton->TabIndex = 2;
			this->ViewUserInfoButton->Text = L"View My Info";
			this->ViewUserInfoButton->UseVisualStyleBackColor = true;
			this->ViewUserInfoButton->Click += gcnew System::EventHandler(this, &UserForm::ViewUserInfoButton_Click);
			// 
			// EditUserInfoButton
			// 
			this->EditUserInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditUserInfoButton->Location = System::Drawing::Point(708, 364);
			this->EditUserInfoButton->Name = L"EditUserInfoButton";
			this->EditUserInfoButton->Size = System::Drawing::Size(302, 60);
			this->EditUserInfoButton->TabIndex = 3;
			this->EditUserInfoButton->Text = L"Edit My Info";
			this->EditUserInfoButton->UseVisualStyleBackColor = true;
			this->EditUserInfoButton->Click += gcnew System::EventHandler(this, &UserForm::EditUserInfoButton_Click);
			// 
			// DeleteInfoButton
			// 
			this->DeleteInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteInfoButton->Location = System::Drawing::Point(708, 430);
			this->DeleteInfoButton->Name = L"DeleteInfoButton";
			this->DeleteInfoButton->Size = System::Drawing::Size(302, 60);
			this->DeleteInfoButton->TabIndex = 4;
			this->DeleteInfoButton->Text = L"Delete My Info";
			this->DeleteInfoButton->UseVisualStyleBackColor = true;
			this->DeleteInfoButton->Click += gcnew System::EventHandler(this, &UserForm::DeleteInfoButton_Click);
			// 
			// HelloUserLabel
			// 
			this->HelloUserLabel->AutoSize = true;
			this->HelloUserLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelloUserLabel->Location = System::Drawing::Point(700, 2);
			this->HelloUserLabel->Name = L"HelloUserLabel";
			this->HelloUserLabel->Size = System::Drawing::Size(111, 47);
			this->HelloUserLabel->TabIndex = 11;
			this->HelloUserLabel->Text = L"Hello ";
			// 
			// EditNameButton
			// 
			this->EditNameButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditNameButton->Location = System::Drawing::Point(12, 79);
			this->EditNameButton->Name = L"EditNameButton";
			this->EditNameButton->Size = System::Drawing::Size(176, 42);
			this->EditNameButton->TabIndex = 13;
			this->EditNameButton->Text = L"Edit Name";
			this->EditNameButton->UseVisualStyleBackColor = true;
			this->EditNameButton->Click += gcnew System::EventHandler(this, &UserForm::EditNameButton_Click);
			// 
			// EditIDButton
			// 
			this->EditIDButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditIDButton->Location = System::Drawing::Point(12, 127);
			this->EditIDButton->Name = L"EditIDButton";
			this->EditIDButton->Size = System::Drawing::Size(176, 42);
			this->EditIDButton->TabIndex = 14;
			this->EditIDButton->Text = L"Edit ID";
			this->EditIDButton->UseVisualStyleBackColor = true;
			this->EditIDButton->Click += gcnew System::EventHandler(this, &UserForm::EditIDButton_Click);
			// 
			// EditGendrButton
			// 
			this->EditGendrButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditGendrButton->Location = System::Drawing::Point(12, 175);
			this->EditGendrButton->Name = L"EditGendrButton";
			this->EditGendrButton->Size = System::Drawing::Size(176, 42);
			this->EditGendrButton->TabIndex = 15;
			this->EditGendrButton->Text = L"Edit gender";
			this->EditGendrButton->UseVisualStyleBackColor = true;
			this->EditGendrButton->Click += gcnew System::EventHandler(this, &UserForm::EditGendrButton_Click);
			// 
			// EditAgeButton
			// 
			this->EditAgeButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditAgeButton->Location = System::Drawing::Point(12, 223);
			this->EditAgeButton->Name = L"EditAgeButton";
			this->EditAgeButton->Size = System::Drawing::Size(176, 42);
			this->EditAgeButton->TabIndex = 16;
			this->EditAgeButton->Text = L"Edit age";
			this->EditAgeButton->UseVisualStyleBackColor = true;
			this->EditAgeButton->Click += gcnew System::EventHandler(this, &UserForm::EditAgeButton_Click);
			// 
			// EditCountryButton
			// 
			this->EditCountryButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditCountryButton->Location = System::Drawing::Point(12, 271);
			this->EditCountryButton->Name = L"EditCountryButton";
			this->EditCountryButton->Size = System::Drawing::Size(176, 42);
			this->EditCountryButton->TabIndex = 17;
			this->EditCountryButton->Text = L"Edit country";
			this->EditCountryButton->UseVisualStyleBackColor = true;
			this->EditCountryButton->Click += gcnew System::EventHandler(this, &UserForm::EditCountryButton_Click);
			// 
			// EditGovButton
			// 
			this->EditGovButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditGovButton->Location = System::Drawing::Point(12, 319);
			this->EditGovButton->Name = L"EditGovButton";
			this->EditGovButton->Size = System::Drawing::Size(176, 42);
			this->EditGovButton->TabIndex = 18;
			this->EditGovButton->Text = L"Edit gov";
			this->EditGovButton->UseVisualStyleBackColor = true;
			this->EditGovButton->Click += gcnew System::EventHandler(this, &UserForm::EditGovButton_Click);
			// 
			// EditStatusButton
			// 
			this->EditStatusButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditStatusButton->Location = System::Drawing::Point(12, 367);
			this->EditStatusButton->Name = L"EditStatusButton";
			this->EditStatusButton->Size = System::Drawing::Size(176, 42);
			this->EditStatusButton->TabIndex = 19;
			this->EditStatusButton->Text = L"Edit status";
			this->EditStatusButton->UseVisualStyleBackColor = true;
			this->EditStatusButton->Click += gcnew System::EventHandler(this, &UserForm::EditStatusButton_Click);
			// 
			// NewvalueTextBox
			// 
			this->NewvalueTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewvalueTextBox->Location = System::Drawing::Point(1015, 72);
			this->NewvalueTextBox->Name = L"NewvalueTextBox";
			this->NewvalueTextBox->Size = System::Drawing::Size(266, 54);
			this->NewvalueTextBox->TabIndex = 20;
			// 
			// NewvalueLabel
			// 
			this->NewvalueLabel->AutoSize = true;
			this->NewvalueLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewvalueLabel->Location = System::Drawing::Point(755, 79);
			this->NewvalueLabel->Name = L"NewvalueLabel";
			this->NewvalueLabel->Size = System::Drawing::Size(199, 47);
			this->NewvalueLabel->TabIndex = 21;
			this->NewvalueLabel->Text = L"New value :";
			// 
			// SubmitButton
			// 
			this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->SubmitButton->Location = System::Drawing::Point(882, 196);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(128, 42);
			this->SubmitButton->TabIndex = 22;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &UserForm::SubmitButton_Click);
			// 
			// EditPassButton
			// 
			this->EditPassButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditPassButton->Location = System::Drawing::Point(12, 415);
			this->EditPassButton->Name = L"EditPassButton";
			this->EditPassButton->Size = System::Drawing::Size(176, 42);
			this->EditPassButton->TabIndex = 23;
			this->EditPassButton->Text = L"Edit pass";
			this->EditPassButton->UseVisualStyleBackColor = true;
			this->EditPassButton->Click += gcnew System::EventHandler(this, &UserForm::EditPassButton_Click);
			// 
			// SuccessLabel
			// 
			this->SuccessLabel->AutoSize = true;
			this->SuccessLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13));
			this->SuccessLabel->ForeColor = System::Drawing::Color::Lime;
			this->SuccessLabel->Location = System::Drawing::Point(928, 148);
			this->SuccessLabel->Name = L"SuccessLabel";
			this->SuccessLabel->Size = System::Drawing::Size(0, 30);
			this->SuccessLabel->TabIndex = 24;
			// 
			// ErrorLabel
			// 
			this->ErrorLabel->AutoSize = true;
			this->ErrorLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13));
			this->ErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->ErrorLabel->Location = System::Drawing::Point(954, 148);
			this->ErrorLabel->Name = L"ErrorLabel";
			this->ErrorLabel->Size = System::Drawing::Size(0, 30);
			this->ErrorLabel->TabIndex = 25;
			// 
			// MaleCheckBox
			// 
			this->MaleCheckBox->AutoSize = true;
			this->MaleCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MaleCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->MaleCheckBox->ForeColor = System::Drawing::Color::Black;
			this->MaleCheckBox->Location = System::Drawing::Point(1003, 90);
			this->MaleCheckBox->Name = L"MaleCheckBox";
			this->MaleCheckBox->Size = System::Drawing::Size(90, 36);
			this->MaleCheckBox->TabIndex = 26;
			this->MaleCheckBox->Text = L"Male";
			this->MaleCheckBox->UseVisualStyleBackColor = true;
			this->MaleCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::MaleCheckBox_CheckedChanged);
			// 
			// FemaleCheckBox
			// 
			this->FemaleCheckBox->AutoSize = true;
			this->FemaleCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FemaleCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->FemaleCheckBox->ForeColor = System::Drawing::Color::Black;
			this->FemaleCheckBox->Location = System::Drawing::Point(1145, 90);
			this->FemaleCheckBox->Name = L"FemaleCheckBox";
			this->FemaleCheckBox->Size = System::Drawing::Size(114, 36);
			this->FemaleCheckBox->TabIndex = 27;
			this->FemaleCheckBox->Text = L"Female";
			this->FemaleCheckBox->UseVisualStyleBackColor = true;
			this->FemaleCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::FemaleCheckBox_CheckedChanged);
			// 
			// AbroadCheckBox
			// 
			this->AbroadCheckBox->AutoSize = true;
			this->AbroadCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AbroadCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->AbroadCheckBox->ForeColor = System::Drawing::Color::Black;
			this->AbroadCheckBox->Location = System::Drawing::Point(1151, 90);
			this->AbroadCheckBox->Name = L"AbroadCheckBox";
			this->AbroadCheckBox->Size = System::Drawing::Size(114, 36);
			this->AbroadCheckBox->TabIndex = 33;
			this->AbroadCheckBox->Text = L"Abroad";
			this->AbroadCheckBox->UseVisualStyleBackColor = true;
			this->AbroadCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::AbroadCheckBox_CheckedChanged);
			// 
			// OtherCountryComboBox
			// 
			this->OtherCountryComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->OtherCountryComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OtherCountryComboBox->FormattingEnabled = true;
			this->OtherCountryComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(189) {
				L"Afghanistan", L"Albania", L"Algeria",
					L"Andorra", L"Angola", L"Antigua ", L"Argentina", L"Armenia", L"Australia", L"Austria", L"Azerbaijan", L"Bahamas", L"Bahrain",
					L"Bangladesh", L"Barbados", L"Belarus", L"Belgium", L"Belize", L"Benin", L"Bhutan", L"Bolivia", L"Botswana", L"Brazil", L"Brunei",
					L"Bulgaria", L"Burkina", L"Burundi", L"Cambodia", L"Cameroon", L"Canada", L"Cape Verde", L"Central African", L"Chad", L"Chile",
					L"China", L"Colombia", L"Comoros", L"Congo", L"Congo D.R", L"Costa Rica", L"Croatia", L"Cuba", L"Cyprus", L"Czech R", L"Denmark",
					L"Djibouti", L"Dominica", L"Dominican R", L"East Timor", L"Ecuador", L"El Salvador", L"Guinea", L"Eritrea", L"Estonia", L"Ethiopia",
					L"Fiji", L"Finland", L"France", L"Gabon", L"Gambia", L"Georgia", L"Germany", L"Ghana", L"Greece", L"Grenada", L"Guatemala", L"Guinea",
					L"Guinea-Bissau", L"Guyana", L"Haiti", L"Honduras", L"Hungary", L"Iceland", L"India", L"Indonesia", L"Iran", L"Iraq", L"Ireland R",
					L"Israel", L"Italy", L"Ivory Coast", L"Jamaica", L"Japan", L"Jordan", L"Kazakhstan", L"Kenya", L"Kiribati", L"Korea North", L"Korea South",
					L"Kosovo", L"Kuwait", L"Kyrgyzstan", L"Laos", L"Latvia", L"Lebanon", L"Lesotho", L"Liberia", L"Libya", L"Lithuania", L"Luxembourg",
					L"Macedonia", L"Madagascar", L"Malawi", L"Malaysia", L"Maldives", L"Mali", L"Malta", L"Mauritania", L"Mauritius", L"Mexico",
					L"Micronesia", L"Moldova", L"Monaco", L"Mongolia", L"Montenegro", L"Morocco", L"Mozambique", L"Myanmar", L"Namibia", L"Nauru",
					L"Nepal", L"Netherlands", L"New Zealand", L"Nicaragua", L"Niger", L"Nigeria", L"Norway", L"Oman", L"Pakistan", L"Palau", L"Panama",
					L"Paraguay", L"Peru", L"Philippines", L"Poland", L"Portugal", L"Qatar", L"Romania", L"Russia", L"Rwanda", L"St Lucia", L"Saint Vincent",
					L"Samoa", L"San Marino", L"Sao Tome", L"Saudi Arabia", L"Senegal", L"Serbia", L"Seychelles", L"Sierra Leone", L"Singapore", L"Slovakia",
					L"Slovenia", L"Somalia", L"South Africa", L"South Sudan", L"Spain", L"Sri Lanka", L"Sudan", L"Suriname", L"Swaziland", L"Sweden",
					L"Switzerland", L"Syria", L"Taiwan", L"Tajikistan", L"Tanzania", L"Thailand", L"Togo", L"Tonga", L"Tunisia", L"Turkey", L"Turkmenistan",
					L"Tuvalu", L"Uganda", L"Ukraine", L"U.A.Emirates", L"United Kingdom", L"United States", L"Uruguay", L"Uzbekistan", L"Vanuatu",
					L"Vatican City", L"Venezuela", L"Vietnam", L"Yemen", L"Zambia", L"Zimbabwe", L"OtherCountry"
			});
			this->OtherCountryComboBox->Location = System::Drawing::Point(1186, 133);
			this->OtherCountryComboBox->Name = L"OtherCountryComboBox";
			this->OtherCountryComboBox->Size = System::Drawing::Size(248, 37);
			this->OtherCountryComboBox->TabIndex = 32;
			// 
			// EgyptCheckBox
			// 
			this->EgyptCheckBox->AutoSize = true;
			this->EgyptCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EgyptCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->EgyptCheckBox->ForeColor = System::Drawing::Color::Black;
			this->EgyptCheckBox->Location = System::Drawing::Point(1015, 90);
			this->EgyptCheckBox->Name = L"EgyptCheckBox";
			this->EgyptCheckBox->Size = System::Drawing::Size(97, 36);
			this->EgyptCheckBox->TabIndex = 31;
			this->EgyptCheckBox->Text = L"Egypt";
			this->EgyptCheckBox->UseVisualStyleBackColor = true;
			this->EgyptCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::EgyptCheckBox_CheckedChanged);
			// 
			// DoseComboBox
			// 
			this->DoseComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DoseComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DoseComboBox->FormattingEnabled = true;
			this->DoseComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"only first dose", L"both doses" });
			this->DoseComboBox->Location = System::Drawing::Point(1228, 133);
			this->DoseComboBox->Name = L"DoseComboBox";
			this->DoseComboBox->Size = System::Drawing::Size(206, 37);
			this->DoseComboBox->TabIndex = 36;
			// 
			// ApplyCheckBox
			// 
			this->ApplyCheckBox->AutoSize = true;
			this->ApplyCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ApplyCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->ApplyCheckBox->ForeColor = System::Drawing::Color::Black;
			this->ApplyCheckBox->Location = System::Drawing::Point(1186, 90);
			this->ApplyCheckBox->Name = L"ApplyCheckBox";
			this->ApplyCheckBox->Size = System::Drawing::Size(307, 39);
			this->ApplyCheckBox->TabIndex = 35;
			this->ApplyCheckBox->Text = L"Applying for vaccination";
			this->ApplyCheckBox->UseVisualStyleBackColor = true;
			this->ApplyCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::ApplyCheckBox_CheckedChanged);
			// 
			// vaccinatedCheckBox
			// 
			this->vaccinatedCheckBox->AutoSize = true;
			this->vaccinatedCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vaccinatedCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->vaccinatedCheckBox->ForeColor = System::Drawing::Color::Black;
			this->vaccinatedCheckBox->Location = System::Drawing::Point(1003, 90);
			this->vaccinatedCheckBox->Name = L"vaccinatedCheckBox";
			this->vaccinatedCheckBox->Size = System::Drawing::Size(157, 39);
			this->vaccinatedCheckBox->TabIndex = 34;
			this->vaccinatedCheckBox->Text = L"Vaccinated";
			this->vaccinatedCheckBox->UseVisualStyleBackColor = true;
			this->vaccinatedCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::vaccinatedCheckBox_CheckedChanged);
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameLabel->Location = System::Drawing::Point(800, 2);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(44, 47);
			this->UsernameLabel->TabIndex = 37;
			this->UsernameLabel->Text = L"...";
			// 
			// UserInfoRichTextBox
			// 
			this->UserInfoRichTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->UserInfoRichTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.5F));
			this->UserInfoRichTextBox->ForeColor = System::Drawing::SystemColors::MenuText;
			this->UserInfoRichTextBox->Location = System::Drawing::Point(194, 79);
			this->UserInfoRichTextBox->Margin = System::Windows::Forms::Padding(1);
			this->UserInfoRichTextBox->Name = L"UserInfoRichTextBox";
			this->UserInfoRichTextBox->Size = System::Drawing::Size(508, 378);
			this->UserInfoRichTextBox->TabIndex = 38;
			this->UserInfoRichTextBox->Text = L"";
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1448, 743);
			this->Controls->Add(this->UserInfoRichTextBox);
			this->Controls->Add(this->UsernameLabel);
			this->Controls->Add(this->DoseComboBox);
			this->Controls->Add(this->ApplyCheckBox);
			this->Controls->Add(this->vaccinatedCheckBox);
			this->Controls->Add(this->AbroadCheckBox);
			this->Controls->Add(this->OtherCountryComboBox);
			this->Controls->Add(this->EgyptCheckBox);
			this->Controls->Add(this->MaleCheckBox);
			this->Controls->Add(this->FemaleCheckBox);
			this->Controls->Add(this->ErrorLabel);
			this->Controls->Add(this->SuccessLabel);
			this->Controls->Add(this->EditPassButton);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->NewvalueLabel);
			this->Controls->Add(this->NewvalueTextBox);
			this->Controls->Add(this->EditStatusButton);
			this->Controls->Add(this->EditGovButton);
			this->Controls->Add(this->EditCountryButton);
			this->Controls->Add(this->EditAgeButton);
			this->Controls->Add(this->EditGendrButton);
			this->Controls->Add(this->EditIDButton);
			this->Controls->Add(this->EditNameButton);
			this->Controls->Add(this->HelloUserLabel);
			this->Controls->Add(this->DeleteInfoButton);
			this->Controls->Add(this->EditUserInfoButton);
			this->Controls->Add(this->ViewUserInfoButton);
			this->Name = L"UserForm";
			this->Text = L"User";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e);

		System::Void ViewUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditNameButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditIDButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditGendrButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditAgeButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditCountryButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditGovButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditStatusButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void EditPassButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e);

		System::Void MaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

		System::Void FemaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

		System::Void AbroadCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

		System::Void EgyptCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

		System::Void vaccinatedCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

		System::Void ApplyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	};
}
