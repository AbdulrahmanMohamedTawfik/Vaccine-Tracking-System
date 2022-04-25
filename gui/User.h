#pragma once
#include <string>
#include <map>
using namespace std;

class User
{
	
private:
	static string NAtIDTextBox_Text;	  
	bool del_user_found;
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
	void update_files(map<string, User>& users);
	void login(string, string);
	void registration(string FullName, string NatID, string Pass, string Genderr, string Agee, string Countryy, string Gov, string Statuss);
	~User();
	string static getNAtIDTextBox_Text();
	void static setNAtIDTextBox_Text(string val);
	string getUserName(map<string, User>& users);
	bool getdel_user_found();
	void setdel_user_found(bool val);

	void editId(string id, map<string, User>& users);
	void editName(string name, map<string, User>& users);
	void editGender(string gender, map<string, User>& users);
	void editAge(string age, map<string, User>& users);
	void editCountry(string Country,map<string, User>& users);
	void editGov(string gov, map<string, User>& users);
	void editPassword(string password, map<string, User>& users);
	void editStatus(string age, map<string, User>& users);
	
};
