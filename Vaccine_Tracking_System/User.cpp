#include "User.h"
#include <iostream>
#include <fstream>
#include <unordered_map>

using namespace std;
string User::NAtIDTextBox_Text;
bool User::del_user_found;
bool User::volume_on;
unordered_map<string, User>::iterator it;

bool User::check_id(string id)
{
	fstream IDFile;
	IDFile.open("txts\\id.txt", ios::in);
	if (IDFile.is_open())
	{
		string line;
		while (getline(IDFile, line))
		{
			if (line == id)
				return true;
		}
		return false;
	}
}

void User::read_data(unordered_map<string, User>& users) {
	fstream userFile, idFile, ageFile, countryFile, govFile, passFile, statusFile, genderFile;
	userFile.open("txts\\users.txt", ios::in);
	idFile.open("txts\\id.txt", ios::in);
	ageFile.open("txts\\age.txt", ios::in);
	countryFile.open("txts\\country.txt", ios::in);
	govFile.open("txts\\governorate.txt", ios::in);
	passFile.open("txts\\pass.txt", ios::in);
	statusFile.open("txts\\status.txt", ios::in);
	genderFile.open("txts\\gender.txt", ios::in);

	string name, id, gender, age, Country, Governorate, password, status;

	while (getline(idFile, id)) {
		getline(userFile, name);
		getline(ageFile, age);
		getline(countryFile, Country);
		getline(govFile, Governorate);
		getline(passFile, password);
		getline(statusFile, status);
		getline(genderFile, gender);

		User user1(name, id, gender, age, Country, Governorate, password, status);
		users.insert(pair<string, User>(id, user1));
	}

	userFile.close();
	idFile.close();
	ageFile.close();
	countryFile.close();
	govFile.close();
	passFile.close();
	statusFile.close();
	genderFile.close();
}

void User::update_files(unordered_map<string, User>& users)
{
	fstream userFile, idFile, ageFile, countryFile, govFile, passFile, statusFile, genderFile;
	userFile.open("txts\\users.txt", ofstream::out | ofstream::trunc);
	idFile.open("txts\\id.txt", ofstream::out | ofstream::trunc);
	ageFile.open("txts\\age.txt", ofstream::out | ofstream::trunc);
	countryFile.open("txts\\country.txt", ofstream::out | ofstream::trunc);
	govFile.open("txts\\governorate.txt", ofstream::out | ofstream::trunc);
	passFile.open("txts\\pass.txt", ofstream::out | ofstream::trunc);
	statusFile.open("txts\\status.txt", ofstream::out | ofstream::trunc);
	genderFile.open("txts\\gender.txt", ofstream::out | ofstream::trunc);

	for (auto it : users)
	{
		userFile << it.second.name + '\n';
		idFile << it.second.id + '\n';
		ageFile << it.second.age + '\n';
		countryFile << it.second.Country + '\n';
		govFile << it.second.Governorate + '\n';
		passFile << it.second.password + '\n';
		statusFile << it.second.status + '\n';
		genderFile << it.second.gender + '\n';
	}

	userFile.close();
	idFile.close();
	ageFile.close();
	countryFile.close();
	govFile.close();
	passFile.close();
	statusFile.close();
	genderFile.close();
}

void User::login(string natID, string pass)
{
	int indexofuser;
	int counter = 0;
	id = natID;
	password = pass;
	fstream id_File;
	fstream pass_File;
	id_File.open("txts\\id.txt", ios::in);
	if (id_File.is_open())
	{
		string line;
		bool flag = false;
		while (getline(id_File, line))
		{
			counter++;

			if (line == id)
			{
				indexofuser = counter;
				flag = true;
				break;
			}

		}

		if (flag)
		{
			pass_File.open("txts\\pass.txt", ios::in);
			if (pass_File.is_open())
			{
				int c = 0;
				string line;
				while (getline(pass_File, line))
				{
					c++;
					if (c == indexofuser)
					{
						if (password == line)
						{
							//cout << "\n----\nhi" << "\n----\n";
							correct_NatId = true;
							correct_pass = true;
						}
						else
						{
							//cout << "sorry incorrect password!\n";
							correct_pass = false;
						}
					}

				}

			}

		}
		else
		{
			//cout << "sorry there is no user with this id!\n";
			correct_NatId = false;
		}

	}

	id_File.close();
	pass_File.close();
}

void User::registration(string FullName, string NatID, string Pass, string Gender, string Age, string Country, string Gov, string Status)
{
	fstream File;
	File.open("txts\\users.txt", ios::app);
	if (File.is_open())
	{
		File << FullName + '\n';
	}
	File.close();

	File.open("txts\\id.txt", ios::app);
	if (File.is_open())
	{

		File << NatID + '\n';
	}
	File.close();

	File.open("txts\\age.txt", ios::app);
	if (File.is_open())
	{

		File << Age + '\n';
	}
	File.close();

	File.open("txts\\country.txt", ios::app);
	if (File.is_open())
	{

		File << Country + '\n';
	}
	File.close();

	File.open("txts\\governorate.txt", ios::app);
	if (File.is_open())
	{

		File << Gov + '\n';
	}
	File.close();

	File.open("txts\\pass.txt", ios::app);
	if (File.is_open())
	{

		File << Pass + '\n';
	}
	File.close();

	File.open("txts\\status.txt", ios::app);
	if (File.is_open())
	{

		File << Status + '\n';
	}
	File.close();

	File.open("txts\\gender.txt", ios::app);
	if (File.is_open())
	{
		File << Gender + '\n';
	}
	File.close();

	User user1(FullName, NatID, Gender, Age, Country, Gov, Pass, Status);
}

string User::getNAtIDTextBox_Text()
{
	return NAtIDTextBox_Text;
}
void User::setNAtIDTextBox_Text(string val)
{
	NAtIDTextBox_Text = val;
}

void User::getUserName(unordered_map<string, User>& users)
{
	NameText = users[getNAtIDTextBox_Text()].name;
}

bool User::getdel_user_found()
{
	return del_user_found;
}
void User::setdel_user_found(bool val)
{
	del_user_found = val;
}

bool User::getvol_on()
{
	return volume_on;
}
void User::setvol_on(bool val)
{
	volume_on = val;
}

void User::editName(string newName, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].name = newName;
}
void User::editId(string newId, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].id = newId;
}
void User::editGender(string newGender, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].gender = newGender;
}
void User::editCountry(string newCountry, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].Country = newCountry;
}
void User::editAge(string newAge, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].age = newAge;
}
void User::editStatus(string newStatus, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].status = newStatus;
}
void User::editPassword(string newPassword, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].password = newPassword;
}
void User::editGov(string newGov, unordered_map<string, User>& users) {
	users[getNAtIDTextBox_Text()].Governorate = newGov;
}
