#pragma once
#include <iostream>
#include <string>
#include "Accessories.h"
using namespace std;

class Lights : public Accessories {
private:
	
	int lightBulbWattage;
	string material;
	string lightingBulbType;
public:
	Lights();
	Lights(string _name, double _price, double _rating, double _weight, int _watts, string _material,string _bulbType);
	Lights(const Lights& other_object);
	Lights& operator=(const Lights& other_object);

	void setMaterial(string _type);
	string getMaterial()const;
	void setLightBulbWattage(int _watts);
	int getLightBulbWattage()const;
	void setLightingBulbType(string _Btype);
	string getLightingBulbType()const;
};