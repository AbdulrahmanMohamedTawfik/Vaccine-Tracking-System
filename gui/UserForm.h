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
			EditNameButton->Hide();
			EditIDButton->Hide();
			EditGendrButton->Hide();
			EditAgeButton->Hide();
			EditCountryButton->Hide();
			EditGovButton->Hide();
			EditStatusButton->Hide();
			NewvalueLabel->Hide();
			NewvalueTextBox->Hide();
			EditPassButton->Hide();
			SubmitButton->Hide();
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
	private: System::Windows::Forms::Button^ EditNameButton;
	private: System::Windows::Forms::Button^ EditIDButton;
	private: System::Windows::Forms::Button^ EditGendrButton;
	private: System::Windows::Forms::Button^ EditAgeButton;
	private: System::Windows::Forms::Button^ EditCountryButton;
	private: System::Windows::Forms::Button^ EditGovButton;
	private: System::Windows::Forms::Button^ EditStatusButton;
	private: System::Windows::Forms::TextBox^ NewvalueTextBox;








	private: System::Windows::Forms::Label^ NewvalueLabel;
	private: System::Windows::Forms::Button^ SubmitButton;
	private: System::Windows::Forms::Button^ EditPassButton;




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
			this->EditNameButton = (gcnew System::Windows::Forms::Button());
			this->EditIDButton = (gcnew System::Windows::Forms::Button());
			this->EditGendrButton = (gcnew System::Windows::Forms::Button());
			this->EditAgeButton = (gcnew System::Windows::Forms::Button());
			this->EditCountryButton = (gcnew System::Windows::Forms::Button());
			this->EditGovButton = (gcnew System::Windows::Forms::Button());
			this->EditStatusButton = (gcnew System::Windows::Forms::Button());
			this->NewvalueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NewvalueLabel = (gcnew System::Windows::Forms::Label());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->EditPassButton = (gcnew System::Windows::Forms::Button());
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
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(1059, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 47);
			this->label1->TabIndex = 12;
			// 
			// EditNameButton
			// 
			this->EditNameButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditNameButton->Location = System::Drawing::Point(816, 51);
			this->EditNameButton->Name = L"EditNameButton";
			this->EditNameButton->Size = System::Drawing::Size(176, 42);
			this->EditNameButton->TabIndex = 13;
			this->EditNameButton->Text = L"Edit Name";
			this->EditNameButton->UseVisualStyleBackColor = true;
			this->EditNameButton->Click += gcnew System::EventHandler(this, &UserForm::EditNameButton_Click);
			// 
			// EditIDButton
			// 
			this->EditIDButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditIDButton->Location = System::Drawing::Point(816, 99);
			this->EditIDButton->Name = L"EditIDButton";
			this->EditIDButton->Size = System::Drawing::Size(176, 42);
			this->EditIDButton->TabIndex = 14;
			this->EditIDButton->Text = L"Edit ID";
			this->EditIDButton->UseVisualStyleBackColor = true;
			this->EditIDButton->Click += gcnew System::EventHandler(this, &UserForm::EditIDButton_Click);
			// 
			// EditGendrButton
			// 
			this->EditGendrButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditGendrButton->Location = System::Drawing::Point(816, 147);
			this->EditGendrButton->Name = L"EditGendrButton";
			this->EditGendrButton->Size = System::Drawing::Size(176, 42);
			this->EditGendrButton->TabIndex = 15;
			this->EditGendrButton->Text = L"Edit gender";
			this->EditGendrButton->UseVisualStyleBackColor = true;
			this->EditGendrButton->Click += gcnew System::EventHandler(this, &UserForm::EditGendrButton_Click);
			// 
			// EditAgeButton
			// 
			this->EditAgeButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditAgeButton->Location = System::Drawing::Point(816, 195);
			this->EditAgeButton->Name = L"EditAgeButton";
			this->EditAgeButton->Size = System::Drawing::Size(176, 42);
			this->EditAgeButton->TabIndex = 16;
			this->EditAgeButton->Text = L"Edit age";
			this->EditAgeButton->UseVisualStyleBackColor = true;
			this->EditAgeButton->Click += gcnew System::EventHandler(this, &UserForm::EditAgeButton_Click);
			// 
			// EditCountryButton
			// 
			this->EditCountryButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditCountryButton->Location = System::Drawing::Point(816, 243);
			this->EditCountryButton->Name = L"EditCountryButton";
			this->EditCountryButton->Size = System::Drawing::Size(176, 42);
			this->EditCountryButton->TabIndex = 17;
			this->EditCountryButton->Text = L"Edit country";
			this->EditCountryButton->UseVisualStyleBackColor = true;
			this->EditCountryButton->Click += gcnew System::EventHandler(this, &UserForm::EditCountryButton_Click);
			// 
			// EditGovButton
			// 
			this->EditGovButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditGovButton->Location = System::Drawing::Point(816, 291);
			this->EditGovButton->Name = L"EditGovButton";
			this->EditGovButton->Size = System::Drawing::Size(176, 42);
			this->EditGovButton->TabIndex = 18;
			this->EditGovButton->Text = L"Edit gov";
			this->EditGovButton->UseVisualStyleBackColor = true;
			this->EditGovButton->Click += gcnew System::EventHandler(this, &UserForm::EditGovButton_Click);
			// 
			// EditStatusButton
			// 
			this->EditStatusButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditStatusButton->Location = System::Drawing::Point(816, 339);
			this->EditStatusButton->Name = L"EditStatusButton";
			this->EditStatusButton->Size = System::Drawing::Size(176, 42);
			this->EditStatusButton->TabIndex = 19;
			this->EditStatusButton->Text = L"Edit status";
			this->EditStatusButton->UseVisualStyleBackColor = true;
			this->EditStatusButton->Click += gcnew System::EventHandler(this, &UserForm::EditStatusButton_Click);
			// 
			// NewvalueTextBox
			// 
			this->NewvalueTextBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewvalueTextBox->Location = System::Drawing::Point(513, 96);
			this->NewvalueTextBox->Name = L"NewvalueTextBox";
			this->NewvalueTextBox->Size = System::Drawing::Size(266, 54);
			this->NewvalueTextBox->TabIndex = 20;
			// 
			// NewvalueLabel
			// 
			this->NewvalueLabel->AutoSize = true;
			this->NewvalueLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NewvalueLabel->Location = System::Drawing::Point(253, 103);
			this->NewvalueLabel->Name = L"NewvalueLabel";
			this->NewvalueLabel->Size = System::Drawing::Size(199, 47);
			this->NewvalueLabel->TabIndex = 21;
			this->NewvalueLabel->Text = L"New value :";
			// 
			// SubmitButton
			// 
			this->SubmitButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->SubmitButton->Location = System::Drawing::Point(410, 178);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(128, 42);
			this->SubmitButton->TabIndex = 22;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &UserForm::SubmitButton_Click);
			// 
			// EditPassButton
			// 
			this->EditPassButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12));
			this->EditPassButton->Location = System::Drawing::Point(816, 387);
			this->EditPassButton->Name = L"EditPassButton";
			this->EditPassButton->Size = System::Drawing::Size(176, 42);
			this->EditPassButton->TabIndex = 23;
			this->EditPassButton->Text = L"Edit pass";
			this->EditPassButton->UseVisualStyleBackColor = true;
			this->EditPassButton->Click += gcnew System::EventHandler(this, &UserForm::EditPassButton_Click);
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1448, 586);
			this->Controls->Add(this->EditPassButton);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->NewvalueLabel);
			this->Controls->Add(this->NewvalueTextBox);
			this->Controls->Add(this->EditStatusButton);
			this->Controls->Add(this->EditGovButton);
			this->Controls->Add(this->EditCountryButton);
			this->Controls->Add(this->EditAgeButton);
			this->Controls->Add(this->EditGendrButton);
			this->Controls->Add(this->EditIDButton);
			this->Controls->Add(this->EditNameButton);
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
	
	private: System::Void EditNameButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditIDButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditGendrButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditAgeButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditCountryButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditGovButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditStatusButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EditPassButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
