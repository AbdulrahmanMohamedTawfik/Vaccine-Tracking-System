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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(403, 12);
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
			this->A_M_T_Label->AutoSize = true;
			this->A_M_T_Label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->A_M_T_Label->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->A_M_T_Label->ForeColor = System::Drawing::Color::Black;
			this->A_M_T_Label->Location = System::Drawing::Point(382, 193);
			this->A_M_T_Label->Name = L"A_M_T_Label";
			this->A_M_T_Label->Size = System::Drawing::Size(284, 34);
			this->A_M_T_Label->TabIndex = 3;
			this->A_M_T_Label->Text = L"Abdulrahman Mohamed";
			// 
			// AboutUs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1169, 528);
			this->Controls->Add(this->A_M_T_Label);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"AboutUs";
			this->Text = L"AboutUs";
			this->Load += gcnew System::EventHandler(this, &AboutUs::AboutUs_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AboutUs_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
