#pragma once
#include"statstics.h"
//#include<iostream>
using namespace std;
namespace gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for statstics_dashboard
	/// </summary>
	public ref class statstics_dashboard : public System::Windows::Forms::Form
	{
	public:
		statstics_dashboard(void)
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
		~statstics_dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ GenderChart;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->GenderChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenderChart))->BeginInit();
			this->SuspendLayout();
			// 
			// GenderChart
			// 
			chartArea1->Name = L"ChartArea1";
			this->GenderChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->GenderChart->Legends->Add(legend1);
			this->GenderChart->Location = System::Drawing::Point(83, 51);
			this->GenderChart->Name = L"GenderChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Label = L"o";
			series1->Legend = L"Legend1";
			series1->Name = L"s1";
			dataPoint1->Color = System::Drawing::Color::RoyalBlue;
			dataPoint1->Label = L"Males";
			dataPoint2->Color = System::Drawing::Color::HotPink;
			dataPoint2->Label = L"Females";
			series1->Points->Add(dataPoint1);
			series1->Points->Add(dataPoint2);
			this->GenderChart->Series->Add(series1);
			this->GenderChart->Size = System::Drawing::Size(418, 300);
			this->GenderChart->TabIndex = 0;
			title1->Name = L"Title1";
			title1->Text = L"Gender Chart";
			this->GenderChart->Titles->Add(title1);
			// 
			// statstics_dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->GenderChart);
			this->Name = L"statstics_dashboard";
			this->Text = L"statstics_dashboard";
			this->Load += gcnew System::EventHandler(this, &statstics_dashboard::statstics_dashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenderChart))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void statstics_dashboard_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
