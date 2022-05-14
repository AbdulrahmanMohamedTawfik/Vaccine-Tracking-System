#include <iostream>
#include "statistics.h"
#include <vector>
#include <fstream>
#include <string>
using namespace std;
statistics::statistics() {
	users = 0;
	male = 0;
	female = 0;
	waiting = 0;
	egyptians = 0;
	forgienrs = 0;
	firstdoes = 0;
	fullyvac = 0;
	double under18=0;
	double between18_60=0;
	double above60=0;
}
//function to get number of users
void statistics::getuser() {
	string myText;
	vector<string> s;
	ifstream MyReadFile("txts\\users.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			s.push_back(myText);
		}
	}
	users = 0;
	vector<string>::iterator it;
	it = s.begin();
	while (it != s.end())
	{
		it++;
		users++;
	}
	MyReadFile.close();
}
//function to get numbers of males and females 
void statistics::getmale() {
	string myText;
	vector<string> s;
	ifstream MyReadFile("txts\\gender.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			s.push_back(myText);
		}
	}
	male = 0;
	female = 0;
	vector<string>::iterator it;
	it = s.begin();
	while (it != s.end())
	{
		if (*it == "male") {
			male++;
		}
		else if (*it == "female") {
			female++;
		}
		it++;
	}
	MyReadFile.close();
}
//calcutaions of the % of male
double statistics::p_male() {
	getuser();
	getmale();
	double x = (male / users) * 100;
	return x;
}
//calcutaions of the % of female
double statistics::p_female() {
	getuser();
	getmale();
	double y = (female / users) * 100;
	return y;
}
//function gets the number of people in waiting list
void statistics::getwaiting() {
	string myText;
	vector<string> s;
	ifstream MyReadFile("txts\\status.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			s.push_back(myText);
		}
	}
	waiting = 0;
	vector<string>::iterator it;
	it = s.begin();
	while (it != s.end())
	{
		if (*it == "not vaccinated") {
			waiting++;
		}
		it++;
	}
	MyReadFile.close();
}
//calcutaion of the % of waiting list
double statistics::p_waiting() {
	getuser();
	getwaiting();
	double z = (waiting / users) * 100;
	return z;
}
//function gets the number of users in egypt and other
void statistics::getegypt() {
	string myText;
	vector<string> s;
	ifstream MyReadFile("txts\\country.txt");
	while (getline(MyReadFile, myText))
	{
		if (myText.size() > 0) {
			s.push_back(myText);
		}
	}
	egyptians = 0;
	forgienrs = 0;
	vector<string>::iterator it;
	it = s.begin();
	while (it != s.end())
	{
		if (*it == "Egypt") {
			egyptians++;
		}
		else forgienrs++;
		it++;
	}
	MyReadFile.close();
}
//calcutaion of the % of egyptians 
double statistics::p_egypt() {
	getuser();
	getegypt();
	double g = (egyptians / users) * 100;
	return g;
}
//calcutaion of the % of abroad
double statistics::p_abroad() {
	getuser();
	getegypt();
	double k = (forgienrs / users) * 100;
	return k;
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
	vector<string>::iterator it;
	it = s.begin();
	while (it != s.end())
	{
		if (*it == "vaccinated: only first dose") {
			firstdoes++;
		}
		else if (*it == "vaccinated: both doses") {
			fullyvac++;
		}
		it++;
	}
	MyReadFile.close();
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
	
	vector<string>::iterator it;
	it = s.begin();
	under18 = 0;
	between18_60 = 0;
	above60 = 0;
	while (it != s.end())
	{
		if (stoi(*it) <= 18) {
			under18++;
		}
		else if (stoi(*it) >= 60) {
			above60++;
		}
		else
			between18_60++;
		it++;
	}
	MyReadFile.close();
}
//calcutaion of the % of first dose
double statistics::p_first() {
	getuser();
	get_vaccinated();
	double f = (firstdoes / users) * 100;
	return f;
}
double statistics::p_under18() {
	getuser();
	getAge();
	double f = (under18 / users) * 100;
	return f;
}
double statistics::p_between18_60() {
	getuser();
	getAge();
	double f = (between18_60 / users) * 100;
	return f;
}
double statistics::p_above60() {
	getuser();
	getAge();
	double f = (above60 / users) * 100;
	return f;
}
//calcutaion of the % of fully
double statistics::p_fully() {
	getuser();
	get_vaccinated();
	double g = (fullyvac / users) * 100;
	return g;
}
