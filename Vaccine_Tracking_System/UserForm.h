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
			GovernorateComboBox->Hide();
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

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

	private: System::Windows::Forms::Label^ ErrorLabel;
	private: System::Windows::Forms::CheckBox^ MaleCheckBox;
	private: System::Windows::Forms::CheckBox^ FemaleCheckBox;
	private: System::Windows::Forms::CheckBox^ AbroadCheckBox;
	private: System::Windows::Forms::ComboBox^ OtherCountryComboBox;
	private: System::Windows::Forms::CheckBox^ EgyptCheckBox;
	private: System::Windows::Forms::ComboBox^ DoseComboBox;
	private: System::Windows::Forms::CheckBox^ ApplyCheckBox;
	private: System::Windows::Forms::CheckBox^ vaccinatedCheckBox;

	private: System::Windows::Forms::RichTextBox^ UserInfoRichTextBox;



	private: System::Windows::Forms::Label^ UsernameLabel;


	private: System::Windows::Forms::ComboBox^ GovernorateComboBox;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
			this->ViewUserInfoButton = (gcnew System::Windows::Forms::Button());
			this->EditUserInfoButton = (gcnew System::Windows::Forms::Button());
			this->DeleteInfoButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ErrorLabel = (gcnew System::Windows::Forms::Label());
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
			this->MaleCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->FemaleCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->AbroadCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->OtherCountryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->EgyptCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DoseComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ApplyCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->vaccinatedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->UserInfoRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->GovernorateComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// ViewUserInfoButton
			// 
			this->ViewUserInfoButton->BackColor = System::Drawing::Color::Transparent;
			this->ViewUserInfoButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ViewUserInfoButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewUserInfoButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewUserInfoButton->ForeColor = System::Drawing::Color::Black;
			this->ViewUserInfoButton->Location = System::Drawing::Point(22, 343);
			this->ViewUserInfoButton->Name = L"ViewUserInfoButton";
			this->ViewUserInfoButton->Size = System::Drawing::Size(261, 64);
			this->ViewUserInfoButton->TabIndex = 2;
			this->ViewUserInfoButton->Text = L"View My Info";
			this->ViewUserInfoButton->UseVisualStyleBackColor = false;
			this->ViewUserInfoButton->Click += gcnew System::EventHandler(this, &UserForm::ViewUserInfoButton_Click);
			// 
			// EditUserInfoButton
			// 
			this->EditUserInfoButton->BackColor = System::Drawing::Color::Transparent;
			this->EditUserInfoButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditUserInfoButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EditUserInfoButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditUserInfoButton->ForeColor = System::Drawing::Color::Black;
			this->EditUserInfoButton->Location = System::Drawing::Point(22, 456);
			this->EditUserInfoButton->Name = L"EditUserInfoButton";
			this->EditUserInfoButton->Size = System::Drawing::Size(261, 68);
			this->EditUserInfoButton->TabIndex = 3;
			this->EditUserInfoButton->Text = L"Edit My Info";
			this->EditUserInfoButton->UseVisualStyleBackColor = false;
			this->EditUserInfoButton->Click += gcnew System::EventHandler(this, &UserForm::EditUserInfoButton_Click);
			// 
			// DeleteInfoButton
			// 
			this->DeleteInfoButton->BackColor = System::Drawing::Color::Transparent;
			this->DeleteInfoButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteInfoButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DeleteInfoButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteInfoButton->ForeColor = System::Drawing::Color::Black;
			this->DeleteInfoButton->Location = System::Drawing::Point(22, 573);
			this->DeleteInfoButton->Name = L"DeleteInfoButton";
			this->DeleteInfoButton->Size = System::Drawing::Size(261, 64);
			this->DeleteInfoButton->TabIndex = 4;
			this->DeleteInfoButton->Text = L"Delete All My Info";
			this->DeleteInfoButton->UseVisualStyleBackColor = false;
			this->DeleteInfoButton->Click += gcnew System::EventHandler(this, &UserForm::DeleteInfoButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Navy;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(1, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(659, 590);
			this->panel1->TabIndex = 13;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(656, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(792, 587);
			this->panel3->TabIndex = 14;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(92, 201);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1080, 357);
			this->panel2->TabIndex = 1;
			// 
			// ErrorLabel
			// 
			this->ErrorLabel->AutoSize = true;
			this->ErrorLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 13));
			this->ErrorLabel->ForeColor = System::Drawing::Color::Red;
			this->ErrorLabel->Location = System::Drawing::Point(1110, 529);
			this->ErrorLabel->Name = L"ErrorLabel";
			this->ErrorLabel->Size = System::Drawing::Size(0, 30);
			this->ErrorLabel->TabIndex = 25;
			// 
			// EditNameButton
			// 
			this->EditNameButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditNameButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditNameButton->Location = System::Drawing::Point(379, 165);
			this->EditNameButton->Name = L"EditNameButton";
			this->EditNameButton->Size = System::Drawing::Size(108, 49);
			this->EditNameButton->TabIndex = 13;
			this->EditNameButton->Text = L"Edit name";
			this->EditNameButton->UseVisualStyleBackColor = false;
			this->EditNameButton->Click += gcnew System::EventHandler(this, &UserForm::EditNameButton_Click);
			// 
			// EditIDButton
			// 
			this->EditIDButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditIDButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditIDButton->Location = System::Drawing::Point(379, 220);
			this->EditIDButton->Name = L"EditIDButton";
			this->EditIDButton->Size = System::Drawing::Size(108, 40);
			this->EditIDButton->TabIndex = 14;
			this->EditIDButton->Text = L"Edit ID";
			this->EditIDButton->UseVisualStyleBackColor = false;
			this->EditIDButton->Click += gcnew System::EventHandler(this, &UserForm::EditIDButton_Click);
			// 
			// EditGendrButton
			// 
			this->EditGendrButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditGendrButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditGendrButton->Location = System::Drawing::Point(379, 266);
			this->EditGendrButton->Name = L"EditGendrButton";
			this->EditGendrButton->Size = System::Drawing::Size(108, 39);
			this->EditGendrButton->TabIndex = 15;
			this->EditGendrButton->Text = L"Edit gender";
			this->EditGendrButton->UseVisualStyleBackColor = false;
			this->EditGendrButton->Click += gcnew System::EventHandler(this, &UserForm::EditGendrButton_Click);
			// 
			// EditAgeButton
			// 
			this->EditAgeButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditAgeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditAgeButton->Location = System::Drawing::Point(379, 311);
			this->EditAgeButton->Name = L"EditAgeButton";
			this->EditAgeButton->Size = System::Drawing::Size(108, 36);
			this->EditAgeButton->TabIndex = 16;
			this->EditAgeButton->Text = L"Edit age";
			this->EditAgeButton->UseVisualStyleBackColor = false;
			this->EditAgeButton->Click += gcnew System::EventHandler(this, &UserForm::EditAgeButton_Click);
			// 
			// EditCountryButton
			// 
			this->EditCountryButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditCountryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditCountryButton->Location = System::Drawing::Point(379, 353);
			this->EditCountryButton->Name = L"EditCountryButton";
			this->EditCountryButton->Size = System::Drawing::Size(108, 39);
			this->EditCountryButton->TabIndex = 17;
			this->EditCountryButton->Text = L"Edit country";
			this->EditCountryButton->UseVisualStyleBackColor = false;
			this->EditCountryButton->Click += gcnew System::EventHandler(this, &UserForm::EditCountryButton_Click);
			// 
			// EditGovButton
			// 
			this->EditGovButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditGovButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditGovButton->Location = System::Drawing::Point(379, 398);
			this->EditGovButton->Name = L"EditGovButton";
			this->EditGovButton->Size = System::Drawing::Size(108, 39);
			this->EditGovButton->TabIndex = 18;
			this->EditGovButton->Text = L"Edit gov";
			this->EditGovButton->UseVisualStyleBackColor = false;
			this->EditGovButton->Click += gcnew System::EventHandler(this, &UserForm::EditGovButton_Click);
			// 
			// EditStatusButton
			// 
			this->EditStatusButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditStatusButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditStatusButton->Location = System::Drawing::Point(379, 443);
			this->EditStatusButton->Name = L"EditStatusButton";
			this->EditStatusButton->Size = System::Drawing::Size(108, 40);
			this->EditStatusButton->TabIndex = 19;
			this->EditStatusButton->Text = L"Edit status";
			this->EditStatusButton->UseVisualStyleBackColor = false;
			this->EditStatusButton->Click += gcnew System::EventHandler(this, &UserForm::EditStatusButton_Click);
			// 
			// NewvalueTextBox
			// 
			this->NewvalueTextBox->BackColor = System::Drawing::Color::Azure;
			this->NewvalueTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewvalueTextBox->ForeColor = System::Drawing::Color::Black;
			this->NewvalueTextBox->Location = System::Drawing::Point(1086, 266);
			this->NewvalueTextBox->Name = L"NewvalueTextBox";
			this->NewvalueTextBox->Size = System::Drawing::Size(300, 54);
			this->NewvalueTextBox->TabIndex = 20;
			this->NewvalueTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &UserForm::NewvalueTextBox_KeyDown);
			// 
			// NewvalueLabel
			// 
			this->NewvalueLabel->AutoSize = true;
			this->NewvalueLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewvalueLabel->ForeColor = System::Drawing::Color::LightCyan;
			this->NewvalueLabel->Location = System::Drawing::Point(1016, 183);
			this->NewvalueLabel->Name = L"NewvalueLabel";
			this->NewvalueLabel->Size = System::Drawing::Size(265, 54);
			this->NewvalueLabel->TabIndex = 21;
			this->NewvalueLabel->Text = L"updated info";
			// 
			// SubmitButton
			// 
			this->SubmitButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->SubmitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SubmitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SubmitButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->SubmitButton->FlatAppearance->BorderSize = 2;
			this->SubmitButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkBlue;
			this->SubmitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SubmitButton->ForeColor = System::Drawing::Color::Black;
			this->SubmitButton->Location = System::Drawing::Point(1103, 433);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(166, 57);
			this->SubmitButton->TabIndex = 22;
			this->SubmitButton->Text = L"submit";
			this->SubmitButton->UseVisualStyleBackColor = false;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &UserForm::SubmitButton_Click);
			// 
			// EditPassButton
			// 
			this->EditPassButton->BackColor = System::Drawing::Color::DodgerBlue;
			this->EditPassButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditPassButton->Location = System::Drawing::Point(379, 489);
			this->EditPassButton->Name = L"EditPassButton";
			this->EditPassButton->Size = System::Drawing::Size(108, 44);
			this->EditPassButton->TabIndex = 23;
			this->EditPassButton->Text = L"Edit pass";
			this->EditPassButton->UseVisualStyleBackColor = false;
			this->EditPassButton->Click += gcnew System::EventHandler(this, &UserForm::EditPassButton_Click);
			// 
			// MaleCheckBox
			// 
			this->MaleCheckBox->AutoSize = true;
			this->MaleCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->MaleCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->MaleCheckBox->ForeColor = System::Drawing::Color::White;
			this->MaleCheckBox->Location = System::Drawing::Point(1051, 260);
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
			this->FemaleCheckBox->ForeColor = System::Drawing::Color::White;
			this->FemaleCheckBox->Location = System::Drawing::Point(1051, 302);
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
			this->AbroadCheckBox->ForeColor = System::Drawing::Color::White;
			this->AbroadCheckBox->Location = System::Drawing::Point(1051, 302);
			this->AbroadCheckBox->Name = L"AbroadCheckBox";
			this->AbroadCheckBox->Size = System::Drawing::Size(114, 36);
			this->AbroadCheckBox->TabIndex = 33;
			this->AbroadCheckBox->Text = L"Abroad";
			this->AbroadCheckBox->UseVisualStyleBackColor = true;
			this->AbroadCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::AbroadCheckBox_CheckedChanged);
			// 
			// OtherCountryComboBox
			// 
			this->OtherCountryComboBox->BackColor = System::Drawing::Color::MidnightBlue;
			this->OtherCountryComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->OtherCountryComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->OtherCountryComboBox->ForeColor = System::Drawing::Color::White;
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
			this->OtherCountryComboBox->Location = System::Drawing::Point(1160, 351);
			this->OtherCountryComboBox->Name = L"OtherCountryComboBox";
			this->OtherCountryComboBox->Size = System::Drawing::Size(218, 37);
			this->OtherCountryComboBox->TabIndex = 32;
			// 
			// EgyptCheckBox
			// 
			this->EgyptCheckBox->AutoSize = true;
			this->EgyptCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EgyptCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->EgyptCheckBox->ForeColor = System::Drawing::Color::White;
			this->EgyptCheckBox->Location = System::Drawing::Point(1051, 260);
			this->EgyptCheckBox->Name = L"EgyptCheckBox";
			this->EgyptCheckBox->Size = System::Drawing::Size(97, 36);
			this->EgyptCheckBox->TabIndex = 31;
			this->EgyptCheckBox->Text = L"Egypt";
			this->EgyptCheckBox->UseVisualStyleBackColor = true;
			this->EgyptCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::EgyptCheckBox_CheckedChanged);
			// 
			// DoseComboBox
			// 
			this->DoseComboBox->BackColor = System::Drawing::Color::MidnightBlue;
			this->DoseComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DoseComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DoseComboBox->ForeColor = System::Drawing::Color::White;
			this->DoseComboBox->FormattingEnabled = true;
			this->DoseComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"only first dose", L"both doses" });
			this->DoseComboBox->Location = System::Drawing::Point(1197, 351);
			this->DoseComboBox->Name = L"DoseComboBox";
			this->DoseComboBox->Size = System::Drawing::Size(181, 37);
			this->DoseComboBox->TabIndex = 36;
			// 
			// ApplyCheckBox
			// 
			this->ApplyCheckBox->AutoSize = true;
			this->ApplyCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ApplyCheckBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15));
			this->ApplyCheckBox->ForeColor = System::Drawing::Color::White;
			this->ApplyCheckBox->Location = System::Drawing::Point(1034, 257);
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
			this->vaccinatedCheckBox->ForeColor = System::Drawing::Color::White;
			this->vaccinatedCheckBox->Location = System::Drawing::Point(1034, 302);
			this->vaccinatedCheckBox->Name = L"vaccinatedCheckBox";
			this->vaccinatedCheckBox->Size = System::Drawing::Size(157, 39);
			this->vaccinatedCheckBox->TabIndex = 34;
			this->vaccinatedCheckBox->Text = L"Vaccinated";
			this->vaccinatedCheckBox->UseVisualStyleBackColor = true;
			this->vaccinatedCheckBox->CheckedChanged += gcnew System::EventHandler(this, &UserForm::vaccinatedCheckBox_CheckedChanged);
			// 
			// UserInfoRichTextBox
			// 
			this->UserInfoRichTextBox->BackColor = System::Drawing::Color::CadetBlue;
			this->UserInfoRichTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UserInfoRichTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInfoRichTextBox->ForeColor = System::Drawing::Color::Black;
			this->UserInfoRichTextBox->Location = System::Drawing::Point(491, 165);
			this->UserInfoRichTextBox->Margin = System::Windows::Forms::Padding(1);
			this->UserInfoRichTextBox->Name = L"UserInfoRichTextBox";
			this->UserInfoRichTextBox->ReadOnly = true;
			this->UserInfoRichTextBox->Size = System::Drawing::Size(514, 444);
			this->UserInfoRichTextBox->TabIndex = 38;
			this->UserInfoRichTextBox->Text = L"";
			// 
			// GovernorateComboBox
			// 
			this->GovernorateComboBox->BackColor = System::Drawing::Color::MidnightBlue;
			this->GovernorateComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->GovernorateComboBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GovernorateComboBox->ForeColor = System::Drawing::Color::White;
			this->GovernorateComboBox->FormattingEnabled = true;
			this->GovernorateComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(27) {
				L"Alexandria", L"Aswan", L"Assiut", L"Beheira",
					L"Beni Suef", L"Cairo", L"Dakahlia", L"Damietta", L"Fayoum", L"Gharbia", L"Giza", L"Ismailia", L"Kafr el-Sheikh", L"Matrouh",
					L"Minya", L"Menofia", L"New Valley", L"North Sinai", L"Port Said", L"Qualyubia", L"Qena", L"Red Sea", L"Al-Sharqia", L"Sohag",
					L"South Sinai", L"Suez", L"Luxor"
			});
			this->GovernorateComboBox->Location = System::Drawing::Point(1103, 266);
			this->GovernorateComboBox->Name = L"GovernorateComboBox";
			this->GovernorateComboBox->Size = System::Drawing::Size(206, 37);
			this->GovernorateComboBox->TabIndex = 45;
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Font = (gcnew System::Drawing::Font(L"Sitka Text", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameLabel->ForeColor = System::Drawing::Color::DodgerBlue;
			this->UsernameLabel->Location = System::Drawing::Point(50, 0);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(107, 55);
			this->UsernameLabel->TabIndex = 42;
			this->UsernameLabel->Text = L"user";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::DarkCyan;
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->DeleteInfoButton);
			this->panel4->Controls->Add(this->ViewUserInfoButton);
			this->panel4->Controls->Add(this->EditUserInfoButton);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(374, 792);
			this->panel4->TabIndex = 46;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Teal;
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Location = System::Drawing::Point(3, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(368, 224);
			this->panel5->TabIndex = 51;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel6->Controls->Add(this->UsernameLabel);
			this->panel6->Location = System::Drawing::Point(58, 115);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 64);
			this->panel6->TabIndex = 47;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(101, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(110, 110);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(302, 343);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(48, 64);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 50;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(302, 573);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(48, 64);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 49;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(302, 456);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(48, 68);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 48;
			this->pictureBox2->TabStop = false;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(1615, 792);
			this->Controls->Add(this->GovernorateComboBox);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->NewvalueLabel);
			this->Controls->Add(this->vaccinatedCheckBox);
			this->Controls->Add(this->FemaleCheckBox);
			this->Controls->Add(this->UserInfoRichTextBox);
			this->Controls->Add(this->ErrorLabel);
			this->Controls->Add(this->AbroadCheckBox);
			this->Controls->Add(this->EditPassButton);
			this->Controls->Add(this->NewvalueTextBox);
			this->Controls->Add(this->EditStatusButton);
			this->Controls->Add(this->ApplyCheckBox);
			this->Controls->Add(this->EditGovButton);
			this->Controls->Add(this->EgyptCheckBox);
			this->Controls->Add(this->EditCountryButton);
			this->Controls->Add(this->MaleCheckBox);
			this->Controls->Add(this->EditAgeButton);
			this->Controls->Add(this->DoseComboBox);
			this->Controls->Add(this->EditGendrButton);
			this->Controls->Add(this->OtherCountryComboBox);
			this->Controls->Add(this->EditIDButton);
			this->Controls->Add(this->EditNameButton);
			this->Controls->Add(this->panel4);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"UserForm";
			this->Text = L"User";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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

		System::Void NewvalueTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	};
}