// Copyright 2025 Christopher Noel

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
private:
    // variables
    int house_number;
    int apartment_number;

    std::string street;
    std::string city;
    std::string state;
    std::string postal_code;

public:
    Address();
    Address(int house_number, std::string street, int apartment_number, std::string city, std::string state, std::string postal_code);
    Address(int house_number, std::string street, std::string city, std::string state, std::string postal_code);

    void setHouseNumber(int house_number);
    int getHouseNumber();

    void setApartmentNumber(int apartment_number);
    int getApartmentNumber();

    void setStreet(std::string street);
    std::string getStreet();

    void setCity(std::string city);
    std::string getCity();

    void setState(std::string state);
    std::string getState();

    void setPostalCode(std::string postal_code);
    std::string getPostalCode();

    void print();
    bool operator<(const Address &address);
};

#endif // ADDRESS_H
