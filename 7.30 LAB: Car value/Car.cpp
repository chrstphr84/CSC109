// Copyright 2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
//using namespace std;

// Sets the model year of the car
        // Test: CarTest::testModelYear
void Car::SetModelYear(int userYear) {
    modelYear = userYear;
}

// Gets the model year of the car
    // Test: CarTest::testModelYear
int Car::GetModelYear() const {
    return modelYear;
}

// Sets the purchase price of the car
        // Test: CarTest::testPurchasePrice
void Car::SetPurchasePrice(int userPrice) {
    purchasePrice = userPrice;
}
// Gets the purchase price of the car
        // Test: CarTest::testPurchasePrice
int Car::GetPurchasePrice() const {
    return purchasePrice;
}

// Calculates the current value of the car
        // Test: CarTest::testCurrentValue
void Car::CalcCurrentValue(int currentYear) {
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;
    // Car depreciation formula
    currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// Implement GetCurrentValue() function
        // Test: CarTest::testCurrentValue
int Car::GetCurrentValue() const {
    return currentValue;
}

// Implement PrintInfo() function to output modelYear, purchasePrice, and currentValue

// void Car::PrintInfo() const {
//     std::cout << std::fixed << std::setprecision(2);
//     std::cout << "Car's information:" << std::endl;
//     std::cout << "  Model year: " << modelYear << std::endl;
//     std::cout << "  Purchase price: $" << purchasePrice << std::endl;
//     std::cout << std::fixed << std::setprecision(0);
//     std::cout << "  Current value: $" << currentValue << std::endl;
// }
