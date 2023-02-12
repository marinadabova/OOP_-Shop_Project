#include <iostream>
#include <string>
using namespace std;
#include "Book.h"
#include "Product.h"
Book::Book():author(""),ISBN(0),pages(0),publisher("") {

}
Book::Book(string _name, string _author, double _price, int _ISBN, double _rating, int _pages, string _publisher):Product(_name,_price,_rating){

this->author = _author;
this->ISBN = _ISBN;
this->pages = _pages;
this->publisher = _publisher;

}
Book::Book(const Book& other_object):Product(other_object) {

	setAuthor(other_object.getAuthor());
	setISBN(other_object.getISBN());
	setPages(other_object.getPages());
	setPublisher(other_object.getPublisher());
	
}
Book& Book::operator=(const Book& other_object) {
	if (this != &other_object) {
		setAuthor(other_object.getAuthor());
		setISBN(other_object.getISBN());
		setPages(other_object.getPages());
		setPublisher(other_object.getPublisher());
		
	}
	return *this;
	Product::operator=(other_object);

}

void Book::setAuthor( string _author) {
	this->author=_author;
}
 string Book::getAuthor()const {
	return this->author;
}
void Book::setISBN(int _ISBN) {
	this->ISBN = _ISBN;
}
int Book::getISBN() const {
	return this->ISBN;
}
void Book::setPages(int _pages) {
	this->pages = _pages;
}
int Book::getPages() const {
	return this->pages;
}
void Book::setPublisher( string _publisher) {
	this->publisher =_publisher;
}
 string Book::getPublisher()const {
	return this->publisher;
}
 void Book::printBooks() const {
	 print();

	 cout <<author << endl << ISBN << endl << pages<<endl<<publisher << endl;

 }

