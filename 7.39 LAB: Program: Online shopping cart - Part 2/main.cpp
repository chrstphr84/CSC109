// Copyright 2025
#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"


// Implement the PrintMenu() function. PrintMenu() has a ShoppingCart parameter, and outputs a menu of options to manipulate the shopping cart. Each option is represented by a single character. Build and output the menu within the function.
// If the an invalid character is entered, continue to prompt for a valid choice. Call PrintMenu() in the main() function. Continue to execute the menu until the user enters 'q' to Quit.
// Hint: Implement Quit before implementing other options.

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
    //cout << "Choose an option:" << endl;
}

// Execute the menu
void ExecuteMenu(ShoppingCart& theCart) {
    char option;
    string itemName, itemDescription;
    int itemPrice, itemQuantity;
    PrintMenu();
    while (true) {
        cout << "Choose an option:" << endl;
        cin >> option;
        if (option == 'q') {
            break;
        }
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

            default:
                //cout << "Choose an option:" << endl;
                //cin >> option;
                //ExecuteMenu(theCart);
                break;
        }
    }
}

//In main(), prompt the user for a customer's name and today's date. Output the name and date. Create an object of type ShoppingCart.

int main() {
    cout << "Enter customer's name:" << endl;
    string name;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
    cout << endl;
    string date;
    getline(cin, date);
    ShoppingCart theCart(name, date);
    cout << "Customer name: " << theCart.GetCustomerName() << endl;
    cout << "Today's date: " << theCart.GetDate() << endl;
    cout << endl;


    //PrintMenu();
    ExecuteMenu(theCart); // Pass theCart as an argument

    return 0;

}