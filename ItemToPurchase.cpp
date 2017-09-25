//
// Created by Blake on 9/13/2017.
//
#include <string>
#include <iostream>
#include "ItemToPurchase.h"
using namespace std;

void ItemToPurchase::SetName(string name) {
	itemName = name;
	return;
}
string ItemToPurchase::GetName(){
	return itemName;
}
void ItemToPurchase::SetPrice(int price){
	itemPrice = price;
	return;
}
int ItemToPurchase::GetPrice(){
	return itemPrice;
}
void ItemToPurchase::SetQuantity(int quant){
	itemQuantity = quant;
	return;
}
int ItemToPurchase::GetQuantity(){
	return itemQuantity;
}
ItemToPurchase::ItemToPurchase(){
	itemPrice = 0;
	itemQuantity = 0;
	itemName = "none";
	itemDescription = "none";

}
ItemToPurchase::ItemToPurchase(string name, string desc, int price, int quantity){
	itemPrice = price;
	itemQuantity = quantity;
	itemName = name;
	itemDescription = desc;

}
void ItemToPurchase::SetDescription(string descript){
	itemDescription = descript;
}
string ItemToPurchase::GetDescription(){
	return itemDescription;
}
void ItemToPurchase::PrintItemCost(){
	cout << GetName() << " " << GetQuantity() << " @ $" << GetPrice() << " = $" << GetPrice()*GetQuantity() << endl;
}
void ItemToPurchase::PrintItemDescription(){
	cout << GetName() << ": " << itemDescription << endl;
}