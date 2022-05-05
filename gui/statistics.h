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
	double p_first();
	double p_fully();
	double p_egypt();
	double p_abroad();
	/*string getAwaitingUsers();
	void setAwaitingUsers(string val);*/
};