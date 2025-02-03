// Copyright 2025


#ifndef CAR_H
#define CAR_H

class Car {
private:
    int modelYear;
    int purchasePrice;
    double currentValue;

public:
    void SetModelYear(int userYear);
    int GetModelYear() const;
    void SetPurchasePrice(int userPrice);
    int GetPurchasePrice() const;
    void CalcCurrentValue(int currentYear);
    int GetCurrentValue() const;
    void PrintInfo() const;

};


#endif //CAR_H
