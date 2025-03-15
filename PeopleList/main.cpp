#include <iostream>

#include "PeopleList.h"
#include "Person.h"
using namespace std;

int main() {
    PeopleList list1;
    list1.loadFile("people.txt"); // Load the list from a file
    cout << list1; // Print the list
    list1.saveFile("people2.txt"); // Save the list to a file


    return 0;
}
