#pragma once
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class Accessories : public Product {
private:
	double weight;

public:
	Accessories();
	Accessories(string _name, double _price, double _rating, double _weight);
	Accessories(const Accessories& other_object);
	Accessories& operator=(const Accessories& other_object);
	void setWeight(double _kg);
	double getWeight()const;

};