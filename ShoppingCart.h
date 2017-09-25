//
// Created by bmizzell on 9/22/2017.
//

#ifndef LAB1_SHOPPINGCART_H
#define LAB1_SHOPPINGCART_H

#endif //LAB1_SHOPPINGCART_H

#include <string>
#include "ItemToPurchase.h"

using namespace std;
class ShoppingCart {
public:
	ShoppingCart();
	ShoppingCart(string, string);
	string GetCustomerName();
	string GetDate();
	void AddItem(ItemToPurchase);
	void RemoveItem(string);
	void ModifyItem(ItemToPurchase);
	int GetNumItemsInCart();
	int GetCostOfCart();
	void PrintTotal();
	void PrintDescriptions();
private:
	string customerName;
	string currentDate;
	ItemToPurchase cartItems[100];
	int num;
	int numOfItems;
};