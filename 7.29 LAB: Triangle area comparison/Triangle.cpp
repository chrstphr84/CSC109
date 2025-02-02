//
// Created by Christopher Noel on 2/1/25.
//

#include "Triangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Triangle::SetBase(double userBase) {
    base = userBase;
}

void Triangle::SetHeight(double userHeight) {
    height = userHeight;
}

double Triangle::GetArea() const {
    //return 0.5 * base * height;
    return area;
}

void Triangle::PrintInfo() const {
    cout << fixed << setprecision(2);
    cout << "Base: " << base << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << GetArea() << endl;
}

void Triangle::CalculateArea()
{
    area = 0.5 * base * height;
}
