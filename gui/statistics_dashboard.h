#pragma once
#include"statistics.h"
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
	/// Summary for statistics_dashboard
	/// </summary>
	public ref class statistics_dashboard : public System::Windows::Forms::Form
	{
	public:
		statistics_dashboard(void)
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
		~statistics_dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ GenderChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ CountryChart;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ DoseChart;
	private: System::Windows::Forms::Label^ GenderLabel;
	private: System::Windows::Forms::Label^ CountryLabel;
	private: System::Windows::Forms::Label^ DoseLabel;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint1 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint2 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint3 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint4 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint5 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				3));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint6 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				5));
			System::Windows::Forms::DataVisualization::Charting::DataPoint^ dataPoint7 = (gcnew System::Windows::Forms::DataVisualization::Charting::DataPoint(0,
				0));
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->GenderChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->CountryChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->GenderLabel = (gcnew System::Windows::Forms::Label());
			this->CountryLabel = (gcnew System::Windows::Forms::Label());
			this->DoseLabel = (gcnew System::Windows::Forms::Label());
			this->DoseChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenderChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CountryChart))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DoseChart))->BeginInit();
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
			// CountryChart
			// 
			chartArea2->Name = L"ChartArea1";
			this->CountryChart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->CountryChart->Legends->Add(legend2);
			this->CountryChart->Location = System::Drawing::Point(542, 51);
			this->CountryChart->Name = L"CountryChart";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series2->Label = L"o";
			series2->Legend = L"Legend1";
			series2->Name = L"s1";
			dataPoint3->Color = System::Drawing::Color::Red;
			dataPoint3->Label = L"Egyptians";
			dataPoint4->Color = System::Drawing::Color::Cyan;
			dataPoint4->Label = L"Abroad";
			series2->Points->Add(dataPoint3);
			series2->Points->Add(dataPoint4);
			this->CountryChart->Series->Add(series2);
			this->CountryChart->Size = System::Drawing::Size(418, 300);
			this->CountryChart->TabIndex = 1;
			title2->Name = L"Title2";
			title2->Text = L"Country Chart";
			this->CountryChart->Titles->Add(title2);
			// 
			// GenderLabel
			// 
			this->GenderLabel->AutoSize = true;
			this->GenderLabel->Location = System::Drawing::Point(80, 364);
			this->GenderLabel->Name = L"GenderLabel";
			this->GenderLabel->Size = System::Drawing::Size(91, 17);
			this->GenderLabel->TabIndex = 2;
			this->GenderLabel->Text = L"GenderLabel";
			// 
			// CountryLabel
			// 
			this->CountryLabel->AutoSize = true;
			this->CountryLabel->Location = System::Drawing::Point(539, 364);
			this->CountryLabel->Name = L"CountryLabel";
			this->CountryLabel->Size = System::Drawing::Size(92, 17);
			this->CountryLabel->TabIndex = 3;
			this->CountryLabel->Text = L"CountryLabel";
			// 
			// DoseLabel
			// 
			this->DoseLabel->AutoSize = true;
			this->DoseLabel->Location = System::Drawing::Point(978, 364);
			this->DoseLabel->Name = L"DoseLabel";
			this->DoseLabel->Size = System::Drawing::Size(46, 17);
			this->DoseLabel->TabIndex = 5;
			this->DoseLabel->Text = L"label1";
			// 
			// DoseChart
			// 
			chartArea3->Name = L"ChartArea1";
			this->DoseChart->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->DoseChart->Legends->Add(legend3);
			this->DoseChart->Location = System::Drawing::Point(981, 51);
			this->DoseChart->Name = L"DoseChart";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series3->Label = L"o";
			series3->Legend = L"Legend1";
			series3->Name = L"s1";
			dataPoint5->Color = System::Drawing::Color::Red;
			dataPoint5->Label = L"Not vaccinated";
			dataPoint6->Color = System::Drawing::Color::Cyan;
			dataPoint6->Label = L"1st dose";
			dataPoint7->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataPoint7->Label = L"Both doses";
			series3->Points->Add(dataPoint5);
			series3->Points->Add(dataPoint6);
			series3->Points->Add(dataPoint7);
			this->DoseChart->Series->Add(series3);
			this->DoseChart->Size = System::Drawing::Size(418, 300);
			this->DoseChart->TabIndex = 4;
			title3->Name = L"Title2";
			title3->Text = L"Country Chart";
			this->DoseChart->Titles->Add(title3);
			// 
			// statistics_dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1055);
			this->Controls->Add(this->DoseLabel);
			this->Controls->Add(this->DoseChart);
			this->Controls->Add(this->CountryLabel);
			this->Controls->Add(this->GenderLabel);
			this->Controls->Add(this->CountryChart);
			this->Controls->Add(this->GenderChart);
			this->Name = L"statistics_dashboard";
			this->Text = L"Statstics Dashboard";
			this->Load += gcnew System::EventHandler(this, &statistics_dashboard::statistics_dashboard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->GenderChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CountryChart))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DoseChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void statistics_dashboard_Load(System::Object^ sender, System::EventArgs^ e);
	};
}
