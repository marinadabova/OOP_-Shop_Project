#include <iostream>
#include <string>
#include "User.h"
#include "Shop.h"

using namespace std;

User::User() :username(""), password(" ") {

}
User::User(string _username, string _password) {
	setUsername(_username);
	setPassword(_password);

}
User::User(const User& other_object) {
	setUsername(other_object.getUsername());
	setPassword(other_object.getPassword());
}

User& User:: operator=(const User& other_object) {
	if (this != &other_object) {                          //check if we are assingning the same object
		setUsername(other_object.getUsername());

		setPassword(other_object.getPassword());

	}

	return *this;
}

/*User::~User() {

	delete[] this->username;
	delete[] this->password;

}*/
void User::setUsername(string _username) {
	this->username = _username;
}
string User::getUsername()const {
	return this->username;
}
void User::setPassword(string _password) {
	this->password = _password;
}
string User::getPassword()const {
	return this->password;
}

void User::printInfo() const {
	if (username != "") {
		cout << this << " " << username << "|" << password << "\n";
	}
}
