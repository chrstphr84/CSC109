// Copyright 2025 Christopher Noel

#ifndef TESTCASES_H
#define TESTCASES_H

#include <cxxtest/TestSuite.h>
#include "Number.h"


class testCases : public CxxTest::TestSuite {
public:

    // test constructor
    void testNumber() {
        Number num1 = Number(1);
        TS_ASSERT_EQUALS(num1.GetNum(), 1);
    }

    void testSetAndGetNum() {
        Number num2 = Number(1);
        num2.SetNum(2);
        TS_ASSERT_EQUALS(num2.GetNum(), 2);
    }

    void testOperatorOverload() {
        Number num3 = Number(3);
        std::ostringstream oss;
        oss << num3;
        TS_ASSERT_EQUALS(oss.str(), "The value is 3\n");
    }

};

#endif //TESTCASES_H
