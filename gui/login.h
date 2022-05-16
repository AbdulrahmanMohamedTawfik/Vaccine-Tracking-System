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






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ UnseeButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;



	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;






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
			this->UnseeButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::White;
			this->LoginButton->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->LoginButton->FlatAppearance->BorderSize = 0;
			this->LoginButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Tahoma", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::RoyalBlue;
			this->LoginButton->Location = System::Drawing::Point(368, 554);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(140, 60);
			this->LoginButton->TabIndex = 1;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &login::LoginButton_Click);
			// 
			// NationalIDLabel
			// 
			this->NationalIDLabel->AutoSize = true;
			this->NationalIDLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NationalIDLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NationalIDLabel->Location = System::Drawing::Point(179, -75);
			this->NationalIDLabel->Name = L"NationalIDLabel";
			this->NationalIDLabel->Size = System::Drawing::Size(111, 28);
			this->NationalIDLabel->TabIndex = 2;
			this->NationalIDLabel->Text = L"National ID";
			this->NationalIDLabel->Click += gcnew System::EventHandler(this, &login::NationalIDLabel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(157, 437);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// NatIDTextBox
			// 
			this->NatIDTextBox->BackColor = System::Drawing::Color::White;
			this->NatIDTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NatIDTextBox->ForeColor = System::Drawing::Color::Black;
			this->NatIDTextBox->Location = System::Drawing::Point(162, 377);
			this->NatIDTextBox->Name = L"NatIDTextBox";
			this->NatIDTextBox->Size = System::Drawing::Size(346, 45);
			this->NatIDTextBox->TabIndex = 4;
			this->NatIDTextBox->TextChanged += gcnew System::EventHandler(this, &login::NameTextBox_TextChanged);
			this->NatIDTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &login::NatIDTextBox_KeyDown);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::White;
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->PasswordTextBox->Location = System::Drawing::Point(162, 468);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(346, 45);
			this->PasswordTextBox->TabIndex = 5;
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &login::PasswordTextBox_TextChanged);
			this->PasswordTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &login::PasswordTextBox_KeyDown);
			// 
			// UnseeButton
			// 
			this->UnseeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UnseeButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UnseeButton->Location = System::Drawing::Point(1618, 112);
			this->UnseeButton->Name = L"UnseeButton";
			this->UnseeButton->Size = System::Drawing::Size(76, 54);
			this->UnseeButton->TabIndex = 21;
			this->UnseeButton->Text = L"👁";
			this->UnseeButton->UseVisualStyleBackColor = true;
			this->UnseeButton->Click += gcnew System::EventHandler(this, &login::UnseeButton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Gray;
			this->label5->Location = System::Drawing::Point(23, 679);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(390, 41);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Don\'t have account \? signup";
			this->label5->Click += gcnew System::EventHandler(this, &login::label5_Click);
			this->label5->MouseLeave += gcnew System::EventHandler(this, &login::label5_MouseLeave);
			this->label5->MouseHover += gcnew System::EventHandler(this, &login::label5_MouseHover);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Cursor = System::Windows::Forms::Cursors::No;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(46, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1217, 744);
			this->panel1->TabIndex = 22;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->pictureBox2);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->NatIDTextBox);
			this->panel5->Controls->Add(this->PasswordTextBox);
			this->panel5->Controls->Add(this->panel3);
			this->panel5->Controls->Add(this->NationalIDLabel);
			this->panel5->Controls->Add(this->panel2);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->LoginButton);
			this->panel5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->panel5->Location = System::Drawing::Point(485, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(732, 741);
			this->panel5->TabIndex = 25;
			this->panel5->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &login::panel5_Paint);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(162, 162);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(357, 161);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Purple;
			this->label3->Location = System::Drawing::Point(138, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(417, 34);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Egypt Vaccination Services";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(157, 346);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 28);
			this->label1->TabIndex = 23;
			this->label1->Text = L"National Id";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(11, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(121, 103);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &login::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Purple;
			this->label4->Location = System::Drawing::Point(88, 581);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(274, 20);
			this->label4->TabIndex = 8;
			//this->label4->Text = L"You can\'t login with Empty user";
			this->label4->Click += gcnew System::EventHandler(this, &login::label4_Click_1);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel3->Location = System::Drawing::Point(136, 362);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(10, 85);
			this->panel3->TabIndex = 22;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::RoyalBlue;
			this->panel2->Location = System::Drawing::Point(136, 453);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(10, 69);
			this->panel2->TabIndex = 21;
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1314, 1055);
			this->Controls->Add(this->UnseeButton);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void NameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void PasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void NationalIDLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {}
	
	private: System::Void PasswordTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	
	private: System::Void NatIDTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	
	private: System::Void label5_MouseHover(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label5_MouseLeave(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void UnseeButton_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
