// Copyright 2025

#include <iostream>
#include "ItemToPurchase.h"

// Default constructor for ItemToPurchase
ItemToPurchase::ItemToPurchase() {
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

// Mutators
// Set item name
void ItemToPurchase::SetName(std::string itemName) {
    this->itemName = itemName;
}
// Set item price
void ItemToPurchase::SetPrice(int itemPrice) {
    this->itemPrice = itemPrice;
}
// Set item quantity
void ItemToPurchase::SetQuantity(int itemQuantity) {
    this->itemQuantity = itemQuantity;
}
// Set item description
void ItemToPurchase::SetDescription(std::string itemDescription) {
    this->itemDescription = itemDescription;
}


// Accessors
// Get item name
std::string ItemToPurchase::GetName() const {
    return itemName;
}
// Get item price
int ItemToPurchase::GetPrice() const {
    return itemPrice;
}
// Get item quantity
int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

// Get item description
std::string ItemToPurchase::GetDescription() const {
    return itemDescription;
}

// Print item description
std::string ItemToPurchase::PrintItemDescription() const {
    std::cout << itemName << ": " << itemDescription << ", " << itemPrice << " oz." << std::endl;
}
// Print item cost
int ItemToPurchase::PrintItemCost() const {
    std::cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << std::endl;
}