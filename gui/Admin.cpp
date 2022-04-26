#include "Admin.h"
using namespace std;

Admin::Admin()
{
	this->nationalID = "admin";
	this->password = "admin";
}

string Admin::viewUsername(string userNationalID, map<string, User> users)//Hello + username
{
	for (auto it : users) {
		if (it.first == userNationalID)
		{
			return (it.second.name);
		}
	}
	return("User");
}

string Admin::viewUser(string userNationalID, map<string, User> users)
{
	for (auto it : users) {
		if (it.first == userNationalID)
		{
			return ("Name: " + it.second.name + "\nId: " + it.second.id + "\nGender: " + it.second.gender + "\nAge: " + it.second.age + "\nCountry: " + it.second.Country + "\nGovernorate: " + it.second.Governorate + "\nStatus: " + it.second.status + "\n");
		}
	}
	return("User Not Found!");
}

string Admin::viewAll(map<string, User> users)
{
	string temp;
	for (auto it : users) {

		temp += ("Name: " + it.second.name + "\nId: " + it.second.id + "\nGender: " + it.second.gender + "\nAge: " + it.second.age + "\nCountry: " + it.second.Country + "\nGovernorate: " + it.second.Governorate + "\nStatus: " + it.second.status + "\n");
		temp += "------------------------------\n";
	}
	return temp;
}

void Admin::deleteUser(string userNationalID, map<string, User>& users)
{
	User u;
	if (u.check_id(userNationalID))
	{
		u.setdel_user_found(true);
		users.erase(userNationalID);
	}
	else
	{
		u.setdel_user_found(false);
	}
}

void Admin::deleteAll(map<string, User>& users)
{
	users.clear();
}