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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(343, 12);
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
			this->A_M_T_Label->Location = System::Drawing::Point(337, 193);
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
			this->TawfiqGithub->Location = System::Drawing::Point(434, 271);
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
			this->ElDemerdashGithub->Location = System::Drawing::Point(91, 271);
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
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
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
			this->label1->Location = System::Drawing::Point(12, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(246, 75);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Abdulrahman Reda El Demerdash";
			// 
			// AboutUs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1169, 528);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AboutUs_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TawfiqGithub_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void ElDemerdashGithub_Click(System::Object^ sender, System::EventArgs^ e);
};
}
