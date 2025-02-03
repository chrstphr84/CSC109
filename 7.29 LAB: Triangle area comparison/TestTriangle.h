// Copyright 2025

#ifndef TESTTRIANGLE_H
#define TESTTRIANGLE_H
#include <cxxtest/TestSuite.h>
#include "Triangle.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testTriangle1() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Triangle triangle1;
        Triangle triangle2;

        // Read and set base and height for triangle1 (use SetBase() and SetHeight())
        double base = 5;
        double height = 6;
        triangle1.SetBase(base);
        triangle1.SetHeight(height);
        triangle1.CalculateArea();
        TS_ASSERT_DELTA(triangle1.GetArea(), 15, 0.0000001);
    }

    void testTriangle2() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        Triangle triangle1;
        Triangle triangle2;

        // Read and set base and height for triangle1 (use SetBase() and SetHeight())
        double base = 7;
        double height = 8;
        triangle1.SetBase(base);
        triangle1.SetHeight(height);
        triangle1.CalculateArea();
        TS_ASSERT_DELTA(triangle1.GetArea(), 28, 0.0000001);
    }

};
#endif //TESTTRIANGLE_H
