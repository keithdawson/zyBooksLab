#include <iostream>
#include <string>
#include "ShoppingCart.h"

using namespace std;
void PrintMenu(){
	cout << "MENU" << endl << "a - Add item to cart" << endl << "d - Remove item from cart" << endl << "c - Change item quantity" << endl << "i - Output items' descriptions" << endl;
	cout << "o - Output shopping cart" << endl << "q - Quit" << endl << endl;
}

int main() {
	string nameString, dateString;
	cout<< "Enter customer's name:" << endl;
	getline(cin, nameString);
	cout<< "Enter today's date:" << endl;
	getline(cin, dateString);
	ShoppingCart cart(nameString, dateString);
	cout << endl << "Customer name: " << cart.GetCustomerName() << endl << "Today's date: " << cart.GetDate() << endl << endl;
	char c;
	PrintMenu();
	while(true){
		cout << "Choose an option:" << endl;
		cin >> c;
		if (c == 'q'){
			break;
		}
		else if (c == 'o'){
			cout << "OUTPUT SHOPPING CART" << endl;// << cart.GetCustomerName() << "'s Shopping Cart - " << cart.GetDate() << endl << "Number of Items: " << cart.GetNumItemsInCart() << endl << endl;
			cart.PrintTotal();
			PrintMenu();
		}
		else if (c == 'i'){
			cart.PrintDescriptions();
			PrintMenu();
		}
		else if (c == 'a'){
			ItemToPurchase item;
			string tempString;
			int tempInt;
			cout << "ADD ITEM TO CART" << endl << "Enter the item name:" << endl;
			cin.ignore();
			getline(cin, tempString);
			item.SetName(tempString);
			cout << "Enter the item description:" << endl;
			getline(cin, tempString);
			item.SetDescription(tempString);
			cout << "Enter the item price:" << endl;
			cin >> tempInt;
			item.SetPrice(tempInt);
			cout << "Enter the item quantity:" << endl;
			cin >> tempInt;
			item.SetQuantity(tempInt);
			cout << endl;
			cart.AddItem(item);
			PrintMenu();
		}
		else if (c == 'd'){
			cin.ignore();
			cout << "REMOVE ITEM FROM CART" << endl << "Enter name of item to remove:" << endl;
			string tempString;
			getline(cin, tempString);
			cart.RemoveItem(tempString);
			cout << endl;
			PrintMenu();

		}
		else if (c == 'c'){
			cin.ignore();
			cout << "CHANGE ITEM QUANTITY" << endl << "Enter the item name:" << endl;
			string tempString;
			int tempInt;
			getline(cin, tempString);
			ItemToPurchase item;
			item.SetName(tempString);
			cout << "Enter the new quantity:" << endl;
			cin >> tempInt;
			item.SetQuantity(tempInt);
			cart.ModifyItem(item);
			PrintMenu();
		}
	}
/*
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
	cout << "Total: $" << itemOne.GetPrice()*itemOne.GetQuantity()+itemTwo.GetPrice()*itemTwo.GetQuantity() << endl;*/
}