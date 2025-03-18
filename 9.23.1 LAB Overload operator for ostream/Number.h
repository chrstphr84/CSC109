// Copyright 2025 Christopher Noel

#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class Number {
public:
    explicit Number(int);
    void SetNum(int);
    int GetNum();
    //Declared as a friend function to give operator<< private member access
    friend std::ostream& operator<<(std::ostream &out, const  Number& n);

private:
    int num;
};


#endif //NUMBER_H
