#include <iostream>
#include <string>
using namespace std;
#include "dispenserType.h"

dispenserType::dispenserType():numberOfItems(0),cost(0){

}

int dispenserType::getNoOfItems() const{
	return numberOfItems;
}
double dispenserType::getCost() const{
	return cost;
}
void dispenserType::makeSale(){
	numberOfItems--;
}
dispenserType::dispenserType(int setNoOfItems, double setCost) {
	if (setNoOfItems >= 0)
		numberOfItems = setNoOfItems;
	else
		numberOfItems = 50;

	if (setCost >= 0)
		cost = setCost;
	else
		cost = 50;
}