//
// Created by Christopher Noel on 2/1/25.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    double base;
    double height;
    double area;

public:
    void SetBase(double userBase);
    void SetHeight(double userHeight);
    double GetArea() const;
    void PrintInfo() const;
    void CalculateArea();
};


#endif //TRIANGLE_H
