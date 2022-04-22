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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ HelloAdminLabel;
	private: System::Windows::Forms::Button^ DeleteAllUsers;
	private: System::Windows::Forms::Button^ ViewAllUsers;
	private: System::Windows::Forms::Label^ UserInfoLabel;
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
			this->ViewInfoButton = (gcnew System::Windows::Forms::Button());
			this->NationalIDTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NationalIDLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteInfoButton = (gcnew System::Windows::Forms::Button());
			this->ViewAwaitingListButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->HelloAdminLabel = (gcnew System::Windows::Forms::Label());
			this->DeleteAllUsers = (gcnew System::Windows::Forms::Button());
			this->ViewAllUsers = (gcnew System::Windows::Forms::Button());
			this->UserInfoLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ViewInfoButton
			// 
			this->ViewInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewInfoButton->Location = System::Drawing::Point(533, 218);
			this->ViewInfoButton->Name = L"ViewInfoButton";
			this->ViewInfoButton->Size = System::Drawing::Size(346, 60);
			this->ViewInfoButton->TabIndex = 3;
			this->ViewInfoButton->Text = L"View User Info";
			this->ViewInfoButton->UseVisualStyleBackColor = true;
			this->ViewInfoButton->Click += gcnew System::EventHandler(this, &AdminForm::ViewInfoButton_Click);
			// 
			// NationalIDTextBox
			// 
			this->NationalIDTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NationalIDTextBox->Location = System::Drawing::Point(533, 139);
			this->NationalIDTextBox->Name = L"NationalIDTextBox";
			this->NationalIDTextBox->Size = System::Drawing::Size(329, 54);
			this->NationalIDTextBox->TabIndex = 5;
			// 
			// NationalIDLabel
			// 
			this->NationalIDLabel->AutoSize = true;
			this->NationalIDLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NationalIDLabel->Location = System::Drawing::Point(185, 146);
			this->NationalIDLabel->Name = L"NationalIDLabel";
			this->NationalIDLabel->Size = System::Drawing::Size(323, 47);
			this->NationalIDLabel->TabIndex = 6;
			this->NationalIDLabel->Text = L"User National ID : ";
			// 
			// DeleteInfoButton
			// 
			this->DeleteInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteInfoButton->Location = System::Drawing::Point(533, 416);
			this->DeleteInfoButton->Name = L"DeleteInfoButton";
			this->DeleteInfoButton->Size = System::Drawing::Size(346, 60);
			this->DeleteInfoButton->TabIndex = 7;
			this->DeleteInfoButton->Text = L"Delete User Info";
			this->DeleteInfoButton->UseVisualStyleBackColor = true;
			this->DeleteInfoButton->Click += gcnew System::EventHandler(this, &AdminForm::DeleteInfoButton_Click);
			// 
			// ViewAwaitingListButton
			// 
			this->ViewAwaitingListButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewAwaitingListButton->Location = System::Drawing::Point(533, 350);
			this->ViewAwaitingListButton->Name = L"ViewAwaitingListButton";
			this->ViewAwaitingListButton->Size = System::Drawing::Size(346, 60);
			this->ViewAwaitingListButton->TabIndex = 8;
			this->ViewAwaitingListButton->Text = L"View awaiting list";
			this->ViewAwaitingListButton->UseVisualStyleBackColor = true;
			this->ViewAwaitingListButton->Click += gcnew System::EventHandler(this, &AdminForm::ViewAwaitingListButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(464, 551);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 47);
			this->label1->TabIndex = 9;
			this->label1->Text = L"...";
			// 
			// HelloAdminLabel
			// 
			this->HelloAdminLabel->AutoSize = true;
			this->HelloAdminLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelloAdminLabel->Location = System::Drawing::Point(550, 36);
			this->HelloAdminLabel->Name = L"HelloAdminLabel";
			this->HelloAdminLabel->Size = System::Drawing::Size(209, 47);
			this->HelloAdminLabel->TabIndex = 10;
			this->HelloAdminLabel->Text = L"Hello Admin";
			// 
			// DeleteAllUsers
			// 
			this->DeleteAllUsers->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteAllUsers->Location = System::Drawing::Point(533, 482);
			this->DeleteAllUsers->Name = L"DeleteAllUsers";
			this->DeleteAllUsers->Size = System::Drawing::Size(346, 60);
			this->DeleteAllUsers->TabIndex = 11;
			this->DeleteAllUsers->Text = L"Delete All Users";
			this->DeleteAllUsers->UseVisualStyleBackColor = true;
			this->DeleteAllUsers->Click += gcnew System::EventHandler(this, &AdminForm::DeleteAllUsers_Click);
			// 
			// ViewAllUsers
			// 
			this->ViewAllUsers->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewAllUsers->Location = System::Drawing::Point(533, 284);
			this->ViewAllUsers->Name = L"ViewAllUsers";
			this->ViewAllUsers->Size = System::Drawing::Size(346, 60);
			this->ViewAllUsers->TabIndex = 12;
			this->ViewAllUsers->Text = L"View All Users";
			this->ViewAllUsers->UseVisualStyleBackColor = true;
			this->ViewAllUsers->Click += gcnew System::EventHandler(this, &AdminForm::ViewAllUsers_Click);
			// 
			// UserInfoLabel
			// 
			this->UserInfoLabel->AutoSize = true;
			this->UserInfoLabel->BackColor = System::Drawing::Color::Black;
			this->UserInfoLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInfoLabel->ForeColor = System::Drawing::Color::White;
			this->UserInfoLabel->Location = System::Drawing::Point(990, 9);
			this->UserInfoLabel->Name = L"UserInfoLabel";
			this->UserInfoLabel->Size = System::Drawing::Size(44, 47);
			this->UserInfoLabel->TabIndex = 13;
			this->UserInfoLabel->Text = L"...";
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1390, 607);
			this->Controls->Add(this->UserInfoLabel);
			this->Controls->Add(this->ViewAllUsers);
			this->Controls->Add(this->DeleteAllUsers);
			this->Controls->Add(this->HelloAdminLabel);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ViewAwaitingListButton);
			this->Controls->Add(this->DeleteInfoButton);
			this->Controls->Add(this->NationalIDLabel);
			this->Controls->Add(this->NationalIDTextBox);
			this->Controls->Add(this->ViewInfoButton);
			this->Name = L"AdminForm";
			this->Text = L"Admin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ViewAllUsers_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ViewAwaitingListButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void DeleteAllUsers_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
