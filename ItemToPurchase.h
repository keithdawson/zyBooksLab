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
		void SetName(string name); //Name
		string GetName();
		void SetPrice(int price);
		int GetPrice();
		void SetQuantity(int quant);
		int GetQuantity();
		ItemToPurchase();
	private:
		string itemName;
		int itemPrice;
		int itemQuantity;
};

