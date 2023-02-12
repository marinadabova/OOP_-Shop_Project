#include <iostream>
#include <cstring>
#include "Cart.h"
#include "Product.h"
#pragma warning(disable:4996)
using namespace std;

Cart::Cart() :products(nullptr), numberProducts(0), cash(0){

}

Cart::Cart(const Product* _products, int _numberProducts,int _cashIn) {
	setProducts(_products);
	setNumberProducts(_numberProducts);
	if (_cashIn >= 0)
		cash = _cashIn;
	else
		cash = 500;
}

Cart::Cart(const Cart& other_object) {
	setProducts(other_object.getProducts());
	setNumberProducts(other_object.getNumberProducts());
	cash = other_object.cash;

}
Cart& Cart:: operator= (const Cart& other_object) {
	if (this != &other_object) {
		delete[]this->products;
		setProducts(other_object.getProducts());
		setNumberProducts(other_object.getNumberProducts());

	}
	return *this;
}

Cart::~Cart() {
	delete[] products;
}
void Cart::setProducts(const Product* _product) {

	delete[]products;
	products = new Product[numberProducts];
	for (int i = 0; i < numberProducts; i++) {
		products[i] = _product[i];
	}

}
Product* Cart::getProducts()const {
	return this->products;
}
void Cart::setNumberProducts(int _numberProducts) {
	this->numberProducts = _numberProducts;
}

int Cart::getNumberProducts()const {
	return this->numberProducts;
}
int Cart::getCurrentBalance() const{
	return cash;
}
void Cart::acceptAmount(int amountIn){
	cash = cash + amountIn;
}
