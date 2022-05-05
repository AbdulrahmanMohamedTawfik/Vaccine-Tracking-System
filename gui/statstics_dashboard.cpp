#include "statstics_dashboard.h"
#include<iostream>
using namespace std;
System::Void gui::statstics_dashboard::statstics_dashboard_Load(System::Object^ sender, System::EventArgs^ e)
{
	statstics stat;
	string s1, s2;
	s1 = to_string(stat.p_male());
	String^ syscontents1 = gcnew String(s1.c_str());//convert from std string to sys string
	s2 = to_string(stat.p_female());
	String^ syscontents2 = gcnew String(s2.c_str());//convert from std string to sys string
	cout << "s1= " << s1 << endl;
	cout << "s2= " << s2 << endl;
	chart1->Series["s1"]->Points[0]->SetValueXY("1k", syscontents1);
	chart1->Series["s1"]->Points[1]->SetValueXY("2k", syscontents2);
    return System::Void();
}
