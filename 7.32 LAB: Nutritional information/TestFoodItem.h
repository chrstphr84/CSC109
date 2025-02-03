// Copyright 2025

#ifndef TESTFOODITEM_H
#define TESTFOODITEM_H
#include <cxxtest/TestSuite.h>
#include "FoodItem.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    void testDefaultFoodItem() {
        FoodItem foodItem;
        TS_ASSERT_EQUALS(foodItem.GetName(), "Water");
        TS_ASSERT_EQUALS(foodItem.GetFat(), 0.0);
        TS_ASSERT_EQUALS(foodItem.GetCarbs(), 0.0);
        TS_ASSERT_EQUALS(foodItem.GetProtein(), 0.0);

    }

    void testFoodItem() {
        FoodItem foodItem = FoodItem("Pear", 0.5, 25.0, 0.3);
        TS_ASSERT_EQUALS(foodItem.GetName(), "Pear");
        TS_ASSERT_EQUALS(foodItem.GetFat(), 0.5);
        TS_ASSERT_EQUALS(foodItem.GetCarbs(), 25.0);
        TS_ASSERT_EQUALS(foodItem.GetProtein(), 0.3);
    }

void testGetCalories() {
        FoodItem foodItem = FoodItem("Pear", 0.5, 25.0, 0.3);
        TS_ASSERT_DELTA(foodItem.GetCalories(1.0), 105.7, 0.01);
        TS_ASSERT_DELTA(foodItem.GetCalories(2.0), 211.4, 0.01);
    }

};

#endif //TESTFOODITEM_H
