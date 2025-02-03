// Copyright 2025

#ifndef CARTEST_H
#define CARTEST_H
#include <cxxtest/TestSuite.h>
#include "Car.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    // Test the Get and Set purchase price functions
    void testPurchasePrice() {
        Car car1;
        car1.SetPurchasePrice(32000);
        TS_ASSERT_DELTA(car1.GetPurchasePrice(), car1.GetPurchasePrice(), 0.0000001);

    }

    // Test the Get and Set model year functions
    void testModelYear() {
        Car car2;
        car2.SetModelYear(1995);
        TS_ASSERT_DELTA(car2.GetModelYear(), car2.GetModelYear(), 0.0000001);
    }

    // Test the CalcCurrentValue and GetCurrentValue functions
    void testCurrentValue() {
        Car car3;
        car3.SetModelYear(2011);
        car3.SetPurchasePrice(18000);
        car3.CalcCurrentValue(2018);
        TS_ASSERT_EQUALS(car3.GetCurrentValue(), 5770);

    }
};

#endif //CARTEST_H
