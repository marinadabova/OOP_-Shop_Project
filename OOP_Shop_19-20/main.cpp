#include <iostream>
#include <string>
#include <cstring>
#include "Shop.h"
#include "User.h"
#include "Menu.h"
#include "Cart.h"
#include "Book.h"
#include "Product.h"
#include "Accessories.h"
#include "Lights.h"
#include"dispenserType.h"

using namespace std;

void sellProduct(dispenserType& product, Cart& pCounter) {

	int amount;  //variable to hold the amount entered

	int amount2; //variable to hold the extra amount needed
	if (product.getNoOfItems() > 0) {
		cout << "Please deposit " << product.getCost() << "$" << endl;
		cout << "Your cash: ";
		cin >> amount;
		while (amount < product.getCost()) {

			cout << "Please deposit another " << product.getCost() - amount << " $" << endl;

			cin >> amount2;

			amount = amount + amount2;

		}
		if (amount >= product.getCost()) {
			pCounter.acceptAmount(amount);
			product.makeSale();
			if (amount > product.getCost()) {
				cout << amount - product.getCost() << " $ is your change." << endl;
			}
		}
		else
			cout << "The amount is not enough. " << "Collect what you deposited." << endl;
	}
	else
		cout << "Sorry, this item is sold out." << endl;

}
void printBooks() {
	Book book1 = Book("'It'", "Stephen King ", 9.99, 1982127791, 4.6, 1184, "Scribner; Media Tie-In edition");
	Book book2("'City of Bones'", "Cassandra Clare ", 11.10, 1481455923, 4.4, 544, " Margaret K. McElderry Books 2015");
	Book book3 = Book("'Me Before You'", "Jojo Moyes ", 10.30, 67849553, 4.9, 400, "Penguin Books 2016");
	Book book4 = Book("'Where the Forest Meets the Stars'", "Glendy Vanderah ", 10.99, 1503904911, 4.7, 332, " Lake Union Publishing 2019");
	cout << "1. " << book1.getName() << "by " << book1.getAuthor() << endl << "Product details:" << endl << "Paperback for " << book1.getPrice() << " $" << endl << "ISBN:  " << book1.getISBN() << endl << "Rating:  " << book1.getRating() << " stars out of 5 " << endl << "This book has: " << book1.getPages() << "pages" << endl << "Publisher: " << book1.getPublisher() << endl;
	cout << endl;
	cout << "2. " << book2.getName() << "by " << book2.getAuthor() << endl << "Product details:" << endl << "Paperback for " << book2.getPrice() << " $" << endl << "ISBN:  " << book2.getISBN() << endl << "Rating:  " << book2.getRating() << " stars out of 5 " << endl << "This book has: " << book2.getPages() << "pages" << endl << "Publisher: " << book2.getPublisher() << endl;
	cout << endl;
	cout << "3. " << book3.getName() << "by " << book3.getAuthor() << endl << "Product details:" << endl << "Paperback for " << book3.getPrice() << " $" << endl << "ISBN:  " << book3.getISBN() << endl << "Rating:  " << book3.getRating() << " stars out of 5 " << endl << "This book has: " << book3.getPages() << "pages" << endl << "Publisher: " << book3.getPublisher() << endl;
	cout << endl;
	cout << "4. " << book4.getName() << "by " << book4.getAuthor() << endl << "Product details:" << endl << "Paperback for " << book4.getPrice() << " $" << endl << "ISBN:  " << book4.getISBN() << endl << "Rating:  " << book4.getRating() << " stars out of 5 " << endl << "This book has: " << book4.getPages() << "pages" << endl << "Publisher: " << book4.getPublisher() << endl;
	cout << endl;
}
void printAccessories() {
	Accessories accessories1 = Accessories("Bookmark", 2.21, 4.6, 17.1);
	Accessories accessories2 = Accessories("Fabric Book Cover", 7.67, 4.4, 44.7);
	Lights accessories3 = Lights("Reading Book Light", 12.99, 4.8, 158.75, 1, "Silicone and Plastic", "LED");
	Lights accessories4 = Lights("Neck Reading Light", 18.99, 4.7, 130.40, 1, "Abs, Rubber and Plastic", "LED");
	Lights accessories5 = Lights("Portable Bookmark Light for Reading", 12.99, 3.3, 113.39, 1, "ABS", "LED");
	cout << endl;
	cout << "1. " << accessories1.getName() << endl << "Product details:" << endl << "Lovely bookmark for " << accessories1.getPrice() << " $" << endl << "Rating:  " << accessories1.getRating() << " stars out of 5 " << endl << accessories1.getWeight() << " grams" << endl;
	cout << endl;
	cout << "2. " << accessories2.getName() << endl << "Product details:" << endl << "Fabric Book Cover for " << accessories2.getPrice() << " $" << endl << "Rating:  " << accessories2.getRating() << " stars out of 5 " << endl << accessories2.getWeight() << " grams" << endl;
	cout << endl;
	cout << "3. " << accessories3.getName() << endl << "Product details:" << endl << "Rechargeable Book Light for " << accessories3.getPrice() << " $" << endl << "Rating:  " << accessories3.getRating() << " stars out of 5 " << endl << accessories3.getWeight() << " grams" << endl << accessories3.getLightBulbWattage() << "  watts" << endl;
	cout << "Material: " << accessories3.getMaterial() << endl << "Bulb type: " << accessories3.getLightingBulbType() << endl;
	cout << endl;
	cout << "4. " << accessories4.getName() << endl << "Product details:" << endl << "Book Light for Reading in Bed for " << accessories4.getPrice() << " $" << endl << "Rating:  " << accessories4.getRating() << " stars out of 5 " << endl << accessories4.getWeight() << " grams" << endl << accessories4.getLightBulbWattage() << "  watts" << endl;
	cout << "Material: " << accessories4.getMaterial() << endl << "Bulb type: " << accessories4.getLightingBulbType() << endl;
	cout << endl;
	cout << "5. " << accessories5.getName() << endl << "Product details:" << endl << "Rechargeable Book Light for " << accessories5.getPrice() << " $" << endl << "Rating:  " << accessories5.getRating() << " stars out of 5 " << endl << accessories5.getWeight() << " grams" << endl << accessories5.getLightBulbWattage() << "  watts" << endl;
	cout << "Material: " << accessories5.getMaterial() << endl << "Bulb type: " << accessories5.getLightingBulbType() << endl;
	cout << endl;
}
void printGifts() {
	Product gift1 = Product("Mug 'Just One More Chapter'", 13.96, 4.8);
	Product gift2 = Product("Calendar ", 7.98, 4.8);
	Product gift3 = Product("Scented Candle, Library", 29.95, 3.9);
	Product gift4 = Product("Kindle E-reader", 249.99, 4.5);
	Product gift5 = Product("Monopoly Game: Marvel Edition", 29.99, 4.8);

	cout << endl;
	cout << "1. " << gift1.getName() << endl << "Product details:" << endl << "Lovely mug for " << gift1.getPrice() << " $" << endl << "Rating:  " << gift1.getRating() << " stars out of 5 " << endl;
	cout << endl;
	cout << "2. " << gift2.getName() << endl << "Product details:" << endl << "Calendar for " << gift2.getPrice() << " $" << endl << "Rating:  " << gift2.getRating() << " stars out of 5 " << endl;
	cout << endl;
	cout << "3. " << gift3.getName() << endl << "Product details:" << endl << "Scented Candle for " << gift3.getPrice() << " $" << endl << "Rating:  " << gift3.getRating() << " stars out of 5 " << endl;
	cout << endl;
	cout << "4. " << gift4.getName() << endl << "Product details:" << endl << "E-reader for " << gift4.getPrice() << " $" << endl << "Rating:  " << gift4.getRating() << " stars out of 5 " << endl;
	cout << endl; cout << endl;
	cout << "5. " << gift5.getName() << endl << "Product details:" << endl << "Game for " << gift5.getPrice() << " $" << endl << "Rating:  " << gift5.getRating() << " stars out of 5 " << endl;
	cout << endl;
}

void selectBooks() {
	bool end = false;
	char selectionOfBook;
	Cart counter;

	dispenserType book1(100, 9.99);
	dispenserType book2(100, 11.10);
	dispenserType book3(100, 10.30);
	dispenserType book4(75, 10.99);

	do {
		cout << "Please, choose which book you want to buy: ";
		cin >> selectionOfBook;
		cout << endl;
		switch (selectionOfBook) {
		case '1':
			sellProduct(book1, counter);
			cout << endl;
			cout << "You bought 'It' by Stephen King. " << endl << "Thanks for the purchase!" << endl;
			break;
		case'2':
			sellProduct(book2, counter);
			cout << endl;
			cout << "You bought 'City of Bones' by Cassandra Clare." << endl << "Thanks for the purchase!" << endl;
			break;
		case'3':
			sellProduct(book3, counter);
			cout << endl;
			cout << "You bought 'Me Before You' by Jojo Moyes." << endl << "Thanks for the purchase! " << endl;
			break;
		case'4':
			sellProduct(book4, counter);
			cout << endl;
			cout << "You bought 'Where the Forest Meets the Stars' by Glendy Vanderah." << endl << "Thanks for the purchase!" << endl;
			break;
		default:

			cout << "Invalid selection. Please,try again." << endl;
			
		}
		break;
	} while (end == false);


	if (end == false) {
		cout << endl;
		cout << "Do you want something ?" << endl;
		cout << endl;

	}
	else
		cout << "This product is not available in the moment." << endl;
}
void selectAccessories() {
	bool end = false;
	char selectionOfAccessories;
	Cart counter;

	dispenserType accessories1(100, 2.21);
	dispenserType accessories2(100, 7.67);
	dispenserType accessories3(100, 12.99);
	dispenserType accessories4(75, 18.99);
	dispenserType accessories5(75, 12.99);

	do {
		cout << "Please, choose which book you want to buy: ";
		cin >> selectionOfAccessories;
		cout << endl;
		switch (selectionOfAccessories) {
		case '1':
			sellProduct(accessories1, counter);
			cout << endl;
			cout << "You bought a bookmark." << endl << "Thanks for the purchase! " << endl;
			break;
		case'2':
			sellProduct(accessories2, counter);
			cout << endl;
			cout << "You bought a Fabric Book Cover." << endl << "Thanks for the purchase!" << endl;
			break;
		case'3':
			sellProduct(accessories3, counter);
			cout << endl;
			cout << "You bought Reading Book Light." << endl << "Thanks for the purchase! " << endl;
			break;
		case'4':
			sellProduct(accessories4, counter);
			cout << endl;
			cout << "You bought Neck Reading Light." << endl << "Thanks for the purchase! " << endl;
			break;
		case'5':
			sellProduct(accessories5, counter);
			cout << endl;
			cout << "You bought Portable Bookmark Light for Reading." << endl << "Thanks for the purchase! " << endl;
			break;
		
		default:
			cout << "Invalid selection. Please,try again." << endl;

		}
		break;
		
	} while (end == false);

	if (end == false) {
		cout << endl;
		cout << "Do you want something ?" << endl;
		cout << endl;

	}
	
	else
		cout << "This product is not available in the moment." << endl;
}
void selectGifts() {
	bool end = false;
	char selectionOfGifts;
	Cart counter;

	dispenserType gift1(100, 13.96);
	dispenserType gift2(100, 7.98);
	dispenserType gift3(100, 29.95);
	dispenserType gift4(75, 249.99);
	dispenserType gift5(75, 29.99);
	do {
		cout << "Please, choose which gift you want to buy: ";
		cin >> selectionOfGifts;
		cout << endl;
		switch (selectionOfGifts) {
		case '1':
			sellProduct(gift1, counter);
			cout << endl;
			cout << "You bought a Mug 'Just One More Chapter."<<endl<<"Thanks for the purchase!' " << endl;
			break;
		case'2':
			sellProduct(gift2, counter);
			cout << endl;
			cout << "You bought a Calendar." << endl << "Thanks for the purchase! " << endl;
			break;
		case'3':
			sellProduct(gift3, counter);
			cout << endl;
			cout << "You bought a Scented Candle." << endl << "Thanks for the purchase! " << endl;
			break;
		case'4':
			sellProduct(gift4, counter);
			cout << endl;
			cout << "You bought a Kindle." << endl << "Thanks for the purchase! " << endl;
			break;
		case'5':
			sellProduct(gift5, counter);
			cout << endl;
			cout << "You bought Monopoly Game: Marvel Edition." << endl << "Thanks for the purchase!" << endl;
			break;
		default:
			cout << "Invalid selection. Please,try again." << endl;

		}
		break;
	} while (end == false);

	if (end == false) {
		cout << endl;
		cout << "Do you want something ?" << endl;
		cout << endl;
	}
	else
		cout << "This product is not available in the moment." << endl;
}

int main() {
	
	Shop digitalShop("www.MyDigitalShop.bg/");

	int adrOfDigSh = NULL;
	int* ptr = &adrOfDigSh;
	cout << "---------------------------------- " << endl;
	cout << digitalShop.getAdress() << ptr << endl;
	cout << "---------------------------------- " << endl;

	char username[50];             //Lets imagine you have an account in my Online Shop then you have username and password 
	char password[50];                         //I am asking you to enter  username and imaginary password
	cout << "Please enter username / email: " << endl;
	cin >> username;
	cout << "Please enter password: " << endl;
	cin >> password;
	cout << endl;

	User user1(username, password);

	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"  << endl;
	cout << "                 LOGIN"  << endl;
	cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"  << endl;
	cout << "Hello " << user1.getUsername() << endl<<endl;
	
	

	Menu myMenu = Menu("Our digital shop is the best. If you like something be free to buy it.", "1.99", "Marina Dabova 0889736478");
	Menu myMenu2 = Menu("Our digital shop is the best. If you like something be free to buy it", "1.99", "Ivan Ivanov 0878675436");
	Menu myMenu3 = myMenu2;
	cout << myMenu.getInfo() << endl << "Our delivery to your house costs only " << myMenu.getDelivery() << " $" << endl;
	cout << "If you have questions be free to call our members: " << endl << myMenu.getContacts() << endl << myMenu3.getContacts() << endl;

	cout << endl;
	cout << "Welcome to our Online Shop." << endl << endl;
	Product products;

	bool end = false;

	do {
		cout << "You can choose whatever you want. " << endl;
		int input;
		cout << "Please select what you want to purchase" << endl;
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl; 
		cout<< "        " << "1 for BOOKS,   2 for ACCESSORIES,   3 for GIFTS,   0   for EXIT" << endl;
		cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl; 
		cout << "Choose: ";
		cin >> input;

		if (input == 1) {
			cout << "These are our books:\n";

			cout << "Books: " << endl;
			printBooks();
			selectBooks();
		}

		else if (input == 2) {
			cout << "These are our Accessories:\n";
			cout << "Accessories: " << endl;

			printAccessories();
			selectAccessories();
		}
		else if (input == 3) {
			cout << "These are our Gifts\n";
			cout << "Gifts: " << endl;
			printGifts();
			selectGifts();
		}
		else if ((input != '1') && (input != '2') && (input != '3')) {
			end = true;
			cout << "Thanks for choosing our shop!" << endl;
			break;
		}
	} while (end == false);



	return 0;

}