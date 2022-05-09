#pragma once
#include"AwaitingList.h"
namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ViewInfoButton;
	private: System::Windows::Forms::TextBox^ NationalIDTextBox;
	private: System::Windows::Forms::Label^ NationalIDLabel;
	private: System::Windows::Forms::Button^ DeleteInfoButton;
	private: System::Windows::Forms::Button^ ViewAwaitingListButton;

	private: System::Windows::Forms::Label^ HelloAdminLabel;
	private: System::Windows::Forms::Button^ DeleteAllUsers;
	private: System::Windows::Forms::Button^ ViewAllUsers;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::Button^ StatButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->ViewInfoButton = (gcnew System::Windows::Forms::Button());
			this->NationalIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NationalIDLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteInfoButton = (gcnew System::Windows::Forms::Button());
			this->ViewAwaitingListButton = (gcnew System::Windows::Forms::Button());
			this->HelloAdminLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteAllUsers = (gcnew System::Windows::Forms::Button());
			this->ViewAllUsers = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->StatButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// ViewInfoButton
			// 
			this->ViewInfoButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ViewInfoButton->FlatAppearance->BorderSize = 0;
			this->ViewInfoButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewInfoButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewInfoButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ViewInfoButton->Location = System::Drawing::Point(12, 265);
			this->ViewInfoButton->Name = L"ViewInfoButton";
			this->ViewInfoButton->Size = System::Drawing::Size(218, 60);
			this->ViewInfoButton->TabIndex = 3;
			this->ViewInfoButton->Text = L"View User Info";
			this->ViewInfoButton->UseVisualStyleBackColor = false;
			this->ViewInfoButton->Click += gcnew System::EventHandler(this, &AdminForm::ViewInfoButton_Click);
			// 
			// NationalIDTextBox
			// 
			this->NationalIDTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NationalIDTextBox->Location = System::Drawing::Point(696, 108);
			this->NationalIDTextBox->Name = L"NationalIDTextBox";
			this->NationalIDTextBox->Size = System::Drawing::Size(329, 54);
			this->NationalIDTextBox->TabIndex = 5;
			// 
			// NationalIDLabel
			// 
			this->NationalIDLabel->AutoSize = true;
			this->NationalIDLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->NationalIDLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NationalIDLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->NationalIDLabel->Location = System::Drawing::Point(377, 116);
			this->NationalIDLabel->Name = L"NationalIDLabel";
			this->NationalIDLabel->Size = System::Drawing::Size(283, 38);
			this->NationalIDLabel->TabIndex = 6;
			this->NationalIDLabel->Text = L"User National ID : ";
			// 
			// DeleteInfoButton
			// 
			this->DeleteInfoButton->FlatAppearance->BorderSize = 0;
			this->DeleteInfoButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteInfoButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteInfoButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->DeleteInfoButton->Location = System::Drawing::Point(12, 529);
			this->DeleteInfoButton->Name = L"DeleteInfoButton";
			this->DeleteInfoButton->Size = System::Drawing::Size(218, 60);
			this->DeleteInfoButton->TabIndex = 7;
			this->DeleteInfoButton->Text = L"Delete User Info";
			this->DeleteInfoButton->UseVisualStyleBackColor = true;
			this->DeleteInfoButton->Click += gcnew System::EventHandler(this, &AdminForm::DeleteInfoButton_Click);
			// 
			// ViewAwaitingListButton
			// 
			this->ViewAwaitingListButton->FlatAppearance->BorderSize = 0;
			this->ViewAwaitingListButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewAwaitingListButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewAwaitingListButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ViewAwaitingListButton->Location = System::Drawing::Point(3, 397);
			this->ViewAwaitingListButton->Name = L"ViewAwaitingListButton";
			this->ViewAwaitingListButton->Size = System::Drawing::Size(227, 60);
			this->ViewAwaitingListButton->TabIndex = 8;
			this->ViewAwaitingListButton->Text = L"View awaiting list";
			this->ViewAwaitingListButton->UseVisualStyleBackColor = true;
			this->ViewAwaitingListButton->Click += gcnew System::EventHandler(this, &AdminForm::ViewAwaitingListButton_Click);
			// 
			// HelloAdminLabel
			// 
			this->HelloAdminLabel->AutoSize = true;
			this->HelloAdminLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelloAdminLabel->Location = System::Drawing::Point(984, 83);
			this->HelloAdminLabel->Name = L"HelloAdminLabel";
			this->HelloAdminLabel->Size = System::Drawing::Size(0, 47);
			this->HelloAdminLabel->TabIndex = 10;
			// 
			// DeleteAllUsers
			// 
			this->DeleteAllUsers->FlatAppearance->BorderSize = 0;
			this->DeleteAllUsers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteAllUsers->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteAllUsers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->DeleteAllUsers->Location = System::Drawing::Point(12, 595);
			this->DeleteAllUsers->Name = L"DeleteAllUsers";
			this->DeleteAllUsers->Size = System::Drawing::Size(218, 60);
			this->DeleteAllUsers->TabIndex = 11;
			this->DeleteAllUsers->Text = L"Delete All Users";
			this->DeleteAllUsers->UseVisualStyleBackColor = true;
			this->DeleteAllUsers->Click += gcnew System::EventHandler(this, &AdminForm::DeleteAllUsers_Click);
			// 
			// ViewAllUsers
			// 
			this->ViewAllUsers->FlatAppearance->BorderSize = 0;
			this->ViewAllUsers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ViewAllUsers->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewAllUsers->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->ViewAllUsers->Location = System::Drawing::Point(3, 331);
			this->ViewAllUsers->Name = L"ViewAllUsers";
			this->ViewAllUsers->Size = System::Drawing::Size(227, 60);
			this->ViewAllUsers->TabIndex = 12;
			this->ViewAllUsers->Text = L"View All Users";
			this->ViewAllUsers->UseVisualStyleBackColor = true;
			this->ViewAllUsers->Click += gcnew System::EventHandler(this, &AdminForm::ViewAllUsers_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(402, 200);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(647, 529);
			this->richTextBox1->TabIndex = 14;
			this->richTextBox1->Text = L"";
			// 
			// StatButton
			// 
			this->StatButton->FlatAppearance->BorderSize = 0;
			this->StatButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->StatButton->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StatButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->StatButton->Location = System::Drawing::Point(3, 463);
			this->StatButton->Name = L"StatButton";
			this->StatButton->Size = System::Drawing::Size(227, 60);
			this->StatButton->TabIndex = 16;
			this->StatButton->Text = L"Statstics Dashboard";
			this->StatButton->UseVisualStyleBackColor = true;
			this->StatButton->Click += gcnew System::EventHandler(this, &AdminForm::StatButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->StatButton);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->DeleteAllUsers);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->ViewInfoButton);
			this->panel1->Controls->Add(this->ViewAllUsers);
			this->panel1->Controls->Add(this->DeleteInfoButton);
			this->panel1->Controls->Add(this->ViewAwaitingListButton);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(347, 975);
			this->panel1->TabIndex = 17;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(258, 474);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(58, 30);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 23;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(258, 614);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(58, 30);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 22;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(258, 547);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(58, 30);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(258, 414);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(58, 30);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(258, 351);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(58, 30);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(258, 283);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(58, 30);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(347, 168);
			this->panel2->TabIndex = 18;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(249)));
			this->label1->Location = System::Drawing::Point(130, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 20);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Admin";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(76, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(164, 99);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(1840, 975);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->HelloAdminLabel);
			this->Controls->Add(this->NationalIDLabel);
			this->Controls->Add(this->NationalIDTextBox);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AdminForm";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ViewAllUsers_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ViewAwaitingListButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void DeleteAllUsers_Click(System::Object^ sender, System::EventArgs^ e);
	
  private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void StatButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
