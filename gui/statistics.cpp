#include <iostream>
#include "statistics.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;

statistics::statistics() {
	users = 0;
	firstdoes = 0;
	fullyvac = 0;
	under18=0;
	between18_60=0;
	above60=0;
}

//function to get number of users
int statistics::getuser() {
	string myText;
	users = 0;
	ifstream MyReadFile("txts\\users.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			users++;
		}
	}
	MyReadFile.close();
	return users;
}

//function to get numbers of males and females 
int statistics::getmale() {
	string myText;
	int male = 0;
	ifstream MyReadFile("txts\\gender.txt");
	while (getline(MyReadFile, myText))
	{
		cout << myText << endl;
		if (myText.size() > 0) {
			if (myText == "male") {
				male++;
			}
		}
	}
	MyReadFile.close();
	return male;
}
//calcutaions of the % of male
double statistics::p_male() {
	users = getuser();
	int male = getmale();
	double x = ((double)male / users) * 100;
	return x;
}
//calcutaions of the % of female
double statistics::p_female() {
	users = getuser();
	int female = users - getmale();
	double y = ((double)female / users) * 100;
	return y;
}

//function gets the number of people in waiting list
int statistics::getwaitingNotVacc() {
	string myText;
	int waiting = 0;
	ifstream MyReadFile("txts\\status.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			if (myText == "not vaccinated") {
				waiting++;
			}
		}
	}
	MyReadFile.close();
	return waiting;
}
//calcutaion of the % of waiting list
double statistics::p_waiting() {
	users = getuser();
	int waiting = getwaitingNotVacc();
	double z = ((double)waiting / users) * 100;
	return z;
}

void statistics::get_vaccinated() {
	string myText;
	vector<string> s;
	ifstream MyReadFile("txts\\status.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			s.push_back(myText);
		}
	}
	firstdoes = 0;
	fullyvac = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == "vaccinated: only first dose") {
			firstdoes++;
		}
		else if (s[i] == "vaccinated: both doses") {
			fullyvac++;
		}
	}
	MyReadFile.close();
}
//calcutaion of the % of first dose
double statistics::p_first() {
	users = getuser();
	get_vaccinated();
	double f = ((double)firstdoes / users) * 100;
	return f;
}
//calcutaion of the % of fully
double statistics::p_fully() {
	users = getuser();
	get_vaccinated();
	double g = ((double)fullyvac / users) * 100;
	return g;
}

void statistics::getAge() {
	string myText;
	vector<string> s;
	ifstream MyReadFile("txts\\age.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			s.push_back(myText);
		}
	}
	under18 = 0;
	between18_60 = 0;
	above60 = 0;
	for (int i = 0; i < s.size(); i++) {
		if (stoi(s[i]) <= 18) {
			under18++;
		}
		else if (stoi(s[i]) >= 60) {
			above60++;
		}
		else
			between18_60++;
	}
	MyReadFile.close();
}
double statistics::p_under18() {
	users = getuser();
	getAge();
	double f = ((double)under18 / users) * 100;
	return f;
}
double statistics::p_between18_60() {
	users = getuser();
	getAge();
	double f = ((double)between18_60 / users) * 100;
	return f;
}
double statistics::p_above60() {
	users = getuser();
	getAge();
	double f = ((double)above60 / users) * 100;
	return f;
}

//function gets the number of users in egypt and other
int statistics::getegypt() {
	string myText;
	int egyptians = 0;
	ifstream MyReadFile("txts\\country.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			if (myText == "Egypt") {
				egyptians++;
			}
		}
	}
	MyReadFile.close();
	return egyptians;
}
//calcutaion of the % of egyptians 
double statistics::p_egypt() {
	users = getuser();
	int egyptians = getegypt();
	double g = ((double)egyptians / users) * 100;
	return g;
}
//calcutaion of the % of abroad
double statistics::p_abroad() {
	users = getuser();
	int forgienrs = users -getegypt();
	double k = ((double)forgienrs / users) * 100;
	return k;
}