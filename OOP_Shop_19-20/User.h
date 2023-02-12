#pragma once
#include <iostream>
#include <string>
using namespace std;

class User {
private:
	string username;
	string password;

	void setPassword(string _password);
	string getPassword()const;
public:
	User();
	User(string _username, string _password);
	User(const User& other_object);
	User& operator=(const User& other_object);
	//	~User();

	void setUsername(string _username);
	string getUsername()const;


	void printInfo() const;
};

