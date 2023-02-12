#pragma once

#include <iostream>
#include <string>
using namespace std;
class dispenserType{
private:
	int numberOfItems;   
	double cost;  
public:
	dispenserType();
	int getNoOfItems() const;
	double getCost() const;
	void makeSale();
	dispenserType(int setNoOfItems = 50, double setCost = 50);
};