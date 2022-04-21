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
	private: System::Windows::Forms::Button^ LoginButton;
	private: System::Windows::Forms::Button^ RegisterButton;
	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Label^ label1;
	protected:



	protected:

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
			this->LoginButton = (gcnew System::Windows::Forms::Button());
			this->RegisterButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->Location = System::Drawing::Point(351, 266);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(128, 60);
			this->LoginButton->TabIndex = 0;
			this->LoginButton->Text = L"Login";
			this->LoginButton->UseVisualStyleBackColor = true;
			this->LoginButton->Click += gcnew System::EventHandler(this, &start::LoginButton_Click);
			// 
			// RegisterButton
			// 
			this->RegisterButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RegisterButton->Location = System::Drawing::Point(548, 266);
			this->RegisterButton->Name = L"RegisterButton";
			this->RegisterButton->Size = System::Drawing::Size(180, 60);
			this->RegisterButton->TabIndex = 1;
			this->RegisterButton->Text = L"Register";
			this->RegisterButton->UseVisualStyleBackColor = true;
			this->RegisterButton->Click += gcnew System::EventHandler(this, &start::RegisterButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->Location = System::Drawing::Point(452, 359);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(128, 60);
			this->ExitButton->TabIndex = 2;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = true;
			this->ExitButton->Click += gcnew System::EventHandler(this, &start::ExitButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(469, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 47);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Hello";
			this->label1->Click += gcnew System::EventHandler(this, &start::label1_Click);
			// 
			// start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1349, 523);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->RegisterButton);
			this->Controls->Add(this->LoginButton);
			this->Name = L"start";
			this->Text = L"start";
			this->Load += gcnew System::EventHandler(this, &start::start_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void RegisterButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void start_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
