//
// Created by bmizzell on 9/22/2017.
//
#include <string>
#include <iostream>
#include "ShoppingCart.h"

using namespace std;

ShoppingCart::ShoppingCart(){
    customerName = "none";
    currentDate = "January 1, 2016";
    num = 0;
}
ShoppingCart::ShoppingCart(string name, string date){
    customerName = name;
    currentDate = date;
    num = 0;
}
string ShoppingCart::GetCustomerName() {
   return customerName;
}
string ShoppingCart::GetDate() {
    return currentDate;
}
void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems[num] = item;
    numOfItems +=
    num++;
}
void ShoppingCart::RemoveItem(string itemName) {
    bool found = false;
    for (int i = 0; i < num; i++){
        if (cartItems[i].GetName() == itemName){
            found = true;
            for (int j = i; j < num-1; j++){
                cartItems[j] = cartItems[j+1];
            }
            num--;
        }
    }
    if (!found) cout << "Item not found in cart. Nothing removed." << endl;
}
void ShoppingCart::ModifyItem(ItemToPurchase item) {
    bool found = false;
    for (int i = 0; i < num; i++){
        if (cartItems[i].GetName() == item.GetName()){
            found = true;
            if ((item.GetPrice() != 0) && (item.GetDescription() != "none") && (item.GetQuantity() != 0)){
                cartItems[i].SetQuantity(item.GetQuantity());
            }
        }
    }
    if (!found) cout << "Item not found in cart. Nothing modified." << endl;
}
int ShoppingCart::GetNumItemsInCart() {
    return num;
}
int ShoppingCart::GetCostOfCart() {
    int cost=0;
    for (int i = 0; i < num; i++){
        cost += (cartItems[i].GetQuantity() * cartItems[i].GetPrice());
    }
    return cost;
}
void ShoppingCart::PrintTotal() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl << "Number of Items: " << GetNumItemsInCart() << endl << endl;
    for (int i = 0; i < num ; i++){
        cout << cartItems[i].GetName() << " " << cartItems[i].GetQuantity() << " @ $" << cartItems[i].GetPrice() << " = $" << cartItems[i].GetPrice()*cartItems[i].GetQuantity() << endl;
    }
    cout << endl << "Total: $" << GetCostOfCart() << endl;
}

void ShoppingCart::PrintDescriptions() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl << "Item Descriptions" << endl;
    for (int i = 0; i < num ; i++){
        cout << cartItems[i].GetName() << ": " << cartItems[i].GetDescription() << endl;
    }
}
