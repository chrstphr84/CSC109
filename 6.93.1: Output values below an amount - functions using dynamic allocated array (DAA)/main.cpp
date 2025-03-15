// Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Then, get the last value from the input, and output all integers less than or equal to that value.
//
// Ex: If the input is:
//
// 5 50 60 140 200 75 100
// the output is:
//
// 50 60 75
// The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. The 100 indicates that the program should output all integers less than or equal to 100, so the program outputs 50, 60, and 75. For coding simplicity, follow every output value by a space, including the last one.
//
// Such functionality is common on sites like Amazon, where a user can filter results.
//
// Write your code to define and use two functions:
// int* GetUserValues(const int numValues)
// void OutputIntsLessThanOrEqualToThreshold(int* userValues, int numValues, int upperThreshold)
//
// Utilizing functions helps to make main() very clean and intuitive.

#include <iostream>
#include <vector>
using namespace std;

/* Define your function here */

int* GetUserValues(const int numValues) {
    int* userValues = new int[numValues];
    for (int i = 0; i < numValues; i++) {
        cin >> userValues[i];
    }
    return userValues;
}

void OutputIntsLessThanOrEqualToThreshold(int* userValues, int numValues, int upperThreshold)
{
    for (int i = 0; i < numValues; i++) {
        if (userValues[i] <= upperThreshold) {
            cout << userValues[i] << " ";
        }
    }
    cout << endl;
}


int main() {
    int* userValues;
    int upperThreshold;
    int numValues;

    cin >> numValues;
    userValues = GetUserValues(numValues);  // user cin to read in the user inputs and return a dynamic allocated array

    cin >> upperThreshold;
    OutputIntsLessThanOrEqualToThreshold(userValues, numValues, upperThreshold);  // print the dynamic allocated array

    return 0;
}
