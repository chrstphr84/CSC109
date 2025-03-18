// Copyright 2025 Christopher Noel

#include <iostream>
#include "Number.h"

Number::Number(int number) {
    num = number;
}

void Number::SetNum(int number) {
    num = number;
}

int Number::GetNum() {
    return num;
}

/* Type your code here */
std::ostream& operator<<(std::ostream &out, const Number& n) {
    out << "The value is " << n.num << std::endl;
    return out;
}
