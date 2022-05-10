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
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ ResizeButton;
	private: System::Windows::Forms::Button^ MinimizeButton;

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
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->ResizeButton = (gcnew System::Windows::Forms::Button());
			this->MinimizeButton = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->LoginButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(863, 356);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(673, 60);
			this->LoginButton->TabIndex = 0;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = false;
			this->LoginButton->Click += gcnew System::EventHandler(this, &start::LoginButton_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(174)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->RegisterButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->RegisterButton->Location = System::Drawing::Point(99, 452);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(215, 51);
			this->RegisterButton->TabIndex = 1;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = false;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &start::RegisterButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ExitButton->AutoSize = true;
			this->ExitButton->BackColor = System::Drawing::Color::White;
			this->ExitButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButton.BackgroundImage")));
			this->ExitButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ExitButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->ExitButton->Location = System::Drawing::Point(1501, -1);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(54, 47);
			this->ExitButton->TabIndex = 2;
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &start::ExitButton_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(1, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(547, 193);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, 20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(541, 182);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &start::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->RegisterButton);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Location = System::Drawing::Point(1, 192);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(547, 866);
			this->panel1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 21, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(91, 393);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 47);
			this->label2->TabIndex = 0;
			this->label2->Text = L"No account\?";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(6, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(538, 274);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(916, 280);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(530, 37);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Login now to get vaccination services. ";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(546, 465);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1503, 593);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Emoji", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(672, 53);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(397, 37);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Egyptian Vaccination Service";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(571, 20);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(95, 85);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// ResizeButton
			// 
			this->ResizeButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->ResizeButton->AutoSize = true;
			this->ResizeButton->BackColor = System::Drawing::Color::White;
			this->ResizeButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResizeButton.BackgroundImage")));
			this->ResizeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ResizeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ResizeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->ResizeButton->Location = System::Drawing::Point(1441, 0);
			this->ResizeButton->Name = L"ResizeButton";
			this->ResizeButton->Size = System::Drawing::Size(54, 47);
			this->ResizeButton->TabIndex = 9;
			this->ResizeButton->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->ResizeButton->UseVisualStyleBackColor = false;
			this->ResizeButton->Click += gcnew System::EventHandler(this, &start::ResizeButton_Click);
			// 
			// MinimizeButton
			// 
			this->MinimizeButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->MinimizeButton->AutoSize = true;
			this->MinimizeButton->BackColor = System::Drawing::Color::White;
			this->MinimizeButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MinimizeButton.BackgroundImage")));
			this->MinimizeButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->MinimizeButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MinimizeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->MinimizeButton->Location = System::Drawing::Point(1381, 0);
			this->MinimizeButton->Name = L"MinimizeButton";
			this->MinimizeButton->Size = System::Drawing::Size(54, 47);
			this->MinimizeButton->TabIndex = 10;
			this->MinimizeButton->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->MinimizeButton->UseVisualStyleBackColor = false;
			this->MinimizeButton->Click += gcnew System::EventHandler(this, &start::MinimizeButton_Click);
			// 
			// start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1942, 1055);
			this->ControlBox = false;
			this->Controls->Add(this->MinimizeButton);
			this->Controls->Add(this->ResizeButton);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->LoginButton);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Vaccination application";
			this->Load += gcnew System::EventHandler(this, &start::start_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &start::start_KeyDown);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &start::start_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &start::start_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &start::start_MouseUp);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
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

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void start_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

	private: System::Void ResizeButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MinimizeButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void start_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	
	private: System::Void start_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

	private: System::Void start_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
};
}
