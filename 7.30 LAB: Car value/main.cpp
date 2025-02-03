// Copyright 2025

#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    int userYear;
    int userPrice;
    int userCurrentYear;
    Car myCar;

    cin >> userYear;
    cin >> userPrice;
    cin >> userCurrentYear;

    myCar.SetModelYear(userYear);
    myCar.SetPurchasePrice(userPrice);
    myCar.CalcCurrentValue(userCurrentYear);

    myCar.PrintInfo();

    return 0;
}