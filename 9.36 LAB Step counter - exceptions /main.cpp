#include <iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;

double StepsToMiles(int steps) {
    if (steps < 0) {
       throw runtime_error("Exception: Negative step count entered.");
    }
    return steps / 2000.0;
}


int main() {
    int numberOfSteps;
    cin >> numberOfSteps;

    try {
        cout << fixed << setprecision(2) << StepsToMiles(numberOfSteps) << endl;
    } catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
