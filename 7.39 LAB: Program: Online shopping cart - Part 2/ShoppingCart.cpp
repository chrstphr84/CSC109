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
// clear cart - for testing purposes
// void ShoppingCart::ClearCart() {
//     cartItems.clear();
// }

// Add item to cart
void ShoppingCart::AddItem(const ItemToPurchase item) {
    cartItems.push_back(item);
}

// Remove item from cart
void ShoppingCart::RemoveItem(const std::string& itemName) {
    for (std::vector<ItemToPurchase>::size_type i = 0; i < cartItems.size(); i++) {
        if (cartItems[i].GetName() == itemName) {
            cartItems.erase(cartItems.begin() + i);
            return;
        }
    }
    std::cout << "Item not found in cart. Nothing removed." << std::endl;
}

// Modify item in cart
void ShoppingCart::ModifyItem(ItemToPurchase item) {
    for (std::vector<ItemToPurchase>::size_type i = 0; i < cartItems.size(); i++) {
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
    int totalQuantity = 0;
    for (std::vector<ItemToPurchase>::size_type i = 0; i < cartItems.size(); i++) {
        totalQuantity += cartItems[i].GetQuantity();
    }
    return totalQuantity;
}

// Get cost of items in cart
int ShoppingCart::GetCostOfCart() const {
    int totalCost = 0;
    for (std::vector<ItemToPurchase>::size_type i = 0; i < cartItems.size(); i++) {
        totalCost += cartItems[i].GetPrice() * cartItems[i].GetQuantity();
    }
    return totalCost;
}

// Print total number of items and cost of cart
void ShoppingCart::PrintTotal() const {
    std::cout << customerName << "'s Shopping Cart - " << currentDate << std::endl;
    std::cout << "Number of Items: " << GetNumItemsInCart() << std::endl << std::endl;
    if (cartItems.empty()) {
        std::cout << "SHOPPING CART IS EMPTY" << std::endl;
        std::cout << std::endl;
        std::cout << "Total: $0" << std::endl;
    } else {
        int totalCost = 0;
        for (std::vector<ItemToPurchase>::size_type i = 0; i < cartItems.size(); i++) {
            cartItems[i].PrintItemCost();
            totalCost += cartItems[i].GetPrice() * cartItems[i].GetQuantity();
        }
        std::cout << std::endl;
        std::cout << "Total: $" << totalCost << std::endl;
    }
}

// Print item descriptions
void ShoppingCart::PrintDescriptions() const {
    std::cout << customerName << "'s Shopping Cart - " << currentDate << std::endl << std::endl;
    if (cartItems.empty()) {
        std::cout << "SHOPPING CART IS EMPTY" << std::endl;
    } else {
        //std::cout << customerName << "'s Shopping Cart - " << currentDate << std::endl;
        std::cout << "Item Descriptions" << std::endl;
        for (std::vector<ItemToPurchase>::size_type i = 0; i < cartItems.size(); i++) {
            cartItems[i].PrintItemDescription();
        }
    }
}
