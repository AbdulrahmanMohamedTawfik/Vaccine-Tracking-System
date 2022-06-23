#pragma once
#include <unordered_map>
#include <iostream>
#include <queue>
#include "User.h"
using namespace std;
class Admin
{
private:
	string nationalID;
	string password;

public:
	Admin();
	string viewUsername(string userNationalID, unordered_map<string, User> users);
	string viewUser(string userNationalID, unordered_map<string, User> users);
	string viewAll(unordered_map<string, User> users);
	
	void deleteAll();
	string view_notVaccUsersList(queue<User>& notVaccUsers);
	string view_oneDoseVaccUsersList(queue<User>& oneDoseVaccUsers);
	string fill_WaitingList(unordered_map<string, User> users);
};