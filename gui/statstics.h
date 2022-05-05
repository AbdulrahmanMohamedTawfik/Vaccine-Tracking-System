#pragma once
#include <string>
class statstics
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
	string awaiting_users;
public:
	statstics();
	void getuser();
	void getmale();
	double p_male();
	double p_female();
	void getwaiting();
	double p_waiting();
	void get_vaccintiated();
	void getegypt();
	double p_first();
	double p_fully();
	double p_egypt();
	double p_abroad();
	string getAwaitingUsers();
	void setAwaitingUsers(string val);
};