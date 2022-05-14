#include "statistics_dashboard.h"
#include<iostream>
using namespace std;
System::Void gui::statistics_dashboard::statistics_dashboard_Load(System::Object^ sender, System::EventArgs^ e)
{
	statistics stat;
	string str1, str2, str3;
	//Gender Chart
	str1 = to_string(stat.round(stat.p_male()));
	str2 = to_string(stat.round(stat.p_female()));
	String^ syscontents1, ^ syscontents2, ^ syscontents3;
	syscontents1 = gcnew String(str1.c_str());//convert from std string to sys string
	syscontents2 = gcnew String(str2.c_str());//convert from std string to sys string
	GenderChart->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	GenderChart->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
	GenderLabel->Text = "Males = %" + syscontents1 + "\nFemales = %" + syscontents2;
	//Country Chart
	str1 = to_string(stat.round(stat.p_egypt()));
	str2 = to_string(stat.round(stat.p_abroad()));
	syscontents1 = gcnew String(str1.c_str());
	syscontents2 = gcnew String(str2.c_str());
	CountryChart->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	CountryChart->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
	CountryLabel->Text = "Egyptians = %" + syscontents1 + "\nAbroad = %" + syscontents2;
	//Status Chart
	str1 = to_string(stat.round(stat.p_waiting()));//not vaccinated
	str2 = to_string(stat.round(stat.p_first()));
	str3 = to_string(stat.round(stat.p_fully()));
	syscontents1 = gcnew String(str1.c_str());
	syscontents2 = gcnew String(str2.c_str());
	syscontents3 = gcnew String(str3.c_str());
	DoseChart->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	DoseChart->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
	DoseChart->Series["s1"]->Points[2]->SetValueXY("2k", syscontents3);
	DoseLabel->Text = "Not vaccinated = %" + syscontents1 + "\nVaccinated: First dose = %" + syscontents2 + "\nVaccinated: Both doses= %" + syscontents3;
	//Age Chart
	str1 = to_string(stat.round(stat.p_under18()));//not vaccinated
	str2 = to_string(stat.round(stat.p_between18_60()));
	str3 = to_string(stat.round(stat.p_above60()));
	syscontents1 = gcnew String(str1.c_str());
	syscontents2 = gcnew String(str2.c_str());
	syscontents3 = gcnew String(str3.c_str());
	AgeChart->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	AgeChart->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
	AgeChart->Series["s1"]->Points[2]->SetValueXY("2k", syscontents3);
	AgeLabel->Text = "Under 18 = %" + syscontents1 + "\nBetween 18 and 60 = %" + syscontents2 + "\nAbove 60 = %" + syscontents3;
	WindowState = FormWindowState::Maximized;
	return System::Void();
}
