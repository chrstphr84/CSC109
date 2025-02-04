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
    void SetDescription(std::string itemDescription);

    std::string GetName() const;
    std::string GetDescription() const;
    std::string PrintItemDescription() const;
    int GetPrice() const;
    int GetQuantity() const;
    int PrintItemCost() const;



private:
    std::string itemName;
    std::string itemDescription;
    int itemPrice;
    int itemQuantity;

};


#endif //ITEMTOPURCHASE_H
