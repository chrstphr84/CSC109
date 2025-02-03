// Copyright 2025

#ifndef CARTEST_H
#define CARTEST_H
#include <cxxtest/TestSuite.h>
#include "Car.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    // void testCar1() {
    //     //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
    //     Car car1;
    //
    //     car1.SetModelYear(2011);
    //     car1.SetPurchasePrice(18000);
    //     car1.CalcCurrentValue(2018);
    //     TS_ASSERT_DELTA(car1.GetPurchasePrice(), 5770, 0.0000001);
    // }
    //
    //


    // Test the Get and Set purchase price of the car
    void testPurchasePrice() {
        Car car1;

        int userPrice = 32000;

        car1.SetPurchasePrice(userPrice);
        TS_ASSERT_DELTA(car1.GetPurchasePrice(), userPrice, 0.0000001);

    }

    // Test the model year of the car
    void testModelYear() {
        Car car2;

        int userYear = 1995;

        car2.SetModelYear(userYear);
        TS_ASSERT_DELTA(car2.GetModelYear(), userYear, 0.0000001);
    }

    // void testPurchasePrice() {
    //     //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
    //     Car car1;
    //
    //     int userYear = 1995;
    //     int userPrice = 32000;
    //     int userCurrentYear = 2020;
    //
    //     car1.SetModelYear(userYear);
    //     car1.SetPurchasePrice(userPrice);
    //     car1.CalcCurrentValue(userCurrentYear);
    //
    //     TS_ASSERT_DELTA(car1.Car::CalcCurrentValue(), 550, 0.0000001);
    //
    // }
};


#endif //CARTEST_H
