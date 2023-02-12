#include <iostream>
#include <cstring>
#include<string>
#include "Shop.h"
#include "User.h"

#pragma warning(disable:4996)

using namespace std;

Shop::Shop() :adress(""), counter(0), products(nullptr), users(nullptr) {

}
Shop::Shop(string _adress) {
	this->adress = _adress;

}
Shop::Shop(int _counter, const Product* _products, const User* _users) {
	_counter = 0;

	setCounter(_counter);
	setProducts(_products);
	setUsers(_users);
}
Shop::Shop(const Shop& other_object) {
	setAdress(other_object.getAdress());
	setCounter(other_object.getCounter());
	setProducts(other_object.getProducts());
	setUsers(other_object.getUsers());

}
Shop& Shop:: operator=(const Shop& other_object) {
	if (this != &other_object) {                    //check if we are assingning the same object
		setAdress(other_object.getAdress());
		setProducts(other_object.getProducts());
		setUsers(other_object.getUsers());
		setCounter(other_object.getCounter());

	}
	return *this;
}
Shop::~Shop() {

	delete[] products;
	delete[] users;
}

void Shop::setAdress(string _adress) {
	this->adress = _adress;

}
string Shop::getAdress()const {
	return this->adress;
}

void Shop::setProducts(const Product* _products) {
	delete[]products;
	products = new Product[counter];
	for (int i = 0; i < counter; i++) {
		products[i] = _products[i];
	}
}
Product* Shop::getProducts()const {
	return this->products;
}
void Shop::setUsers(const User* _users) {
	delete[]users;
	users = new User[counter];
	for (int i = 0; i < counter; i++) {
		users[i] = _users[i];
	}
}
User* Shop::getUsers()const {
	return this->users;
}
void Shop::setCounter(int _counter) {
	this->counter = _counter;
}
int Shop::getCounter()const {
	return this->counter;
}