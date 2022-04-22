#pragma once

namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for User
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ ViewUserInfoButton;
	protected:
	private: System::Windows::Forms::Button^ EditUserInfoButton;
	private: System::Windows::Forms::Button^ DeleteInfoButton;
	private: System::Windows::Forms::Label^ HelloUserLabel;
	private: System::Windows::Forms::Label^ label1;

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
			this->ViewUserInfoButton = (gcnew System::Windows::Forms::Button());
			this->EditUserInfoButton = (gcnew System::Windows::Forms::Button());
			this->DeleteInfoButton = (gcnew System::Windows::Forms::Button());
			this->HelloUserLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// ViewUserInfoButton
			// 
			this->ViewUserInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewUserInfoButton->Location = System::Drawing::Point(437, 270);
			this->ViewUserInfoButton->Name = L"ViewUserInfoButton";
			this->ViewUserInfoButton->Size = System::Drawing::Size(302, 60);
			this->ViewUserInfoButton->TabIndex = 2;
			this->ViewUserInfoButton->Text = L"View My Info";
			this->ViewUserInfoButton->UseVisualStyleBackColor = true;
			this->ViewUserInfoButton->Click += gcnew System::EventHandler(this, &UserForm::ViewUserInfoButton_Click);
			// 
			// EditUserInfoButton
			// 
			this->EditUserInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditUserInfoButton->Location = System::Drawing::Point(437, 336);
			this->EditUserInfoButton->Name = L"EditUserInfoButton";
			this->EditUserInfoButton->Size = System::Drawing::Size(302, 60);
			this->EditUserInfoButton->TabIndex = 3;
			this->EditUserInfoButton->Text = L"Edit My Info";
			this->EditUserInfoButton->UseVisualStyleBackColor = true;
			this->EditUserInfoButton->Click += gcnew System::EventHandler(this, &UserForm::EditUserInfoButton_Click);
			// 
			// DeleteInfoButton
			// 
			this->DeleteInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteInfoButton->Location = System::Drawing::Point(437, 402);
			this->DeleteInfoButton->Name = L"DeleteInfoButton";
			this->DeleteInfoButton->Size = System::Drawing::Size(302, 60);
			this->DeleteInfoButton->TabIndex = 4;
			this->DeleteInfoButton->Text = L"Delete My Info";
			this->DeleteInfoButton->UseVisualStyleBackColor = true;
			this->DeleteInfoButton->Click += gcnew System::EventHandler(this, &UserForm::DeleteInfoButton_Click);
			// 
			// HelloUserLabel
			// 
			this->HelloUserLabel->AutoSize = true;
			this->HelloUserLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelloUserLabel->Location = System::Drawing::Point(474, 9);
			this->HelloUserLabel->Name = L"HelloUserLabel";
			this->HelloUserLabel->Size = System::Drawing::Size(188, 47);
			this->HelloUserLabel->TabIndex = 11;
			this->HelloUserLabel->Text = L"Hello User";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(924, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 47);
			this->label1->TabIndex = 12;
			this->label1->Text = L"...";
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1448, 586);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->HelloUserLabel);
			this->Controls->Add(this->DeleteInfoButton);
			this->Controls->Add(this->EditUserInfoButton);
			this->Controls->Add(this->ViewUserInfoButton);
			this->Name = L"UserForm";
			this->Text = L"User";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ViewUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditUserInfoButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void DeleteInfoButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
