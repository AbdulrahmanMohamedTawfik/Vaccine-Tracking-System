#pragma once
#include <string>
class statistics
{
private:
	double users;
	double male;
	double female;
	double waiting;
	double firstdoes;
	double fullyvac;
	double egyptians;
	double forgienrs;
	double under18;
	double between18_60;
	double above60;

	//string awaiting_users;
public:
	statistics();
	void getuser();
	void getmale();
	double p_male();
	double p_female();
	void getwaiting();
	double p_waiting();
	void get_vaccinated();
	void getegypt();
	void getAge();
	double p_first();
	double p_fully();
	double p_egypt();
	double p_abroad();
	double p_under18();
	double p_between18_60();
	double p_above60();
	double round(double var);
	/*string getAwaitingUsers();
	void setAwaitingUsers(string val);*/
};