// Copyright 2025

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
    //prompt the user for two items and create two objects of the ItemToPurchase class. Before prompting for the second item, call cin.ignore() to allow the user to input a new string.
    string itemName;
    int itemPrice, itemQuantity;
    ItemToPurchase item1, item2;

    // Item 1 details
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    item1.SetName(itemName);

    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    item1.SetPrice(itemPrice);

    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity;
    item1.SetQuantity(itemQuantity);
    cout << endl;

    // Clear the input buffer
    cin.ignore();

    // Item 2 details
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, itemName);
    item2.SetName(itemName);

    cout << "Enter the item price:" << endl;
    cin >> itemPrice;
    item2.SetPrice(itemPrice);

    cout << "Enter the item quantity:" << endl;
    cin >> itemQuantity;
    item2.SetQuantity(itemQuantity);
    cout << endl;


    // Print the total cost of each item
    cout << "TOTAL COST" << endl;
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetPrice() * item1.GetQuantity() << endl;
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetPrice() * item2.GetQuantity() << endl;
    cout << endl;
    // Print the total cost of both items
    cout << "Total: $" << (item1.GetPrice() * item1.GetQuantity()) + (item2.GetPrice() * item2.GetQuantity()) << endl;


    return 0;
}
