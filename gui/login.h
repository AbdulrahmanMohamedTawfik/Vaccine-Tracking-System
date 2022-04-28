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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;






	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(login::typeid));
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->NationalIDLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NatIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->HidePassCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::White;
			this->LoginButton->Location = System::Drawing::Point(72, 417);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(566, 60);
			this->LoginButton->TabIndex = 1;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &login::LoginButton_Click);
			// 
			// NationalIDLabel
			// 
			this->NationalIDLabel->AutoSize = true;
			this->NationalIDLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NationalIDLabel->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->NationalIDLabel->Location = System::Drawing::Point(24, 215);
			this->NationalIDLabel->Name = L"NationalIDLabel";
			this->NationalIDLabel->Size = System::Drawing::Size(210, 45);
			this->NationalIDLabel->TabIndex = 2;
			this->NationalIDLabel->Text = L"National ID : ";
			this->NationalIDLabel->Click += gcnew System::EventHandler(this, &login::NationalIDLabel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(64, 291);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 45);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password : ";
			// 
			// NatIDTextBox
			// 
			this->NatIDTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NatIDTextBox->Location = System::Drawing::Point(266, 212);
			this->NatIDTextBox->Name = L"NatIDTextBox";
			this->NatIDTextBox->Size = System::Drawing::Size(278, 54);
			this->NatIDTextBox->TabIndex = 4;
			this->NatIDTextBox->TextChanged += gcnew System::EventHandler(this, &login::NameTextBox_TextChanged);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->Location = System::Drawing::Point(266, 291);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(278, 54);
			this->PasswordTextBox->TabIndex = 5;
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &login::PasswordTextBox_TextChanged);
			// 
			// HidePassCheckBox
			// 
			this->HidePassCheckBox->AutoSize = true;
			this->HidePassCheckBox->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HidePassCheckBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HidePassCheckBox->ForeColor = System::Drawing::Color::White;
			this->HidePassCheckBox->Location = System::Drawing::Point(550, 293);
			this->HidePassCheckBox->Name = L"HidePassCheckBox";
			this->HidePassCheckBox->Size = System::Drawing::Size(88, 49);
			this->HidePassCheckBox->TabIndex = 15;
			this->HidePassCheckBox->Text = L"👁";
			this->HidePassCheckBox->UseVisualStyleBackColor = true;
			this->HidePassCheckBox->CheckedChanged += gcnew System::EventHandler(this, &login::HidePassCheckBox_CheckedChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->HidePassCheckBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->LoginButton);
			this->panel1->Controls->Add(this->NationalIDLabel);
			this->panel1->Controls->Add(this->PasswordTextBox);
			this->panel1->Controls->Add(this->NatIDTextBox);
			this->panel1->Location = System::Drawing::Point(2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(692, 1238);
			this->panel1->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::MediumOrchid;
			this->label5->Location = System::Drawing::Point(156, 495);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(370, 45);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Don\'t have account yet\?";
			this->label5->Click += gcnew System::EventHandler(this, &login::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(53, 363);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 45);
			this->label4->TabIndex = 19;
			this->label4->Click += gcnew System::EventHandler(this, &login::label4_Click);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 21;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(707, 112);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(586, 367);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Stencil", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Navy;
			this->label3->Location = System::Drawing::Point(700, 497);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(537, 39);
			this->label3->TabIndex = 20;
			this->label3->Text = L"# Get Vax for healthier life";
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1314, 1055);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
	};
}
