// Copyright 2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include "car_value.h"

using namespace std;

void Car::SetModelYear(int userYear){
    modelYear = userYear;
}

int Car::GetModelYear() const {
    return modelYear;
}

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(int userPrice) {
    purchasePrice = userPrice;
}

// TODO: Implement GetPurchasePrice() function
void Car::GetPurchasePrice() const {
    return purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
    double depreciationRate = 0.15;
    int carAge = currentYear - modelYear;

    // Car depreciation formula
    currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and
// currentValue