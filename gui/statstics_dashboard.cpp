#include "statistics_dashboard.h"
#include<iostream>
using namespace std;
System::Void gui::statistics_dashboard::statistics_dashboard_Load(System::Object^ sender, System::EventArgs^ e)
{
	statistics stat;
	string s1, s2, s3;
	s1 = to_string(stat.p_male());
	s2 = to_string(stat.p_female());
	String^ syscontents1, ^ syscontents2, ^ syscontents3;
	syscontents1 = gcnew String(s1.c_str());//convert from std string to sys string
	syscontents2 = gcnew String(s2.c_str());//convert from std string to sys string
	GenderChart->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	GenderChart->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
	GenderLabel->Text = "Males = %" + syscontents1 + "\nFemales = %" + syscontents2;
	s1 = to_string(stat.p_egypt());
	s2 = to_string(stat.p_abroad());
	syscontents1 = gcnew String(s1.c_str());
	syscontents2 = gcnew String(s2.c_str());
	CountryChart->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	CountryChart->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
	CountryLabel->Text = "Egyptians = %" + syscontents1 + "\nAbroad = %" + syscontents2;
	s1 = to_string(stat.p_waiting());//not vaccinated
	s2 = to_string(stat.p_first());
	s3 = to_string(stat.p_fully());
	cout << "s1= " << s1 << endl;
	cout << "s2= " << s2 << endl;
	cout << "s3= " << s3 << endl;
	syscontents1 = gcnew String(s1.c_str());
	syscontents2 = gcnew String(s2.c_str());
	syscontents3 = gcnew String(s3.c_str());
	DoseChart->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	DoseChart->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
	DoseChart->Series["s1"]->Points[2]->SetValueXY("2k", syscontents3);
	DoseLabel->Text = "Not vaccinated = %" + syscontents1 + "\nvaccinated: First dose = %" + syscontents2 + "\nvaccinated: Both doses= %" + syscontents3;
	return System::Void();
}
