// Copyright 2025

#ifndef CAR_VALUE_H
#define CAR_VALUE_H


class Car {
private:
    int modelYear;
    // TODO: Declare purchasePrice member (int)
    double currentValue;

public:
    void SetModelYear(int userYear);

    int GetModelYear() const;

    // TODO: Declare SetPurchasePrice() function

    // TODO: Declare GetPurchasePrice() function

    void CalcCurrentValue(int currentYear);

    // TODO: Declare PrintInfo() method to output modelYear, purchasePrice, and
    // currentValue

};



#endif //CAR_VALUE_H
