//
//
// Complete a program that reads a vector index as input and outputs the element of a vector of 10 names at the index specified by the input. Use a try block to output the name and a catch block to catch any out_of_range exceptions. When an out_of_range exception is caught, output the message from the exception object and the first element in the vector if the index is negative or the last element if the index is greater than the size of the vector.
//
// Hint: Format the exception outputs using the what() function from the exception object. Do not hard code the exception messages.
//
// Ex: If the input of the program is:
//
// 5
//
// the program outputs:
//
// Jane
//
// Ex: If the input of the program is:
//
// 12
//
// the program outputs:
//
// Exception! vector::_M_range_check: __n (which is 12) >= this->size() (which is 10)
// The closest name is: Johnny
//
// Ex: If the input of the program is:
//
// -2
//
// the program outputs:
//
// Exception! vector::_M_range_check: __n (which is 18446744073709551614) >= this->size() (which is 10)
// The closest name is: Ryley
//

#include <iostream>
#include <vector>
#include <stdexcept>      // For std::out_of_range
using namespace std;

int main() {
    vector<string> names = { "Ryley", "Edan", "Reagan", "Henry", "Caius", "Jane", "Guto", "Sonya", "Tyrese", "Johnny" };
    int index;

    cin >> index;

    /* Type your code here. */
    try {
        cout << names.at(index) << endl;
    }
    catch (const out_of_range& e) {
        cout << "Exception! " << e.what() << endl;
        if (index < 0) {
            cout << "The closest name is: " << names.at(0) << endl;
        }
        if (index > 0 && index > names.size() - 1) {
            cout << "The closest name is: " << names. at(names.size() - 1) << endl;
        }
    }

    return 0;
}
