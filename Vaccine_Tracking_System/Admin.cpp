#include "Admin.h"
using namespace std;

Admin::Admin()
{
	this->nationalID = "admin";
	this->password = "admin";
}

string Admin::viewUsername(string userNationalID, unordered_map<string, User> users)//Hello + username
{
	for (auto it : users) {
		if (it.first == userNationalID)
		{
			return (it.second.name);
		}
	}
	return("User");
}

string Admin::viewUser(string userNationalID, unordered_map<string, User> users)
{
	for (auto it : users) {
		if (it.first == userNationalID)
		{
			return ("Name: " + it.second.name + "\nID: " + it.second.id + "\nGender: " + it.second.gender + "\nAge: " + it.second.age + "\nCountry: " + it.second.Country + "\nGovernorate: " + it.second.Governorate + "\nStatus: " + it.second.status + "\n");
		}
	}
	return("User Not Found!");
}


string Admin::viewAll(unordered_map<string, User> users)
{
	string temp = "";
	for (auto it : users) {

		temp += ("Name: " + it.second.name + "\nID: " + it.second.id + "\npassword: " + it.second.password + "\nGender: " + it.second.gender + "\nAge: " + it.second.age + "\nCountry: " + it.second.Country + "\nGovernorate: " + it.second.Governorate + "\nStatus: " + it.second.status + "\n------------------------------\n");
	}
	if (temp == "")
		return("No Users Found");

	return temp;
}
string Admin::view_Waiting(unordered_map<string, User> users)
{
	string temp = "Waiting for first dose : \n_______________\n\n";
	for (auto it : users) {
		if (it.second.status == "not vaccinated")
			temp += ("Name: " + it.second.name + "\nID: " + it.second.id + "\n______________________________\n\n");
	}
	if (temp == "Waiting for first dose : ")
		temp += ("\nNo Users Waiting for first dose !\n______________________________");
	temp += "\nWaiting for second dose : \n_______________\n\n";
	for (auto it : users) {
		if (it.second.status == "vaccinated: only first dose")
			temp += ("Name: " + it.second.name + "\nID: " + it.second.id + "\n______________________________\n\n");
	}
	return temp;
}

void Admin::deleteUser(string userNationalID, unordered_map<string, User>& users)
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

void Admin::deleteAll(unordered_map<string, User>& users)
{
	users.clear();
}