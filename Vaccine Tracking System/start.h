#pragma once
#include "login.h"
#include "reg.h"
namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for start
	/// </summary>
	public ref class start : public System::Windows::Forms::Form
	{
	public:
		start(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: bool dragging = false;
	private: Point offset;
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ RegisterButton;


	private: System::Windows::Forms::Label^ label3;






	private: System::Windows::Forms::Button^ VolumeButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ AboutDevs;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(start::typeid));
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->VolumeButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->AboutDevs = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::DarkTurquoise;
			this->LoginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(256, 238);
			this->LoginButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(349, 60);
			this->LoginButton->TabIndex = 0;
			this->LoginButton->Text = L"        Login";
			this->LoginButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &start::LoginButton_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::Transparent;
			this->RegisterButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->RegisterButton->ForeColor = System::Drawing::Color::SlateBlue;
			this->RegisterButton->Location = System::Drawing::Point(1617, 2);
			this->RegisterButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(371, 50);
			this->RegisterButton->TabIndex = 1;
			this->RegisterButton->Text = L"No account\? sign up";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &start::RegisterButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(916, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(530, 37);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Login now to get vaccination services. ";
			// 
			// VolumeButton
			// 
			this->VolumeButton->AutoSize = true;
			this->VolumeButton->BackColor = System::Drawing::Color::White;
			this->VolumeButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"VolumeButton.BackgroundImage")));
			this->VolumeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->VolumeButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->VolumeButton->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->VolumeButton->FlatAppearance->BorderSize = 0;
			this->VolumeButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::AliceBlue;
			this->VolumeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->VolumeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->VolumeButton->Location = System::Drawing::Point(1661, 11);
			this->VolumeButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->VolumeButton->Name = L"VolumeButton";
			this->VolumeButton->Size = System::Drawing::Size(53, 50);
			this->VolumeButton->TabIndex = 11;
			this->VolumeButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->VolumeButton->UseVisualStyleBackColor = false;
			this->VolumeButton->Click += gcnew System::EventHandler(this, &start::VolumeButton_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoSize = true;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->RegisterButton);
			this->panel1->Controls->Add(this->LoginButton);
			this->panel1->Location = System::Drawing::Point(-59, 143);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1991, 914);
			this->panel1->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(522, 238);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(83, 60);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &start::pictureBox1_Click);
			// 
			// AboutDevs
			// 
			this->AboutDevs->BackColor = System::Drawing::Color::DarkRed;
			this->AboutDevs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AboutDevs->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkRed;
			this->AboutDevs->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AboutDevs->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AboutDevs->Location = System::Drawing::Point(1268, 9);
			this->AboutDevs->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AboutDevs->Name = L"AboutDevs";
			this->AboutDevs->Size = System::Drawing::Size(341, 52);
			this->AboutDevs->TabIndex = 3;
			this->AboutDevs->Text = L"About the Developers";
			this->AboutDevs->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->AboutDevs->UseVisualStyleBackColor = false;
			this->AboutDevs->Click += gcnew System::EventHandler(this, &start::AboutDevs_Click);
			// 
			// start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->AboutDevs);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->VolumeButton);
			this->Controls->Add(this->label3);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vaccination application";
			this->Load += gcnew System::EventHandler(this, &start::start_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &start::start_KeyDown);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void RegisterButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void start_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void start_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void VolumeButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void AboutDevs_Click(System::Object^ sender, System::EventArgs^ e);
};
}
