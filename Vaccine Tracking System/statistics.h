#pragma once
#include <string>
class statistics
{
private:
	int users;
	int firstdoes;
	int fullyvac;
	int under18;
	int between18_60;
	int above60;

public:
	statistics();
	int getuser();
	int getmale();
	double p_male();
	double p_female();
	int getwaitingNotVacc();
	double p_waiting();
	void get_vaccinated();
	int getegypt();
	void getAge();
	double p_first();
	double p_fully();
	double p_egypt();
	double p_abroad();
	double p_under18();
	double p_between18_60();
	double p_above60();
};