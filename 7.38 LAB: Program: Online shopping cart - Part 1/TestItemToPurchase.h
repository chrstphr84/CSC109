// Copyright 2025

#ifndef TESTITEMTOPURCHASE_H
#define TESTITEMTOPURCHASE_H
#include <cxxtest/TestSuite.h>
#include "ItemToPurchase.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    // test default constructor
    void testItemToPurchase() {
        ItemToPurchase item;
        TS_ASSERT_EQUALS(item.GetName(), "none");
        TS_ASSERT_EQUALS(item.GetPrice(), 0);
        TS_ASSERT_EQUALS(item.GetQuantity(), 0);
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


};


#endif //TESTITEMTOPURCHASE_H
