// Copyright 2025
#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

// Print the menu
void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
    cout << endl;
}

// Execute the menu
bool ExecuteMenu(char option, ShoppingCart& theCart) {
    string itemName, itemDescription;
    int itemPrice, itemQuantity;

    switch (option) {
        case 'a':
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            cin.ignore();
            getline(cin, itemName);
            cout << "Enter the item description:" << endl;
            getline(cin, itemDescription);
            cout << "Enter the item price:" << endl;
            cin >> itemPrice;
            cout << "Enter the item quantity:" << endl;
            cin >> itemQuantity;
            {
                ItemToPurchase newItem;
                newItem.SetName(itemName);
                newItem.SetDescription(itemDescription);
                newItem.SetPrice(itemPrice);
                newItem.SetQuantity(itemQuantity);
                theCart.AddItem(newItem);
            }
            cout << endl;
            break;

        case 'd':
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            cin.ignore();
            getline(cin, itemName);
            theCart.RemoveItem(itemName);
            cout << endl;
            break;

        case 'c':
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            cin.ignore();
            getline(cin, itemName);
            cout << "Enter the new quantity:" << endl;
            cin >> itemQuantity;
            {
                ItemToPurchase modifyItem;
                modifyItem.SetName(itemName);
                modifyItem.SetQuantity(itemQuantity);
                theCart.ModifyItem(modifyItem);
            }
            cout << endl;
            break;

        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            theCart.PrintDescriptions();
            cout << endl;
            break;

        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            theCart.PrintTotal();
            cout << endl;
            break;

        case 'q':
            return false;

        default:
            cout << "Choose an option:" << endl;
            cin >> option;
            return ExecuteMenu(option, theCart);
    }
    return true;
}

int main() {
    cout << "Enter customer's name:" << endl;
    string name;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
    string date;
    getline(cin, date);
    cout << endl;
    ShoppingCart theCart(name, date);
    cout << "Customer name: " << theCart.GetCustomerName() << endl;
    cout << "Today's date: " << theCart.GetDate() << endl;
    cout << endl;

    char option;
    bool continueMenu = true;
    while (continueMenu) {
        PrintMenu();
        cout << "Choose an option:" << endl;
        cin >> option;
        continueMenu = ExecuteMenu(option, theCart);
    }

    return 0;
}