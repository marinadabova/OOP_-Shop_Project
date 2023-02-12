#include <iostream>
#include <string>
#include "Menu.h"
using namespace std;

Menu::Menu() :info(""), delivery(""), contacts("") {}
Menu::Menu(string _info, string _delivery, string _contacts) {
	setInfo(_info);
	setDelivery(_delivery);
	setContacts(_contacts);
}
Menu::Menu(const Menu& other_object) {
	setInfo(other_object.getInfo());
	setDelivery(other_object.getDelivery());
	setContacts(other_object.getContacts());
}
Menu& Menu:: operator=(const Menu& other_object) {
	if (this != &other_object) {

		setInfo(other_object.getInfo());
		setDelivery(other_object.getDelivery());
		setContacts(other_object.getContacts());

	}
	return *this;

}
/*Menu::~Menu() {

	delete[] info;
	delete[] delivery;
	delete[] contacts;

}*/


void Menu::setInfo(string _info) {

	this->info = _info;
}
string Menu::getInfo()const {
	return this->info;
}
void Menu::setDelivery(string _delivery) {

	this->delivery = _delivery;
}
string Menu::getDelivery()const {
	return this->delivery;
}
void Menu::setContacts(string _contacts) {

	this->contacts = _contacts;

}
string Menu::getContacts()const {
	return this->contacts;
}

