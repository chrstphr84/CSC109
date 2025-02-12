// Copyright 2025 Christopher Noel

#include <iostream>
#include <string>
#include "Address.h"

// default constructor
Address::Address()
{
    house_number = 0;
    apartment_number = 0;
    street = "";
    city = "";
    state = "";
    postal_code = "";
}

// constructor with apartment number
Address::Address(int house_number, std::string street, int apartment_number, std::string city, std::string state, std::string postal_code)
{
    this->house_number = house_number;
    this->apartment_number = apartment_number;
    this->street = street;
    this->city = city;
    this->state = state;
    this->postal_code = postal_code;
}

// constructor without apartment number
Address::Address(int house_number, std::string street, std::string city, std::string state, std::string postal_code)
{
    this->house_number = house_number;
    this->apartment_number = 0;
    this->street = street;
    this->city = city;
    this->state = state;
    this->postal_code = postal_code;
}

// set/get house number
void setHouseNumber(int house_number)
{
    this->house_number = house_number;
}

int Address::getHouseNumber()
{
    return house_number;
}
// set/get apartment number
void setApartmentNumber(int apartment_number)
{
    this->apartment_number = apartment_number;
}

int getApartmentNumber()
{
    return apartment_number;
}

// set/get street
void setStreet(std::string street)
{
    this->street = street;
}
string getStreet()
{
    return street;
}

// set/get city
void setCity(std::string city)
{
    this->city = city;
}

string getCity()
{
    return city;
}

// set/get state
void setState(std::string state)
{
    this->state = state;
}

string getState()
{
    return state;
}

// set/get postal code
void setPostalCode(std::string postal_code)
{
    this->postal_code = postal_code;
}

string getPostalCode()
{
    return postal_code;
}

// print function
void Address::print()
{
    std::cout << house_number << " " << street;
    if (apartment_number != 0)
    {
        std::cout << ", #" << apartment_number;
    }
    std::cout << std::endl;
    std::cout << city << ", " << state << ", " << postal_code << std::endl;
}

// less than operator
bool Address::operator<(const Address &address)
{
    return postal_code < address.postal_code;
}