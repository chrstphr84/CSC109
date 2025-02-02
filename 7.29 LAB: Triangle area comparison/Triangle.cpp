// Copyright 2025

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Triangle.h"

//using namespace std;

void Triangle::SetBase(double userBase) {
    base = userBase;
}

void Triangle::SetHeight(double userHeight) {
    height = userHeight;
}

double Triangle::GetArea() const {
    return 0.5 * base * height; // calculate and return area of triangle
}

// void Triangle::PrintInfo() const {
//     std::cout << std::fixed << std::setprecision(2); // set output to 2 decimal places
//     std::cout << "Base: " << base << std::endl;
//     std::cout << "Height: " << height << std::endl;
//     std::cout << "Area: " << GetArea() << std::endl;
// }

void Triangle::CalculateArea()
{
    area = 0.5 * base * height;
}
