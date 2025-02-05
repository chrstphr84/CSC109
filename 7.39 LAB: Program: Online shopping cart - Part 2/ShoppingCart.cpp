// Copyright 2025
#include <iostream>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"



// Default constructor for ShoppingCart
ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
    //numItems = 0;
}

// Parameterized constructor for ShoppingCart
ShoppingCart::ShoppingCart(std::string name, std::string date) {
    customerName = name;
    currentDate = date;
    //numItems = 0;
}


// Set customer name
void ShoppingCart::SetCustomerName(std::string name) {
    customerName = name;
}
// Get customer name
std::string ShoppingCart::GetCustomerName() const {
    return customerName;
}

// Set current date
void ShoppingCart::SetDate(std::string date) {
    currentDate = date;
}
// Get current date
std::string ShoppingCart::GetDate() const {
    return currentDate;
}

// Add item to cart
void ShoppingCart::AddItem(const ItemToPurchase item) {
    cartItems.push_back(item);
}

// Remove item from cart
void ShoppingCart::RemoveItem(const std::string& itemName) {
    for (int i = 0; i < cartItems.size(); i++) {
        if (cartItems[i].GetName() == itemName) {
            cartItems.erase(cartItems.begin() + i);
            return;
        }
    }
    std::cout << "Item not found in cart. Nothing removed." << std::endl;
}

// Modify item in cart
void ShoppingCart::ModifyItem(ItemToPurchase item) {
    for (int i = 0; i < cartItems.size(); i++) {
        if (cartItems[i].GetName() == item.GetName()) {
            cartItems[i].SetQuantity(item.GetQuantity());
            cartItems[i].SetDescription(item.GetDescription());
            return;
        }
    }
    std::cout << "Item not found in cart. Nothing modified." << std::endl;
}

// Get the number of items in cart
int ShoppingCart::GetNumItemsInCart() const {
    int totalItems = 0;
    for (int i = 0; i < cartItems.size(); i++) {
        totalItems += cartItems[i].GetQuantity();
    }
    return totalItems;
}

// Get cost of items in cart
int ShoppingCart::GetCostOfCart() const {
    int totalCost = 0;
    for (int i = 0; i < cartItems.size(); i++) {
        totalCost += cartItems[i].GetPrice() * cartItems[i].GetQuantity();
    }
    return totalCost;
}

// Print total number of items and cost of cart
void ShoppingCart::PrintTotal() const {
    std::cout << customerName << "'s Shopping Cart - " << currentDate << std::endl;
    std::cout << "Number of Items: " << GetNumItemsInCart() << std::endl;
    std::cout << std::endl;

    if (GetNumItemsInCart() == 0) {
        std::cout << "SHOPPING CART IS EMPTY" << std::endl;
    } else {
        for (int i = 0; i < cartItems.size(); i++) {
            cartItems[i].PrintItemCost();
        }
    }
    std::cout << std::endl;
    std::cout << "Total: $" << GetCostOfCart() << std::endl;
}

// Print item descriptions
void ShoppingCart::PrintDescriptions() const {
    if (cartItems.empty()) {
        std::cout << "SHOPPING CART IS EMPTY" << std::endl;
    } else {
        std::cout << customerName << "'s Shopping Cart - " << currentDate << std::endl;
        std::cout << "Item Descriptions" << std::endl;
        for (int i = 0; i < cartItems.size(); i++) {
            cartItems[i].PrintItemDescription();
        }
    }
}
