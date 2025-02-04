// Copyright 2025

#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H
#include <string>

class ItemToPurchase
{
public:
    ItemToPurchase();
    //ItemToPurchase(std::string itemName, std::string description, int itemPrice, int itemQuantity);
    void SetName(std::string itemName);
    void SetPrice(int itemPrice);
    void SetQuantity(int itemQuantity);

    std::string GetName() const;
    int GetPrice() const;
    int GetQuantity() const;

private:
    std::string itemName;
    int itemPrice;
    int itemQuantity;
};


#endif //ITEMTOPURCHASE_H
