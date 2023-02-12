#pragma once
#include <iostream>
#include <string>
using namespace std;

class Product {
private:

	string name;
	double price;
	double rating;
	
public:
	Product();
	Product( string _name, double _price, double _rating);
	Product(const Product& other_object);
	Product& operator=(const Product& other_object);
	bool operator==(const Product& other_object);

	void setName( string _name);
	string getName() const;	
	void setPrice(double _price);
	double getPrice() const;	
	void setRating(double _rating);
	double getRating()const;
	void print() const;
};