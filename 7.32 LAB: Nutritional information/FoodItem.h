// Copyright 2025

#ifndef FOODITEMH
#define FOODITEMH

#include <string>


class FoodItem {
public:
    // Default constructor declaration
    FoodItem();

    // constructor with parameters
    FoodItem(std::string name, double fat, double carbs, double protein);

    std::string GetName();
    double GetFat();
    double GetCarbs();
    double GetProtein();
    double GetCalories(double numServings);
    void PrintInfo();

private:
    std::string name;
    double fat;
    double carbs;
    double protein;
};

#endif
