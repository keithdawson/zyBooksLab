//
// Created by Blake on 9/13/2017.
//
#ifndef LAB1_ITEMTOPURCHASE_H
#define LAB1_ITEMTOPURCHASE_H

#endif //LAB1_ITEMTOPURCHASE_H

#include <string>
using namespace std;
class ItemToPurchase {
	public:
		void SetName(string); //Name
		string GetName();
		void SetPrice(int);
		int GetPrice();
		void SetQuantity(int);
		int GetQuantity();
		ItemToPurchase();
		ItemToPurchase(string, string, int, int);
		void SetDescription(string desc);
		string GetDescription();
	private:
		void PrintItemCost();
		void PrintItemDescription();
		string itemDescription;
		string itemName;
		int itemPrice;
		int itemQuantity;
};

