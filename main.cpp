#include <iostream>
#include <string>
#include "ItemToPurchase.h"

using namespace std;


int main() {
	ItemToPurchase itemOne;
	string tempString;
	int tempInt;
	cout<< "Item 1" << endl << "Enter the item name:" << endl;
	getline(cin, tempString);
	itemOne.SetName(tempString);
	cout << "Enter the item price:" << endl;
	cin >> tempInt;
	itemOne.SetPrice(tempInt);
	cout << "Enter the item quantity:" << endl;
	cin >> tempInt;
	itemOne.SetQuantity(tempInt);
	cout << endl;
	cin.ignore();

	ItemToPurchase itemTwo;
	cout<< "Item 2" << endl << "Enter the item name:" << endl;
	getline(cin, tempString);
	itemTwo.SetName(tempString);
	cout << "Enter the item price:" << endl;
	cin >> tempInt;
	itemTwo.SetPrice(tempInt);
	cout << "Enter the item quantity:" << endl;
	cin >> tempInt;
	itemTwo.SetQuantity(tempInt);
	cout << endl;

	cout << "TOTAL COST" << endl;
	cout << itemOne.GetName() << " " << itemOne.GetQuantity() << " @ $" << itemOne.GetPrice() << " = $" << itemOne.GetPrice()*itemOne.GetQuantity() << endl;
	cout << itemTwo.GetName() << " " << itemTwo.GetQuantity() << " @ $" << itemTwo.GetPrice() << " = $" << itemTwo.GetPrice()*itemTwo.GetQuantity() << endl <<endl;
	cout << "Total: $" << itemOne.GetPrice()*itemOne.GetQuantity()+itemTwo.GetPrice()*itemTwo.GetQuantity() << endl;
}