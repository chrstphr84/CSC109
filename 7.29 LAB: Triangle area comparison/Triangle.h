// Copyright 2025

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double base;
    double height;
    double area;

public:
    void SetBase(double userBase);  // set base of triangle
    void SetHeight(double userHeight);  // set height of triangle
    double GetArea() const;  // get area of triangle
    void PrintInfo() const; // print base, height, and area of triangle
    void CalculateArea(); // calculate area of triangle
};


#endif //TRIANGLE_H
