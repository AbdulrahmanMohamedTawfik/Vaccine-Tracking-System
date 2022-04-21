#pragma once

namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserInfo
	/// </summary>
	public ref class UserInfo : public System::Windows::Forms::Form
	{
	public:
		UserInfo(void)
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
		~UserInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ UserInfoLabel;
	protected:

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
			this->UserInfoLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// UserInfoLabel
			// 
			this->UserInfoLabel->AutoSize = true;
			this->UserInfoLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserInfoLabel->Location = System::Drawing::Point(613, 90);
			this->UserInfoLabel->Name = L"UserInfoLabel";
			this->UserInfoLabel->Size = System::Drawing::Size(44, 47);
			this->UserInfoLabel->TabIndex = 8;
			this->UserInfoLabel->Text = L"...";
			// 
			// UserInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1471, 542);
			this->Controls->Add(this->UserInfoLabel);
			this->Name = L"UserInfo";
			this->Text = L"UserInfo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
