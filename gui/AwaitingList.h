#pragma once

namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AwaitingList
	/// </summary>
	public ref class AwaitingList : public System::Windows::Forms::Form
	{
	public:
		AwaitingList(void)
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
		~AwaitingList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ AwaitingLabel;
	protected:

	protected:




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
			this->AwaitingLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// AwaitingLabel
			// 
			this->AwaitingLabel->AutoSize = true;
			this->AwaitingLabel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AwaitingLabel->Location = System::Drawing::Point(667, 93);
			this->AwaitingLabel->Name = L"AwaitingLabel";
			this->AwaitingLabel->Size = System::Drawing::Size(44, 47);
			this->AwaitingLabel->TabIndex = 7;
			this->AwaitingLabel->Text = L"...";
			this->AwaitingLabel->Click += gcnew System::EventHandler(this, &AwaitingList::UserInfoLabel_Click);
			// 
			// AwaitingList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1356, 619);
			this->Controls->Add(this->AwaitingLabel);
			this->Name = L"AwaitingList";
			this->Text = L"Awaiting List";
			this->Load += gcnew System::EventHandler(this, &AwaitingList::AwaitingList_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void AwaitingList_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UserInfoLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
