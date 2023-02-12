#include <iostream>
#include <string>
using namespace std;
#include "Accessories.h"
#include "Lights.h"
Lights::Lights() :material(""), lightBulbWattage(0), lightingBulbType(" "){

}
Lights::Lights(string _name, double _price, double _rating, double _weight, int _watts, string _material, string _bulbType): Accessories( _name,  _price,  _rating, _weight){
	this->lightBulbWattage = _watts;
	this->material = _material;
	this->lightingBulbType = _bulbType;

}
Lights::Lights(const Lights& other_object) : Accessories(other_object) {
	setMaterial(other_object.getMaterial());
	setLightBulbWattage(other_object.getLightBulbWattage());
	setLightingBulbType(other_object.getLightingBulbType());
}
Lights& Lights::operator=(const Lights& other_object) {
	if (this != &other_object) {
	
		setMaterial(other_object.getMaterial());
		setLightBulbWattage(other_object.getLightBulbWattage());
		setLightingBulbType(other_object.getLightingBulbType());
	}
	return *this;
	Accessories::operator=(other_object);
}
void Lights::setMaterial(string _type) {
	this->material = _type;
}
string Lights::getMaterial()const {
	return this->material;
}
void Lights::setLightBulbWattage(int _watts) {
	this->lightBulbWattage = _watts;
}
int Lights::getLightBulbWattage() const {
	return this->lightBulbWattage;
}
void Lights::setLightingBulbType(string _Btype) {
	this->lightingBulbType = _Btype;
}
string Lights::getLightingBulbType()const {
	return this->lightingBulbType;
}