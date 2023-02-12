#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Menu {
private:
	string info;
	string delivery;
	string contacts;

public:
	Menu();
	Menu(string _info, string _delivery, string _contacts);
	Menu(const Menu& other_object);
	Menu& operator=(const Menu& other_object);
	//~Menu();

	void setInfo(string _info);
	string getInfo()const;
	void setDelivery(string _delivery);
	string getDelivery()const;
	void setContacts(string _contacts);
	string getContacts()const;


};