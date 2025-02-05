// Copyright 2025

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H
#include <string>
#include <vector>
#include "ItemToPurchase.h"

class ShoppingCart
{
    public:
        ShoppingCart();
        ShoppingCart(std::string name, std::string date);
        void SetCustomerName(std::string name);
        void SetDate(std::string date);
        std::string GetCustomerName() const;
        std::string GetDate() const;

        //void ClearCart(); // for testing purposes

        void AddItem(const ItemToPurchase item);
        void RemoveItem(const std::string& itemName);
        void ModifyItem(ItemToPurchase item);

        int GetNumItemsInCart() const;
        int GetCostOfCart() const;
        void PrintTotal() const;
        void PrintDescriptions() const;

    private:
        std::string customerName;
        std::string currentDate;
        std::vector<ItemToPurchase> cartItems;
        //int numItems;

};



#endif //SHOPPINGCART_H
