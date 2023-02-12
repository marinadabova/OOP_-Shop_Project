#include <iostream>
#include <string>
#include "Product.h"
#pragma warning(disable:4996)

using namespace std;
Product::Product() :name("  "), price(0),  rating(0) {
}

Product::Product( string _name, double _price, double _rating) {
	this->name = _name;
	this->price = _price;
	this->rating = _rating;

}
Product::Product(const Product& other_object) {

	setName(other_object.getName());
	setPrice(other_object.getPrice());
	setRating(other_object.getRating());
}
Product& Product::operator=(const Product& other_object) {
	if (this != &other_object) {
		
		setName(other_object.getName());
		this->price = other_object.price;
		this->rating = other_object.rating;
	}
	return *this;
}
bool Product::operator==(const Product& other_object) {
	return (name== other_object.getName() == 0 && price == other_object.getPrice() && rating == other_object.getRating());
}
void Product::setName( string _name) {
	this->name = _name;
}
 string Product::getName()const {
	return this->name;
}
void Product::setRating(double _rating) {
	this->rating = _rating;
}
double Product::getRating() const {
	return this->rating;
}
void Product::setPrice(double _price) {
	this->price = _price;
}
double Product::getPrice() const {
	return this->price;
}
void Product::print() const{
	cout << name << endl << price << endl << rating << endl;
	
}


