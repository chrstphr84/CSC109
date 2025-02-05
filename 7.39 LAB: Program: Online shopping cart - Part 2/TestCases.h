// Copyright 2025

#ifndef TESTCASES_H
#define TESTCASES_H
#include <iostream>
#include <cxxtest/TestSuite.h>
#include "ShoppingCart.h"




//Include your classes header file(s) below and uncomment.
//#include "myClass.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

// Test ItemsToPurchase class

    // Test ItemsToPurchase default constructor
    void testItemToPurchase() {
        ItemToPurchase item;
        TS_ASSERT_EQUALS(item.GetName(), "none");
        TS_ASSERT_EQUALS(item.GetPrice(), 0);
        TS_ASSERT_EQUALS(item.GetQuantity(), 0);
    }

    // Test ItemsToPurchase parameterized constructor
    void testItemToPurchase2() {
        ItemToPurchase item("apple", "fruit", 5, 3);
        TS_ASSERT_EQUALS(item.GetName(), "apple");
        TS_ASSERT_EQUALS(item.GetPrice(), 5);
        TS_ASSERT_EQUALS(item.GetQuantity(), 3);
    }

    // test SetName and GetName functions
    void testSetName() {
        ItemToPurchase item;
        std::string name = "apple";
        item.SetName(name);
        TS_ASSERT_EQUALS(item.GetName(), name);
        TS_ASSERT_EQUALS(item.GetName(), "apple");
    }

    // test SetPrice and GetPrice functions
    void testSetPrice() {
        ItemToPurchase item;
        int price = 5;
        item.SetPrice(price);
        TS_ASSERT_EQUALS(item.GetPrice(), price);
        TS_ASSERT_EQUALS(item.GetPrice(), 5);
    }

    // test SetQuantity and GetQuantity functions
    void testSetQuantity() {
        ItemToPurchase item;
        int quantity = 3;
        item.SetQuantity(quantity);
        TS_ASSERT_EQUALS(item.GetQuantity(), quantity);
        TS_ASSERT_EQUALS(item.GetQuantity(), 3);
    }

    // test SetDescription and GetDescription functions
    void testSetDescription() {
        ItemToPurchase item;
        std::string description = "fruit";
        item.SetDescription(description);
        TS_ASSERT_EQUALS(item.GetDescription(), description);
        TS_ASSERT_EQUALS(item.GetDescription(), "fruit");
    }

    // I wasn't sure how to test the print functions because they use cout statements.
        // I tried to find information online, and had some help from the suggestions in CLion.
        // Unless I missed it in the recorded lectures (which is possible), I don't recall hearing about how to test these.
        // If there is a better way to test these functions, please let me know.
    // test PrintItemCost function
    void testPrintItemCost() {
        ItemToPurchase item("apple", "fruit", 5, 3);
        std::ostringstream out;
        std::streambuf* coutbuf = std::cout.rdbuf(); // save old buf
        std::cout.rdbuf(out.rdbuf()); // redirect std::cout to out

        item.PrintItemCost();

        std::cout.rdbuf(coutbuf); // reset to standard output again
        TS_ASSERT_EQUALS(out.str(), "apple 3 @ $5 = $15\n");
    }

    // test PrintItemDescription function
    void testPrintItemDescription() {
        ItemToPurchase item("apple", "fruit", 5, 3);
        std::ostringstream out;
        std::streambuf* coutbuf = std::cout.rdbuf(); // save old buf
        std::cout.rdbuf(out.rdbuf()); // redirect std::cout to out

        item.PrintItemDescription();

        std::cout.rdbuf(coutbuf); // reset to standard output again
        TS_ASSERT_EQUALS(out.str(), "apple: fruit\n");
    }

    // clear cart
    // void testClearCart() {
    //     ShoppingCart cart;
    //     cart.ClearCart();
    //     TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 0);
    // }

// Test ShoppingCart class
    // Test ShoppingCart default constructor
    void testShoppingCart() {
        std::string customerName = "none";
        std::string currentDate = "January 1, 2016";
        ShoppingCart cart;
        TS_ASSERT_EQUALS(cart.GetCustomerName(), customerName);
        TS_ASSERT_EQUALS(cart.GetDate(), "January 1, 2016");
    }

    // test ShoppingCart parameterized constructor
    void testShoppingCart2() {
        std::string customerName = "John Doe";
        std::string currentDate = "January 15, 2025";
        ShoppingCart cart(customerName, currentDate);
        TS_ASSERT_EQUALS(cart.GetCustomerName(), customerName);
        TS_ASSERT_EQUALS(cart.GetDate(), currentDate);
    }


    // test SetCustomerName and GetCustomerName functions
    void testSetCustomerName() {
        ShoppingCart cart;
        std::string customerName = "John Doe";
        cart.SetCustomerName(customerName);
        TS_ASSERT_EQUALS(cart.GetCustomerName(), customerName);
        TS_ASSERT_EQUALS(cart.GetCustomerName(), "John Doe");
    }

    // test SetDate and GetDate functions
    void testSetDate() {
        ShoppingCart cart;
        std::string currentDate = "January 15, 2025";
        cart.SetDate(currentDate);
        TS_ASSERT_EQUALS(cart.GetDate(), currentDate);
        TS_ASSERT_EQUALS(cart.GetDate(), "January 15, 2025");
    }


    // test AddItem function
    void testAddItem() {
        ShoppingCart cart;
        ItemToPurchase item("apple", "fruit", 5, 3);
        cart.AddItem(item);
        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 3);
    }

    // test RemoveItem function
    void testRemoveItem() {
        ShoppingCart cart;
        ItemToPurchase item("apple", "fruit", 5, 3);
        cart.AddItem(item);
        cart.RemoveItem("apple");
        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 0);
    }

    // test ModifyItem function
    void testModifyItem() {
        ShoppingCart cart;
        ItemToPurchase item("apple", "fruit", 5, 3);
        cart.AddItem(item);
        item.SetQuantity(5);
        cart.ModifyItem(item);
        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 5);
    }

    // test GetNumItemsInCart function
    void testGetNumItemsInCart() {
        ShoppingCart cart;
        ItemToPurchase item("apple", "fruit", 5, 3);
        cart.AddItem(item);
        TS_ASSERT_EQUALS(cart.GetNumItemsInCart(), 3);
    }

    // test GetCostOfCart function
    void testGetCostOfCart() {
        ShoppingCart cart;
        ItemToPurchase item("apple", "fruit", 5, 3);
        cart.AddItem(item);
        TS_ASSERT_EQUALS(cart.GetCostOfCart(), 15);
    }

    //test PrintTotal function with no items
    void testPrintTotal2() {
        ShoppingCart cart;
        std::ostringstream out;
        std::streambuf* coutbuf = std::cout.rdbuf(); // save old buf
        std::cout.rdbuf(out.rdbuf()); // redirect std::cout to out

        cart.PrintTotal();

        std::cout.rdbuf(coutbuf); // reset to standard output again
        TS_ASSERT_EQUALS(out.str(), "none's Shopping Cart - January 1, 2016\nNumber of Items: 0\n\nSHOPPING CART IS EMPTY\n\nTotal: $0\n");
    }

    //test PrintTotal function with items
    void testPrintTotal() {
        ShoppingCart cart;
        ItemToPurchase item("apple", "fruit", 5, 3);
        cart.AddItem(item);
        std::ostringstream out;
        std::streambuf* coutbuf = std::cout.rdbuf(); // save old buf
        std::cout.rdbuf(out.rdbuf()); // redirect std::cout to out

        cart.PrintTotal();

        std::cout.rdbuf(coutbuf); // reset to standard output again
        TS_ASSERT_EQUALS(out.str(), "none\'s Shopping Cart - January 1, 2016\nNumber of Items: 3\n\napple 3 @ $5 = $15\n\nTotal: $15\n");
    }

    // test PrintDescriptions function with no items
    void testPrintDescriptions2() {
        ShoppingCart cart;
        std::ostringstream out;
        std::streambuf* coutbuf = std::cout.rdbuf(); // save old buf
        std::cout.rdbuf(out.rdbuf()); // redirect std::cout to out

        cart.PrintDescriptions();

        std::cout.rdbuf(coutbuf); // reset to standard output again
        TS_ASSERT_EQUALS(out.str(), "none's Shopping Cart - January 1, 2016\n\nSHOPPING CART IS EMPTY\n");
    }

    // test PrintDescriptions function with items
    void testPrintDescriptions() {
        ShoppingCart cart;
        ItemToPurchase item("apple", "fruit", 5, 3);
        cart.AddItem(item);
        std::ostringstream out;
        std::streambuf* coutbuf = std::cout.rdbuf(); // save old buf
        std::cout.rdbuf(out.rdbuf()); // redirect std::cout to out

        cart.PrintDescriptions();

        std::cout.rdbuf(coutbuf); // reset to standard output again
        TS_ASSERT_EQUALS(out.str(), "none\'s Shopping Cart - January 1, 2016\n\nItem Descriptions\napple: fruit\n");
    }





};

#endif //TESTCASES_H
