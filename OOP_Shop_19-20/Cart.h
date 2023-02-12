#pragma once
#include <iostream>
#include <cstring>
#include "Product.h"
#pragma warning(disable:4996)
using namespace std;

class Cart {
private:
	Product* products;
	int numberProducts;
	int cash;
public:
	Cart();
	Cart(const Product* _products, int numberProducts, int cashIn = 500);
	Cart(const Cart&);
	Cart& operator= (const Cart& other_object);
	~Cart();

	void setProducts(const Product*);
	Product* getProducts()const;
	void setNumberProducts(int _numberProducts);
	int getNumberProducts()const;
	int getCurrentBalance() const;
	void acceptAmount(int amountIn);
};

