#pragma once
#include<string>
#include "User.h"
#include <msclr/marshal_cppstd.h>
namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for reg
	/// </summary>
	public ref class reg : public System::Windows::Forms::Form
	{
	public:
		reg(void)
		{
			InitializeComponent();
			PasswordTextBox->PasswordChar = '*';
			OtherCountryComboBox->Hide();
			DoseComboBox->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~reg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ RegisterButton;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NameTextBox;
	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ NatIDTextBox;
	private: System::Windows::Forms::Button^ UnseeButton;
	private: System::Windows::Forms::Label^ GenderLabel;
	private: System::Windows::Forms::CheckBox^ MaleCheckBox;
	private: System::Windows::Forms::CheckBox^ FemaleCheckBox;
	private: System::Windows::Forms::ComboBox^ DoseComboBox;
	private: System::Windows::Forms::Label^ AgeLabel;
	private: System::Windows::Forms::TextBox^ AgeTextBox;
	private: System::Windows::Forms::Label^ CountryLabel;
	private: System::Windows::Forms::CheckBox^ EgyptCheckBox;
	private: System::Windows::Forms::ComboBox^ OtherCountryComboBox;
	private: System::Windows::Forms::CheckBox^ AbroadCheckBox;
	private: System::Windows::Forms::Label^ GovernorateLabel;

	private: System::Windows::Forms::Label^ StatusLabel;
	private: System::Windows::Forms::CheckBox^ vaccinatedCheckBox;
	private: System::Windows::Forms::CheckBox^ ApplyCheckBox;
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ GovernorateComboBox;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(reg::typeid));
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NatIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->UnseeButton = (gcnew System::Windows::Forms::Button());
			this->GenderLabel = (gcnew System::Windows::Forms::Label());
			this->MaleCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->FemaleCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DoseComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AgeLabel = (gcnew System::Windows::Forms::Label());
			this->AgeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CountryLabel = (gcnew System::Windows::Forms::Label());
			this->EgyptCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->OtherCountryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AbroadCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->GovernorateLabel = (gcnew System::Windows::Forms::Label());
			this->StatusLabel = (gcnew System::Windows::Forms::Label());
			this->vaccinatedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->ApplyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->GovernorateComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->RegisterButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RegisterButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterButton->ForeColor = System::Drawing::Color::White;
			this->RegisterButton->Location = System::Drawing::Point(185, 753);
			this->RegisterButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(432, 41);
			this->RegisterButton->TabIndex = 6;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->RegisterButton->Click += gcnew System::EventHandler(this, &reg::RegisterButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(49, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 38);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Full Name :";
			this->label1->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(60, 290);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 38);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Password :";
			this->label2->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->label2->Click += gcnew System::EventHandler(this, &reg::label2_Click);
			// 
			// NameTextBox
			// 
			this->NameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTextBox->ForeColor = System::Drawing::Color::White;
			this->NameTextBox->Location = System::Drawing::Point(263, 124);
			this->NameTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(401, 54);
			this->NameTextBox->TabIndex = 9;
			this->NameTextBox->Click += gcnew System::EventHandler(this, &reg::NameTextBox_Click);
			this->NameTextBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->NameTextBox->TextChanged += gcnew System::EventHandler(this, &reg::NameTextBox_TextChanged);
			this->NameTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::NameTextBox_KeyDown);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->ForeColor = System::Drawing::Color::White;
			this->PasswordTextBox->Location = System::Drawing::Point(263, 281);
			this->PasswordTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(401, 54);
			this->PasswordTextBox->TabIndex = 10;
			this->PasswordTextBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->PasswordTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::PasswordTextBox_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(36, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 38);
			this->label3->TabIndex = 11;
			this->label3->Text = L"National ID :";
			this->label3->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->label3->Click += gcnew System::EventHandler(this, &reg::label3_Click);
			// 
			// NatIDTextBox
			// 
			this->NatIDTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->NatIDTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NatIDTextBox->ForeColor = System::Drawing::Color::White;
			this->NatIDTextBox->Location = System::Drawing::Point(263, 203);
			this->NatIDTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NatIDTextBox->Name = L"NatIDTextBox";
			this->NatIDTextBox->Size = System::Drawing::Size(401, 54);
			this->NatIDTextBox->TabIndex = 12;
			this->NatIDTextBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->NatIDTextBox->TextChanged += gcnew System::EventHandler(this, &reg::NatIDTextBox_TextChanged);
			this->NatIDTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::NatIDTextBox_KeyDown);
			// 
			// UnseeButton
			// 
			this->UnseeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UnseeButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->UnseeButton->FlatAppearance->BorderSize = 0;
			this->UnseeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->UnseeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->UnseeButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UnseeButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->UnseeButton->Location = System::Drawing::Point(671, 281);
			this->UnseeButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->UnseeButton->Name = L"UnseeButton";
			this->UnseeButton->Size = System::Drawing::Size(76, 54);
			this->UnseeButton->TabIndex = 13;
			this->UnseeButton->Text = L"👁";
			this->UnseeButton->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->UnseeButton->UseVisualStyleBackColor = false;
			this->UnseeButton->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->UnseeButton->Click += gcnew System::EventHandler(this, &reg::UnseeButton_Click);
			// 
			// GenderLabel
			// 
			this->GenderLabel->AutoSize = true;
			this->GenderLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->GenderLabel->ForeColor = System::Drawing::Color::White;
			this->GenderLabel->Location = System::Drawing::Point(84, 370);
			this->GenderLabel->Name = L"GenderLabel";
			this->GenderLabel->Size = System::Drawing::Size(122, 38);
			this->GenderLabel->TabIndex = 17;
			this->GenderLabel->Text = L"Gender :";
			this->GenderLabel->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->GenderLabel->Click += gcnew System::EventHandler(this, &reg::GenderLabel_Click);
			// 
			// MaleCheckBox
			// 
			this->MaleCheckBox->AutoSize = true;
			this->MaleCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MaleCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->MaleCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->MaleCheckBox->Location = System::Drawing::Point(263, 374);
			this->MaleCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaleCheckBox->Name = L"MaleCheckBox";
			this->MaleCheckBox->Size = System::Drawing::Size(90, 36);
			this->MaleCheckBox->TabIndex = 15;
			this->MaleCheckBox->Text = L"Male";
			this->MaleCheckBox->UseVisualStyleBackColor = true;
			this->MaleCheckBox->CheckedChanged += gcnew System::EventHandler(this, &reg::MaleCheckBox_CheckedChanged);
			this->MaleCheckBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// FemaleCheckBox
			// 
			this->FemaleCheckBox->AutoSize = true;
			this->FemaleCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FemaleCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->FemaleCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->FemaleCheckBox->Location = System::Drawing::Point(405, 374);
			this->FemaleCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->FemaleCheckBox->Name = L"FemaleCheckBox";
			this->FemaleCheckBox->Size = System::Drawing::Size(114, 36);
			this->FemaleCheckBox->TabIndex = 16;
			this->FemaleCheckBox->Text = L"Female";
			this->FemaleCheckBox->UseVisualStyleBackColor = true;
			this->FemaleCheckBox->CheckedChanged += gcnew System::EventHandler(this, &reg::FemaleCheckBox_CheckedChanged);
			this->FemaleCheckBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// DoseComboBox
			// 
			this->DoseComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->DoseComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DoseComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DoseComboBox->ForeColor = System::Drawing::Color::White;
			this->DoseComboBox->FormattingEnabled = true;
			this->DoseComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"only first dose", L"both doses" });
			this->DoseComboBox->Location = System::Drawing::Point(540, 699);
			this->DoseComboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DoseComboBox->Name = L"DoseComboBox";
			this->DoseComboBox->Size = System::Drawing::Size(207, 37);
			this->DoseComboBox->TabIndex = 29;
			this->DoseComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &reg::DoseComboBox_SelectedIndexChanged);
			this->DoseComboBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// AgeLabel
			// 
			this->AgeLabel->AutoSize = true;
			this->AgeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->AgeLabel->ForeColor = System::Drawing::Color::White;
			this->AgeLabel->Location = System::Drawing::Point(125, 447);
			this->AgeLabel->Name = L"AgeLabel";
			this->AgeLabel->Size = System::Drawing::Size(80, 38);
			this->AgeLabel->TabIndex = 18;
			this->AgeLabel->Text = L"Age :";
			this->AgeLabel->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// AgeTextBox
			// 
			this->AgeTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->AgeTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AgeTextBox->ForeColor = System::Drawing::Color::White;
			this->AgeTextBox->Location = System::Drawing::Point(263, 438);
			this->AgeTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AgeTextBox->Name = L"AgeTextBox";
			this->AgeTextBox->Size = System::Drawing::Size(149, 52);
			this->AgeTextBox->TabIndex = 19;
			this->AgeTextBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->AgeTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::AgeTextBox_KeyDown);
			// 
			// CountryLabel
			// 
			this->CountryLabel->AutoSize = true;
			this->CountryLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->CountryLabel->ForeColor = System::Drawing::Color::White;
			this->CountryLabel->Location = System::Drawing::Point(77, 521);
			this->CountryLabel->Name = L"CountryLabel";
			this->CountryLabel->Size = System::Drawing::Size(129, 38);
			this->CountryLabel->TabIndex = 20;
			this->CountryLabel->Text = L"Country :";
			this->CountryLabel->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// EgyptCheckBox
			// 
			this->EgyptCheckBox->AutoSize = true;
			this->EgyptCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EgyptCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->EgyptCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->EgyptCheckBox->Location = System::Drawing::Point(263, 524);
			this->EgyptCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->EgyptCheckBox->Name = L"EgyptCheckBox";
			this->EgyptCheckBox->Size = System::Drawing::Size(97, 36);
			this->EgyptCheckBox->TabIndex = 21;
			this->EgyptCheckBox->Text = L"Egypt";
			this->EgyptCheckBox->UseVisualStyleBackColor = true;
			this->EgyptCheckBox->CheckedChanged += gcnew System::EventHandler(this, &reg::EgyptCheckBox_CheckedChanged);
			this->EgyptCheckBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// OtherCountryComboBox
			// 
			this->OtherCountryComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->OtherCountryComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->OtherCountryComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OtherCountryComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
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
			this->OtherCountryComboBox->Location = System::Drawing::Point(555, 527);
			this->OtherCountryComboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->OtherCountryComboBox->Name = L"OtherCountryComboBox";
			this->OtherCountryComboBox->Size = System::Drawing::Size(248, 37);
			this->OtherCountryComboBox->TabIndex = 22;
			this->OtherCountryComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &reg::OtherCountryComboBox_SelectedIndexChanged);
			this->OtherCountryComboBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// AbroadCheckBox
			// 
			this->AbroadCheckBox->AutoSize = true;
			this->AbroadCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AbroadCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->AbroadCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->AbroadCheckBox->Location = System::Drawing::Point(405, 524);
			this->AbroadCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AbroadCheckBox->Name = L"AbroadCheckBox";
			this->AbroadCheckBox->Size = System::Drawing::Size(114, 36);
			this->AbroadCheckBox->TabIndex = 23;
			this->AbroadCheckBox->Text = L"Abroad";
			this->AbroadCheckBox->UseVisualStyleBackColor = true;
			this->AbroadCheckBox->CheckedChanged += gcnew System::EventHandler(this, &reg::AbroadCheckBox_CheckedChanged);
			this->AbroadCheckBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// GovernorateLabel
			// 
			this->GovernorateLabel->AutoSize = true;
			this->GovernorateLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->GovernorateLabel->ForeColor = System::Drawing::Color::White;
			this->GovernorateLabel->Location = System::Drawing::Point(21, 590);
			this->GovernorateLabel->Name = L"GovernorateLabel";
			this->GovernorateLabel->Size = System::Drawing::Size(184, 38);
			this->GovernorateLabel->TabIndex = 24;
			this->GovernorateLabel->Text = L"Governorate :";
			this->GovernorateLabel->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			this->GovernorateLabel->Click += gcnew System::EventHandler(this, &reg::GovernorateLabel_Click);
			// 
			// StatusLabel
			// 
			this->StatusLabel->AutoSize = true;
			this->StatusLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->StatusLabel->ForeColor = System::Drawing::Color::White;
			this->StatusLabel->Location = System::Drawing::Point(101, 657);
			this->StatusLabel->Name = L"StatusLabel";
			this->StatusLabel->Size = System::Drawing::Size(105, 38);
			this->StatusLabel->TabIndex = 26;
			this->StatusLabel->Text = L"Status :";
			this->StatusLabel->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// vaccinatedCheckBox
			// 
			this->vaccinatedCheckBox->AutoSize = true;
			this->vaccinatedCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->vaccinatedCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->vaccinatedCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->vaccinatedCheckBox->Location = System::Drawing::Point(263, 656);
			this->vaccinatedCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->vaccinatedCheckBox->Name = L"vaccinatedCheckBox";
			this->vaccinatedCheckBox->Size = System::Drawing::Size(157, 39);
			this->vaccinatedCheckBox->TabIndex = 27;
			this->vaccinatedCheckBox->Text = L"Vaccinated";
			this->vaccinatedCheckBox->UseVisualStyleBackColor = true;
			this->vaccinatedCheckBox->CheckedChanged += gcnew System::EventHandler(this, &reg::vaccinatedCheckBox_CheckedChanged);
			this->vaccinatedCheckBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// ApplyCheckBox
			// 
			this->ApplyCheckBox->AutoSize = true;
			this->ApplyCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ApplyCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->ApplyCheckBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->ApplyCheckBox->Location = System::Drawing::Point(440, 656);
			this->ApplyCheckBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ApplyCheckBox->Name = L"ApplyCheckBox";
			this->ApplyCheckBox->Size = System::Drawing::Size(307, 39);
			this->ApplyCheckBox->TabIndex = 28;
			this->ApplyCheckBox->Text = L"Applying for vaccination";
			this->ApplyCheckBox->UseVisualStyleBackColor = true;
			this->ApplyCheckBox->CheckedChanged += gcnew System::EventHandler(this, &reg::ApplyCheckBox_CheckedChanged);
			this->ApplyCheckBox->BackColorChanged += gcnew System::EventHandler(this, &reg::label1_BackColorChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->GovernorateComboBox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->PasswordTextBox);
			this->panel1->Controls->Add(this->DoseComboBox);
			this->panel1->Controls->Add(this->RegisterButton);
			this->panel1->Controls->Add(this->ApplyCheckBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->vaccinatedCheckBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->StatusLabel);
			this->panel1->Controls->Add(this->NameTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->GovernorateLabel);
			this->panel1->Controls->Add(this->NatIDTextBox);
			this->panel1->Controls->Add(this->AbroadCheckBox);
			this->panel1->Controls->Add(this->UnseeButton);
			this->panel1->Controls->Add(this->OtherCountryComboBox);
			this->panel1->Controls->Add(this->MaleCheckBox);
			this->panel1->Controls->Add(this->EgyptCheckBox);
			this->panel1->Controls->Add(this->FemaleCheckBox);
			this->panel1->Controls->Add(this->CountryLabel);
			this->panel1->Controls->Add(this->GenderLabel);
			this->panel1->Controls->Add(this->AgeTextBox);
			this->panel1->Controls->Add(this->AgeLabel);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(862, 876);
			this->panel1->TabIndex = 30;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &reg::panel1_Paint);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->label7->Location = System::Drawing::Point(-7, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(697, 42);
			this->label7->TabIndex = 35;
			this->label7->Text = L"   Please, enter your info and fill all fields";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Eras Bold ITC", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->label6->Location = System::Drawing::Point(12, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(697, 41);
			this->label6->TabIndex = 34;
			this->label6->Text = L"___________________________________";
			// 
			// GovernorateComboBox
			// 
			this->GovernorateComboBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->GovernorateComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->GovernorateComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GovernorateComboBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->GovernorateComboBox->FormattingEnabled = true;
			this->GovernorateComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"Alexandria", L"Aswan", L"Assiut", L"Beheira",
					L"Beni Suef", L"Cairo", L"Dakahlia", L"Damietta", L"Fayoum", L"Gharbia", L"Giza", L"Ismailia", L"Kafr el-Sheikh", L"Matrouh",
					L"Minya", L"Menofia", L"New Valley", L"North Sinai", L"Port Said", L"Qualyubia", L"Qena", L"Red Sea", L"Al-Sharqia", L"Sohag",
					L"South Sinai", L"Suez", L"Luxor"
			});
			this->GovernorateComboBox->Location = System::Drawing::Point(241, 593);
			this->GovernorateComboBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->GovernorateComboBox->Name = L"GovernorateComboBox";
			this->GovernorateComboBox->Size = System::Drawing::Size(207, 37);
			this->GovernorateComboBox->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
			this->label4->ForeColor = System::Drawing::Color::OrangeRed;
			this->label4->Location = System::Drawing::Point(189, 796);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 38);
			this->label4->TabIndex = 30;
			this->label4->Click += gcnew System::EventHandler(this, &reg::label4_Click_1);
			// 
			// reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(854, 843);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(2000, 600);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(872, 890);
			this->MinimumSize = System::Drawing::Size(872, 890);
			this->Name = L"reg";
			this->Text = L"Registeration";
			this->Load += gcnew System::EventHandler(this, &reg::reg_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &reg::reg_KeyDown);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void RegisterButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void UnseeButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void reg_Load(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GenderLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void FemaleCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void AbroadCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void OtherCountryComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EgyptCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void GovernorateLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GovernorateTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vaccinatedCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void DoseComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NatIDTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ApplyCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label1_BackColorChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NameTextBox_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NameTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void NatIDTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void PasswordTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void AgeTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void GovernorateTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void reg_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
