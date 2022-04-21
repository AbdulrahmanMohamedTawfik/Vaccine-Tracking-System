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
			this->SuspendLayout();
			// 
			// ViewUserInfoButton
			// 
			this->ViewUserInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewUserInfoButton->Location = System::Drawing::Point(437, 81);
			this->ViewUserInfoButton->Name = L"ViewUserInfoButton";
			this->ViewUserInfoButton->Size = System::Drawing::Size(302, 60);
			this->ViewUserInfoButton->TabIndex = 2;
			this->ViewUserInfoButton->Text = L"View My Info";
			this->ViewUserInfoButton->UseVisualStyleBackColor = true;
			// 
			// EditUserInfoButton
			// 
			this->EditUserInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditUserInfoButton->Location = System::Drawing::Point(437, 147);
			this->EditUserInfoButton->Name = L"EditUserInfoButton";
			this->EditUserInfoButton->Size = System::Drawing::Size(302, 60);
			this->EditUserInfoButton->TabIndex = 3;
			this->EditUserInfoButton->Text = L"Edit My Info";
			this->EditUserInfoButton->UseVisualStyleBackColor = true;
			// 
			// DeleteInfoButton
			// 
			this->DeleteInfoButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteInfoButton->Location = System::Drawing::Point(437, 213);
			this->DeleteInfoButton->Name = L"DeleteInfoButton";
			this->DeleteInfoButton->Size = System::Drawing::Size(302, 60);
			this->DeleteInfoButton->TabIndex = 4;
			this->DeleteInfoButton->Text = L"Delete My Info";
			this->DeleteInfoButton->UseVisualStyleBackColor = true;
			// 
			// User
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1221, 586);
			this->Controls->Add(this->DeleteInfoButton);
			this->Controls->Add(this->EditUserInfoButton);
			this->Controls->Add(this->ViewUserInfoButton);
			this->Name = L"User";
			this->Text = L"User";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
