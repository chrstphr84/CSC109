// Copyright 2025 Christopher Noel

#include <iostream>
#include <string>
#include "Address.h"

#include "Address.h"

// Default constructor
Address::Address() : house_number(0), apartment_number(0), street(""), city(""), state(""), postal_code("") {}

// Parameterized constructor
Address::Address(int house_number, std::string street, int apartment_number, std::string city, std::string state, std::string postal_code)
    : house_number(house_number), apartment_number(apartment_number), street(street), city(city), state(state), postal_code(postal_code) {}

// Parameterized constructor without apartment number
Address::Address(int house_number, std::string street, std::string city, std::string state, std::string postal_code)
    : house_number(house_number), apartment_number(0), street(street), city(city), state(state), postal_code(postal_code) {}

// Setters and getters
void Address::setHouseNumber(int house_number) {
    this->house_number = house_number;
}

int Address::getHouseNumber() {
    return house_number;
}

void Address::setApartmentNumber(int apartment_number) {
    this->apartment_number = apartment_number;
}

int Address::getApartmentNumber() {
    return apartment_number;
}

void Address::setStreet(std::string street) {
    this->street = street;
}

std::string Address::getStreet() {
    return street;
}

void Address::setCity(std::string city) {
    this->city = city;
}

std::string Address::getCity() {
    return city;
}

void Address::setState(std::string state) {
    this->state = state;
}

std::string Address::getState() {
    return state;
}

void Address::setPostalCode(std::string postal_code) {
    this->postal_code = postal_code;
}

std::string Address::getPostalCode() {
    return postal_code;
}

// print
void Address::print() {
    std::cout << house_number;
    if (apartment_number != 0) {
        std::cout << " " << street << ", #" << apartment_number << std::endl;
    }
    else
    {
        std::cout << " " << street << std::endl;
    }
    std::cout << city << ", " << state << ", " << postal_code << std::endl;

}

// operator overloading
bool Address::operator<(const Address &address) {
    if (postal_code < address.postal_code) {
        return true;
    }
    return false;
}
