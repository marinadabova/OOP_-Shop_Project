#include <iostream>
#include <string>
using namespace std;
#include "Accessories.h"
#include "Product.h"
Accessories::Accessories() : weight(0){

}
Accessories::Accessories(string _name, double _price, double _rating, double _weight) : Product(_name, _price, _rating) {
		this->weight = _weight;
}
Accessories::Accessories(const Accessories& other_object) :Product(other_object) {
	setWeight(other_object.getWeight());

}
Accessories& Accessories::operator=(const Accessories& other_object) {
	if (this != &other_object) {
		setWeight(other_object.getWeight());
	}
	return *this;
	Product::operator=(other_object);
}

void Accessories::setWeight(double _kg) {
	this->weight = _kg;
}
double Accessories::getWeight() const {
	return this->weight;
}