// Copyright 2025

#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H
#include <string>

class ItemToPurchase
{
public:
    ItemToPurchase();
    ItemToPurchase(std::string name, std::string description, int price, int quantity);

    void SetName(std::string itemName);
    void SetPrice(int itemPrice);
    void SetQuantity(int itemQuantity);
    void SetDescription(std::string itemDescription);

    std::string GetName() const;
    std::string GetDescription() const;


    int GetPrice() const;
    int GetQuantity() const;
    void PrintItemCost() const;
    void PrintItemDescription() const;


private:
    std::string itemName;
    std::string itemDescription;
    int itemPrice;
    int itemQuantity;

};


#endif //ITEMTOPURCHASE_H
