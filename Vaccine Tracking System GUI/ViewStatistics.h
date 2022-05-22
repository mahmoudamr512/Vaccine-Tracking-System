#pragma once
#include "Backend/Statistics.h"
#include "Backend/FileStream.h"
#include "Backend/Users.h"
#include <map>
#include <msclr/marshal_cppstd.h>

namespace VaccineTrackingSystemGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	/// <summary>
	/// Summary for ViewStatistics
	/// </summary>
	public ref class ViewStatistics : public System::Windows::Forms::Form
	{
		
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	public:
		Statistics* st;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart6;

	public:
		FileStream* fs;
		ViewStatistics(void)
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
		~ViewStatistics()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(77, 1803);
			this->chart1->Name = L"chart1";
			series1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series1->IsValueShownAsLabel = true;
			series1->LabelForeColor = System::Drawing::Color::White;
			series1->LabelFormat = L"{0}%";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::BrightPastel;
			series1->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series1->ShadowOffset = 6;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(691, 467);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Name = L"Title1";
			title1->Text = L"Gender";
			this->chart1->Titles->Add(title1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Eras Bold ITC", 28.2F));
			this->label2->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->label2->Location = System::Drawing::Point(660, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 54);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Statistics";
			// 
			// chart2
			// 
			chartArea2->AxisX->MajorGrid->Enabled = false;
			chartArea2->AxisY->MajorGrid->Enabled = false;
			chartArea2->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart2->Legends->Add(legend2);
			this->chart2->Location = System::Drawing::Point(21, 140);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series2->ChartArea = L"ChartArea1";
			series2->IsValueShownAsLabel = true;
			series2->Legend = L"Legend1";
			series2->Name = L"Males";
			series2->YValuesPerPoint = 4;
			series3->ChartArea = L"ChartArea1";
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series3->IsValueShownAsLabel = true;
			series3->Legend = L"Legend1";
			series3->Name = L"Females";
			this->chart2->Series->Add(series2);
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(1346, 392);
			this->chart2->TabIndex = 4;
			// 
			// chart4
			// 
			chartArea3->AxisX->MajorGrid->Enabled = false;
			chartArea3->AxisY->MajorGrid->Enabled = false;
			chartArea3->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart4->Legends->Add(legend3);
			this->chart4->Location = System::Drawing::Point(21, 555);
			this->chart4->Name = L"chart4";
			this->chart4->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series4->BorderColor = System::Drawing::Color::Coral;
			series4->ChartArea = L"ChartArea1";
			series4->Color = System::Drawing::Color::Salmon;
			series4->IsValueShownAsLabel = true;
			series4->Legend = L"Legend1";
			series4->Name = L"First Dose";
			series4->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			series5->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series5->ChartArea = L"ChartArea1";
			series5->IsValueShownAsLabel = true;
			series5->Legend = L"Legend1";
			series5->Name = L"Second Dose";
			this->chart4->Series->Add(series4);
			this->chart4->Series->Add(series5);
			this->chart4->Size = System::Drawing::Size(1346, 418);
			this->chart4->TabIndex = 6;
			// 
			// chart3
			// 
			chartArea4->AxisX->MajorGrid->Enabled = false;
			chartArea4->AxisY->MajorGrid->Enabled = false;
			chartArea4->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart3->Legends->Add(legend4);
			this->chart3->Location = System::Drawing::Point(21, 962);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series6->BorderColor = System::Drawing::Color::Coral;
			series6->ChartArea = L"ChartArea1";
			series6->Color = System::Drawing::Color::Indigo;
			series6->Legend = L"Legend1";
			series6->Name = L"First Dose";
			series6->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			series7->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series7->ChartArea = L"ChartArea1";
			series7->Color = System::Drawing::Color::RoyalBlue;
			series7->Legend = L"Legend1";
			series7->Name = L"Second Dose";
			series8->ChartArea = L"ChartArea1";
			series8->Legend = L"Legend1";
			series8->Name = L"None";
			this->chart3->Series->Add(series6);
			this->chart3->Series->Add(series7);
			this->chart3->Series->Add(series8);
			this->chart3->Size = System::Drawing::Size(1346, 418);
			this->chart3->TabIndex = 7;
			// 
			// chart5
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart5->Legends->Add(legend5);
			this->chart5->Location = System::Drawing::Point(772, 1810);
			this->chart5->Name = L"chart5";
			series9->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Pie;
			series9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series9->IsValueShownAsLabel = true;
			series9->LabelForeColor = System::Drawing::Color::White;
			series9->LabelFormat = L"{0}%";
			series9->Legend = L"Legend1";
			series9->Name = L"Series1";
			series9->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::BrightPastel;
			series9->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series9->ShadowOffset = 6;
			this->chart5->Series->Add(series9);
			this->chart5->Size = System::Drawing::Size(604, 472);
			this->chart5->TabIndex = 8;
			this->chart5->Text = L"chart5";
			title2->Name = L"Title1";
			title2->Text = L"Doses";
			this->chart5->Titles->Add(title2);
			// 
			// chart6
			// 
			chartArea6->AxisX->MajorGrid->Enabled = false;
			chartArea6->AxisY->MajorGrid->Enabled = false;
			chartArea6->Name = L"ChartArea1";
			this->chart6->ChartAreas->Add(chartArea6);
			legend6->Name = L"Legend1";
			this->chart6->Legends->Add(legend6);
			this->chart6->Location = System::Drawing::Point(32, 1386);
			this->chart6->Name = L"chart6";
			this->chart6->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series10->BorderColor = System::Drawing::Color::Coral;
			series10->ChartArea = L"ChartArea1";
			series10->Color = System::Drawing::Color::DeepSkyBlue;
			series10->Legend = L"Legend1";
			series10->Name = L"First Dose";
			series10->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			series11->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			series11->ChartArea = L"ChartArea1";
			series11->Color = System::Drawing::Color::LimeGreen;
			series11->Legend = L"Legend1";
			series11->Name = L"Second Dose";
			this->chart6->Series->Add(series10);
			this->chart6->Series->Add(series11);
			this->chart6->Size = System::Drawing::Size(1335, 418);
			this->chart6->TabIndex = 9;
			// 
			// ViewStatistics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1458, 968);
			this->Controls->Add(this->chart6);
			this->Controls->Add(this->chart5);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chart1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ViewStatistics";
			this->Text = L"ViewStatistics";
			this->Load += gcnew System::EventHandler(this, &ViewStatistics::ViewWaitingList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ViewWaitingList_Load(System::Object^ sender, System::EventArgs^ e) {
		st = new Statistics(fs);

		std::map <std::string, Statistics::GovStatsDetails>governorateStatistics = st->getGovernorateStatistics();
		std::map<std::string, std::pair<int, int>>AgeDoses = st->getAgeDoses();

		array<String^>^ govs = gcnew array<String^>(27);
		array<int>^ males = gcnew array<int>(27);
		array<int>^ females = gcnew array<int>(27);
		array<int>^ firstDose = gcnew array<int>(27);
		array<int>^ secondDose = gcnew array<int>(27);
		array<float>^ firstDosePercent = gcnew array <float> (27);
		array<float>^ secondDosePercent = gcnew array<float>(27);
		array<float>^ NoDosePercent = gcnew array<float>(27);
		array<String^>^ ageRange = gcnew array<String^>(3);
		array<int>^ FirstDoseAgeRange = gcnew array<int>(3);
		array<int>^ SecondDoseAgeRange = gcnew array<int>(3);


		int index = 0;
		for (auto i : governorateStatistics) {
			govs[index] = marshal_as<String^>(i.first);
			males[index] = i.second.males;
			females[index] = i.second.females;
			firstDose[index] = i.second.firstDose;
			secondDose[index] = i.second.secondDose;
			secondDosePercent[index] = round(((float)i.second.secondDose / (i.second.males + i.second.females))*100);
			firstDosePercent[index] = round(((float) i.second.firstDose / (i.second.males + i.second.females)) * 100) - secondDosePercent[index];
			NoDosePercent[index] = 100.0 - (firstDosePercent[index] + secondDosePercent[index]);
			index++;
		}
		index = 0;
		for (auto i : AgeDoses) {
			ageRange[index] = marshal_as<String^>(i.first);
			FirstDoseAgeRange[index] = i.second.first;
			SecondDoseAgeRange[index] = i.second.second;
			index++;
		}

		this->chart1->Series["Series1"]->Points->AddXY("Male", st->getMalesSystem());
		this->chart1->Series["Series1"]->Points[0]->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
			static_cast<System::Int32>(static_cast<System::Byte>(91)));
		this->chart1->Series["Series1"]->Points->AddXY("Female", st->getFemalesSystem());
		this->chart1->Series["Series1"]->Points[0]->Color = 
			System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(231)), 
			static_cast<System::Int32>(static_cast<System::Byte>(84)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));

		this->chart2->Series[0]->Points->DataBindXY(govs, males);
		this->chart2->Series[1]->Points->DataBindXY(govs, females);
		this->chart2->ChartAreas[0]->AxisX->Interval = 1;

		this->chart4->Series["First Dose"]->Points->DataBindXY(govs, firstDose);
		this->chart4->Series["Second Dose"]->Points->DataBindXY(govs, secondDose);
		this->chart4->ChartAreas[0]->AxisX->Interval = 1;


		// Percentages Chart.
		this->chart3->Series["First Dose"]->Points->DataBindXY(govs, firstDosePercent);
		this->chart3->Series["Second Dose"]->Points->DataBindXY(govs, secondDosePercent);
		this->chart3->Series["None"]->Points->DataBindXY(govs, NoDosePercent);
		this->chart3->ChartAreas[0]->AxisX->Interval = 1;
		this->chart3->ChartAreas[0]->AxisY->LabelStyle->Format = "{0.00}%";


		// AgeRange Doses. 
		this->chart6->Series["First Dose"]->Points->DataBindXY(ageRange, FirstDoseAgeRange);
		this->chart6->Series["Second Dose"]->Points->DataBindXY(ageRange, SecondDoseAgeRange);

		// FirstDose 
		float seconddose = st->getSecondDoseSystem();
		float firstdose = st->getFirstDoseSystem() - seconddose;

		this->chart5->Series["Series1"]->Points->AddXY("First Dose", (firstdose));
		this->chart5->Series["Series1"]->Points->AddXY("Second Dose", seconddose);
		this->chart5->Series["Series1"]->Points->AddXY("None", 100 - (firstdose+ seconddose));



	}
	};
}
