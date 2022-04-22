#pragma once
#include "User.h"
#include "reg.h"
#include "UserForm.h"
#include "AdminForm.h"
#include<string>
#include <msclr/marshal_cppstd.h>
namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		login(void)
		{
			InitializeComponent();
			PasswordTextBox->PasswordChar = '*';
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Label^ NationalIDLabel;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NatIDTextBox;

	private: System::Windows::Forms::TextBox^ PasswordTextBox;
	private: System::Windows::Forms::CheckBox^ HidePassCheckBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ NotRegYetLabel;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->NationalIDLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NatIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->HidePassCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NotRegYetLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(521, 322);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(128, 60);
			this->LoginButton->TabIndex = 1;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &login::LoginButton_Click);
			// 
			// NationalIDLabel
			// 
			this->NationalIDLabel->AutoSize = true;
			this->NationalIDLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NationalIDLabel->Location = System::Drawing::Point(325, 114);
			this->NationalIDLabel->Name = L"NationalIDLabel";
			this->NationalIDLabel->Size = System::Drawing::Size(236, 47);
			this->NationalIDLabel->TabIndex = 2;
			this->NationalIDLabel->Text = L"National ID : ";
			this->NationalIDLabel->Click += gcnew System::EventHandler(this, &login::NationalIDLabel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(365, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 47);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password : ";
			// 
			// NatIDTextBox
			// 
			this->NatIDTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NatIDTextBox->Location = System::Drawing::Point(567, 111);
			this->NatIDTextBox->Name = L"NatIDTextBox";
			this->NatIDTextBox->Size = System::Drawing::Size(321, 54);
			this->NatIDTextBox->TabIndex = 4;
			this->NatIDTextBox->TextChanged += gcnew System::EventHandler(this, &login::NameTextBox_TextChanged);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->Location = System::Drawing::Point(567, 190);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(321, 54);
			this->PasswordTextBox->TabIndex = 5;
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &login::PasswordTextBox_TextChanged);
			// 
			// HidePassCheckBox
			// 
			this->HidePassCheckBox->AutoSize = true;
			this->HidePassCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HidePassCheckBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HidePassCheckBox->Location = System::Drawing::Point(894, 193);
			this->HidePassCheckBox->Name = L"HidePassCheckBox";
			this->HidePassCheckBox->Size = System::Drawing::Size(89, 51);
			this->HidePassCheckBox->TabIndex = 15;
			this->HidePassCheckBox->Text = L"👁";
			this->HidePassCheckBox->UseVisualStyleBackColor = true;
			this->HidePassCheckBox->CheckedChanged += gcnew System::EventHandler(this, &login::HidePassCheckBox_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(760, 329);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 47);
			this->label4->TabIndex = 16;
			this->label4->Text = L".........";
			// 
			// NotRegYetLabel
			// 
			this->NotRegYetLabel->AutoSize = true;
			this->NotRegYetLabel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->NotRegYetLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NotRegYetLabel->ForeColor = System::Drawing::Color::Blue;
			this->NotRegYetLabel->Location = System::Drawing::Point(431, 414);
			this->NotRegYetLabel->Name = L"NotRegYetLabel";
			this->NotRegYetLabel->Size = System::Drawing::Size(346, 47);
			this->NotRegYetLabel->TabIndex = 17;
			this->NotRegYetLabel->Text = L"Not Registered yet\?";
			this->NotRegYetLabel->Click += gcnew System::EventHandler(this, &login::label1_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1314, 529);
			this->Controls->Add(this->NotRegYetLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->HidePassCheckBox);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->NatIDTextBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NationalIDLabel);
			this->Controls->Add(this->LoginButton);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void NameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void PasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void HidePassCheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void NationalIDLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
};
}
