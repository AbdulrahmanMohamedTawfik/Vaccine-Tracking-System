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

	private: System::Windows::Forms::Button^ AliGithub;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button2;





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
			this->AliGithub = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(17, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 211);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AboutUs::pictureBox1_Click);
			// 
			// A_M_T_Label
			// 
			this->A_M_T_Label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->A_M_T_Label->AutoEllipsis = true;
			this->A_M_T_Label->BackColor = System::Drawing::Color::Transparent;
			this->A_M_T_Label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->A_M_T_Label->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A_M_T_Label->ForeColor = System::Drawing::Color::White;
			this->A_M_T_Label->Location = System::Drawing::Point(11, 220);
			this->A_M_T_Label->Name = L"A_M_T_Label";
			this->A_M_T_Label->Size = System::Drawing::Size(246, 75);
			this->A_M_T_Label->TabIndex = 3;
			this->A_M_T_Label->Text = L"Abdulraahman Mohamed Tawfik";
			this->A_M_T_Label->Click += gcnew System::EventHandler(this, &AboutUs::A_M_T_Label_Click);
			// 
			// TawfiqGithub
			// 
			this->TawfiqGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TawfiqGithub->BackColor = System::Drawing::Color::MediumPurple;
			this->TawfiqGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TawfiqGithub.BackgroundImage")));
			this->TawfiqGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->TawfiqGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->TawfiqGithub->FlatAppearance->BorderSize = 0;
			this->TawfiqGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->TawfiqGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TawfiqGithub->Location = System::Drawing::Point(268, 220);
			this->TawfiqGithub->Name = L"TawfiqGithub";
			this->TawfiqGithub->Size = System::Drawing::Size(50, 45);
			this->TawfiqGithub->TabIndex = 4;
			this->TawfiqGithub->UseVisualStyleBackColor = false;
			this->TawfiqGithub->Click += gcnew System::EventHandler(this, &AboutUs::TawfiqGithub_Click);
			// 
			// ElDemerdashGithub
			// 
			this->ElDemerdashGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ElDemerdashGithub->BackColor = System::Drawing::Color::MediumPurple;
			this->ElDemerdashGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ElDemerdashGithub.BackgroundImage")));
			this->ElDemerdashGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ElDemerdashGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ElDemerdashGithub->FlatAppearance->BorderSize = 0;
			this->ElDemerdashGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->ElDemerdashGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ElDemerdashGithub->Location = System::Drawing::Point(268, 220);
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
			this->pictureBox2->Location = System::Drawing::Point(13, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(305, 204);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &AboutUs::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoEllipsis = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(16, 220);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 75);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Abdelrahman Reda El Demerdash";
			this->label1->Click += gcnew System::EventHandler(this, &AboutUs::label1_Click);
			// 
			// FayzGithub
			// 
			this->FayzGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FayzGithub->BackColor = System::Drawing::Color::MediumPurple;
			this->FayzGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"FayzGithub.BackgroundImage")));
			this->FayzGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FayzGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FayzGithub->FlatAppearance->BorderSize = 0;
			this->FayzGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->FayzGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->FayzGithub->Location = System::Drawing::Point(277, 220);
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
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(20, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(246, 75);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Abdelrahman Fayez";
			this->label2->Click += gcnew System::EventHandler(this, &AboutUs::label2_Click);
			// 
			// AliGithub
			// 
			this->AliGithub->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->AliGithub->BackColor = System::Drawing::Color::MediumPurple;
			this->AliGithub->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AliGithub.BackgroundImage")));
			this->AliGithub->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AliGithub->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AliGithub->FlatAppearance->BorderSize = 0;
			this->AliGithub->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->AliGithub->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AliGithub->Location = System::Drawing::Point(277, 230);
			this->AliGithub->Name = L"AliGithub";
			this->AliGithub->Size = System::Drawing::Size(50, 45);
			this->AliGithub->TabIndex = 13;
			this->AliGithub->UseVisualStyleBackColor = false;
			this->AliGithub->Click += gcnew System::EventHandler(this, &AboutUs::AliGithub_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoEllipsis = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(25, 230);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(246, 75);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Ali Ahmed Ayad";
			this->label3->Click += gcnew System::EventHandler(this, &AboutUs::label3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(26, 22);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(301, 202);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &AboutUs::pictureBox4_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoEllipsis = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(16, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(246, 75);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Abdulrahman Hussien";
			this->label4->Click += gcnew System::EventHandler(this, &AboutUs::label4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(22, 7);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(290, 208);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 14;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &AboutUs::pictureBox5_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(26, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(301, 208);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &AboutUs::pictureBox3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MidnightBlue;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(2, -2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1255, 178);
			this->panel2->TabIndex = 18;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 70));
			this->label5->ForeColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(70, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(767, 142);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Meet Our Team";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label5->Click += gcnew System::EventHandler(this, &AboutUs::label5_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MediumPurple;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->FayzGithub);
			this->panel1->Location = System::Drawing::Point(195, 196);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(353, 320);
			this->panel1->TabIndex = 19;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AboutUs::panel1_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::MediumPurple;
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->A_M_T_Label);
			this->panel3->Controls->Add(this->TawfiqGithub);
			this->panel3->Location = System::Drawing::Point(771, 196);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(353, 320);
			this->panel3->TabIndex = 20;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AboutUs::panel3_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::MediumPurple;
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Location = System::Drawing::Point(1401, 196);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(353, 323);
			this->panel4->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::MediumPurple;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(262, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 45);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::MediumPurple;
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Controls->Add(this->AliGithub);
			this->panel5->Location = System::Drawing::Point(195, 528);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(353, 320);
			this->panel5->TabIndex = 22;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::MediumPurple;
			this->panel6->Controls->Add(this->label1);
			this->panel6->Controls->Add(this->ElDemerdashGithub);
			this->panel6->Controls->Add(this->pictureBox2);
			this->panel6->Location = System::Drawing::Point(771, 528);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(353, 320);
			this->panel6->TabIndex = 23;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::MediumPurple;
			this->panel7->Controls->Add(this->button2);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Controls->Add(this->pictureBox6);
			this->panel7->Location = System::Drawing::Point(1401, 537);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(353, 323);
			this->panel7->TabIndex = 24;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::MediumPurple;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::BlueViolet;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(277, 224);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 45);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AboutUs::button2_Click);
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoEllipsis = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(16, 221);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(246, 75);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Seif Mohamed Taha";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(22, 14);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(305, 204);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			// 
			// AboutUs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AboutUs";
			this->Text = L"About Us";
			this->Load += gcnew System::EventHandler(this, &AboutUs::AboutUs_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AboutUs_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TawfiqGithub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ElDemerdashGithub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void FayzGithub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ShikaGithub_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void AliGithub_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void A_M_T_Label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
};
}
