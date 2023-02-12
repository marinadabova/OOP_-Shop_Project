#pragma once
#include <iostream>
#include <cstring>
#include<string>
#include "User.h"
#include "Product.h"

#pragma warning(disable:4996)
using namespace std;


class Shop {
private:
	string adress;
	int counter;
	Product* products;
	User* users;

public:

	Shop();
	Shop(string _adress);
	Shop(int counter, const Product* _products, const User* _users);
	Shop(const Shop& other_object);
	Shop& operator=(const Shop& other_object);
	~Shop();

	void setAdress(string _adress);
	string getAdress() const;
	void setCounter(int _counter);
	int getCounter()const;
	void setProducts(const Product*);
	Product* getProducts()const;
	void setUsers(const User*);
	User* getUsers()const;

};

