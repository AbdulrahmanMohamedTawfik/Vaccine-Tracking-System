#pragma once
#include <map>
#include <iostream>
#include "User.h"
using namespace std;


class Admin
{
private:
	string nationalID;
	string password;

public:
	Admin();
	string viewUser(string userNationalID, map<string, User> users);
	string viewAll(map<string, User> users);
	void deleteUser(string userNationalID, map<string, User>& users);
	void deleteAll(map<string, User>& users);
};