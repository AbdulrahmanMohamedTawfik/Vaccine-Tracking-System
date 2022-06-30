#pragma once

namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AboutUs
	/// </summary>
	public ref class AboutUs : public System::Windows::Forms::Form
	{
	public:
		AboutUs(void)
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
		~AboutUs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ A_M_T_Label;
	private: System::Windows::Forms::Button^ TawfiqGithub;
	private: System::Windows::Forms::Button^ ElDemerdashGithub;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ FayzGithub;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ ShikaGithub;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutUs::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->A_M_T_Label = (gcnew System::Windows::Forms::Label());
			this->TawfiqGithub = (gcnew System::Windows::Forms::Button());
			this->ElDemerdashGithub = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FayzGithub = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->ShikaGithub = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(679, 114);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(240, 178);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// A_M_T_Label
			// 
			this->A_M_T_Label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->A_M_T_Label->AutoEllipsis = true;
			this->A_M_T_Label->BackColor = System::Drawing::Color::Transparent;
			this->A_M_T_Label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->A_M_T_Label->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A_M_T_Label->ForeColor = System::Drawing::Color::White;
			this->A_M_T_Label->Location = System::Drawing::Point(673, 295);
			this->A_M_T_Label->Name = L"A_M_T_Label";
			this->A_M_T_Label->Size = System::Drawing::Size(246, 75);
			this->A_M_T_Label->TabIndex = 3;
			this->A_M_T_Label->Text = L"Abdulrahman Mohamed Tawfiq";
			// 
			// TawfiqGithub
			// 
			this->TawfiqGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TawfiqGithub->BackColor = System::Drawing::Color::White;
			this->TawfiqGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TawfiqGithub.BackgroundImage")));
			this->TawfiqGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TawfiqGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TawfiqGithub->FlatAppearance->BorderSize = 0;
			this->TawfiqGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->TawfiqGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TawfiqGithub->Location = System::Drawing::Point(770, 373);
			this->TawfiqGithub->Name = L"TawfiqGithub";
			this->TawfiqGithub->Size = System::Drawing::Size(50, 45);
			this->TawfiqGithub->TabIndex = 4;
			this->TawfiqGithub->UseVisualStyleBackColor = false;
			this->TawfiqGithub->Click += gcnew System::EventHandler(this, &AboutUs::TawfiqGithub_Click);
			// 
			// ElDemerdashGithub
			// 
			this->ElDemerdashGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ElDemerdashGithub->BackColor = System::Drawing::Color::White;
			this->ElDemerdashGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ElDemerdashGithub.BackgroundImage")));
			this->ElDemerdashGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ElDemerdashGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ElDemerdashGithub->FlatAppearance->BorderSize = 0;
			this->ElDemerdashGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->ElDemerdashGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ElDemerdashGithub->Location = System::Drawing::Point(269, 373);
			this->ElDemerdashGithub->Name = L"ElDemerdashGithub";
			this->ElDemerdashGithub->Size = System::Drawing::Size(50, 45);
			this->ElDemerdashGithub->TabIndex = 5;
			this->ElDemerdashGithub->UseVisualStyleBackColor = false;
			this->ElDemerdashGithub->Click += gcnew System::EventHandler(this, &AboutUs::ElDemerdashGithub_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(190, 114);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(240, 178);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoEllipsis = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(190, 295);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 75);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Abdulrahman Reda El Demerdash";
			// 
			// FayzGithub
			// 
			this->FayzGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FayzGithub->BackColor = System::Drawing::Color::White;
			this->FayzGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FayzGithub.BackgroundImage")));
			this->FayzGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FayzGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FayzGithub->FlatAppearance->BorderSize = 0;
			this->FayzGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->FayzGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FayzGithub->Location = System::Drawing::Point(1256, 373);
			this->FayzGithub->Name = L"FayzGithub";
			this->FayzGithub->Size = System::Drawing::Size(50, 45);
			this->FayzGithub->TabIndex = 10;
			this->FayzGithub->UseVisualStyleBackColor = false;
			this->FayzGithub->Click += gcnew System::EventHandler(this, &AboutUs::FayzGithub_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoEllipsis = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1159, 295);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 75);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Abdulrahman Fayz";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1165, 114);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(240, 178);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(281, 755);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 45);
			this->button1->TabIndex = 13;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoEllipsis = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(184, 677);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(246, 75);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Ali Ahmed Ayad";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(190, 496);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(240, 178);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// ShikaGithub
			// 
			this->ShikaGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ShikaGithub->BackColor = System::Drawing::Color::White;
			this->ShikaGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ShikaGithub.BackgroundImage")));
			this->ShikaGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ShikaGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ShikaGithub->FlatAppearance->BorderSize = 0;
			this->ShikaGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->ShikaGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ShikaGithub->Location = System::Drawing::Point(770, 755);
			this->ShikaGithub->Name = L"ShikaGithub";
			this->ShikaGithub->Size = System::Drawing::Size(50, 45);
			this->ShikaGithub->TabIndex = 16;
			this->ShikaGithub->UseVisualStyleBackColor = false;
			this->ShikaGithub->Click += gcnew System::EventHandler(this, &AboutUs::ShikaGithub_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoEllipsis = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(673, 677);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 75);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Abdulrahman Hussien";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(679, 496);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(240, 178);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			// 
			// AboutUs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->ShikaGithub);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->FayzGithub);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->ElDemerdashGithub);
			this->Controls->Add(this->TawfiqGithub);
			this->Controls->Add(this->A_M_T_Label);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AboutUs";
			this->Text = L"About Us";
			this->Load += gcnew System::EventHandler(this, &AboutUs::AboutUs_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AboutUs_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TawfiqGithub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ElDemerdashGithub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void FayzGithub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ShikaGithub_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
