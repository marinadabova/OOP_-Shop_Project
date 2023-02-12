#pragma once
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

class Book : public Product {
private:
	string author;
	int ISBN;        //International Standard Book Number
	int pages;
	string publisher;
	
public:
	Book();
	Book(string _name, string _author, double _price, int _ISBN, double _rating, int _pages, string _publisher);
	Book(const Book& other_object);
	Book& operator=(const Book& other_object);
	void setAuthor( string _author);
	 string getAuthor() const;
	void setISBN(int _ISBN);
	int getISBN()const;
	void setPages(int _pages);
	int getPages()const;
	void setPublisher( string _publisher);
	string getPublisher() const;
	void printBooks()const;
};
