#pragma once
#include <string>
#include <map>
using namespace std;
class User
{
public:
	string name;
	string id;
	string gender;
	string age;
	string Country;
	string Governorate;
	string password;
	string status;
	bool correct_pass;
	bool correct_NatId;
public:
	User() {};
	User(string name, string id, string gender, string age, string Country, string Governorate, string password, string status) {
		this->name = name;
		this->id = id;
		this->gender = gender;
		this->age = age;
		this->Country = Country;
		this->Governorate = Governorate;
		this->password = password;
		this->status = status;
	};
	bool check_id(string x);
	//void display();
	void read_data(map<string, User>& users);
	void login(string, string);
	void registration(string FullName, string NatID, string Pass, string Genderr, string Agee, string Countryy, string Gov, string Statuss);
	~User();
};