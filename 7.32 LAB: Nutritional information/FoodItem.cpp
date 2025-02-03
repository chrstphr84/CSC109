// Copyright 2025

#include <iostream>
#include <iomanip>
#include "FoodItem.h"

// default constructor
FoodItem::FoodItem() {
    name = "Water";
    fat = 0.0;
    carbs = 0.0;
    protein = 0.0;
}

// constructor with parameters
FoodItem::FoodItem(std::string name, double fat, double carbs, double protein) {
    this->name = name;
    this->fat = fat;
    this->carbs = carbs;
    this->protein = protein;
}

// Get item name
std::string FoodItem::GetName() {
    return name;
}

// Get item fat
double FoodItem::GetFat() {
    return fat;
}

// Get item carbs
double FoodItem::GetCarbs() {
    return carbs;
}

// Get item protein
double FoodItem::GetProtein() {
    return protein;
}

// Get Item Calories
double FoodItem::GetCalories(double numServings) {
    // Calorie formula
    double calories = ((fat * 9) + (carbs * 4) + (protein * 4)) * numServings;
    return calories;
}



void FoodItem::PrintInfo() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nutritional information per serving of " << name  << ":" << std::endl;
    std::cout << "  Fat: " << fat << " g" << std::endl;
    std::cout << "  Carbohydrates: " << carbs << " g" << std::endl;
    std::cout << "  Protein: " << protein << " g" << std::endl;
}

#include "FoodItem.h"
