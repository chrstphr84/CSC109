// Copyright 2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

        // Test: CarTest::testModelYear
void Car::SetModelYear(int userYear){
    modelYear = userYear;
}
        // Test: CarTest::testModelYear
int Car::GetModelYear() const {
    return modelYear;
}

// Implement SetPurchasePrice() function
        // Test: CarTest::testPurchasePrice
void Car::SetPurchasePrice(int userPrice) {
    purchasePrice = userPrice;
}
// Implement GetPurchasePrice() function
        // Test: CarTest::testPurchasePrice
int Car::GetPurchasePrice() const {
    return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;
    // Car depreciation formula
    currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// Implement PrintInfo() function to output modelYear, purchasePrice, and currentValue

void Car::PrintInfo() const {
    cout << fixed << setprecision(2);
    cout << "Car's information:" << endl;
    cout << "  Model year: " << modelYear << endl;
    cout << "  Purchase price: $" << purchasePrice << endl;
    cout << fixed << setprecision(0);
    cout << "  Current value: $" << currentValue << endl;
}