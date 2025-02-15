// Copyright 2025 Christopher Noel

#ifndef TESTCASES_H
#define TESTCASES_H
#include <iostream>
#include "Address.h"

#include <cxxtest/TestSuite.h>

class TestCases : public CxxTest::TestSuite
{
public:
    // test default constructor
    void testDefaultAddress()
    {
        Address address;
        TS_ASSERT_EQUALS(address.getHouseNumber(), 0);
        TS_ASSERT_EQUALS(address.getApartmentNumber(), 0);
        TS_ASSERT_EQUALS(address.getStreet(), "");
        TS_ASSERT_EQUALS(address.getCity(), "");
        TS_ASSERT_EQUALS(address.getState(), "");
        TS_ASSERT_EQUALS(address.getPostalCode(), "");
    }

    // test parameterized constructor without apartment number
    void testParameterizedAddressNoApt()
    {
        Address address(148, "First Ave", "San Diego", "CA", "20392");
        TS_ASSERT_EQUALS(address.getHouseNumber(), 148);
        TS_ASSERT_EQUALS(address.getApartmentNumber(), 0);
        TS_ASSERT_EQUALS(address.getStreet(), "First Ave");
        TS_ASSERT_EQUALS(address.getCity(), "San Diego");
        TS_ASSERT_EQUALS(address.getState(), "CA");
        TS_ASSERT_EQUALS(address.getPostalCode(), "20392");
    }

    // test parameterized constructor with apartment number
    void testParameterizedAddress()
    {
        Address address(553, "Second St", 44, "San Diego", "CA", "10394");
        TS_ASSERT_EQUALS(address.getHouseNumber(), 553);
        TS_ASSERT_EQUALS(address.getApartmentNumber(), 44);
        TS_ASSERT_EQUALS(address.getStreet(), "Second St");
        TS_ASSERT_EQUALS(address.getCity(), "San Diego");
        TS_ASSERT_EQUALS(address.getState(), "CA");
        TS_ASSERT_EQUALS(address.getPostalCode(), "10394");
    }

    // test setters and getters
    void testSettersAndGetters()
    {
        Address address;
        address.setHouseNumber(148);
        address.setApartmentNumber(44);
        address.setStreet("First Ave");
        address.setCity("San Diego");
        address.setState("CA");
        address.setPostalCode("20392");

        TS_ASSERT_EQUALS(address.getHouseNumber(), 148);
        TS_ASSERT_EQUALS(address.getApartmentNumber(), 44);
        TS_ASSERT_EQUALS(address.getStreet(), "First Ave");
        TS_ASSERT_EQUALS(address.getCity(), "San Diego");
        TS_ASSERT_EQUALS(address.getState(), "CA");
        TS_ASSERT_EQUALS(address.getPostalCode(), "20392");
    }

    // test overloaded operator
    void testOverloadedOperator()
{
        Address postalCode1;
        Address postalCode2;

        postalCode1.setPostalCode("11111");
        postalCode2.setPostalCode("99999");

        TS_ASSERT(postalCode1 < postalCode2);
}


};

#endif //TESTCASES_H
