//
// Created by Christopher Noel on 3/14/25.
//

#include "PeopleList.h"
#include "Person.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using std::string;
using std::ostream;
using std::istream;
using std::stringstream;
using std::getline;

using std::endl;

PeopleList::PeopleList() {
    head = nullptr; // initialize head to nullptr
    tail = nullptr; // initialize tail to nullptr
}

PeopleList::~PeopleList() {
    Person* current = head; // start at the head of the list
    while (current != nullptr) { // while there are more persons in the list
        Person* next = current->getNext(); // get the next person
        delete current; // delete the current person
        current = next; // move to the next person
    }
    head = nullptr; // set head to nullptr
    tail = nullptr; // set tail to nullptr
}

void PeopleList::append(Person* newPerson) {
    if (head == nullptr) { // if the list is empty
        head = newPerson; // set head to the new person
        tail = newPerson; // set tail to the new person
    } else {
        tail->insertAfter(newPerson); // insert the new person after the tail
        tail = newPerson; // set tail to the new person
    }
}

bool PeopleList::operator==(const PeopleList& other) {
    Person* current = head; // start at the head of the list
    Person* otherCurrent = other.head; // start at the head of the other list
    while (current != nullptr && otherCurrent != nullptr) { // while there are more persons in both lists
        if (!(*current==*otherCurrent)) { // if the persons are equal
            return false; // if the persons are not equal, return false
        }
        current = current->getNext(); // move to the next person in this list
        otherCurrent = otherCurrent->getNext(); // move to the next person in the other list
        }
    return true; // if we reached the end of both lists, return true
    }

void PeopleList::loadFile(const std::string& filename) {
    std::ifstream ifs(filename); // open the file for reading
    if (!ifs) { // if the file could not be opened
        std::cerr << "Error opening file for reading: " << filename << std::endl; // print error message
        return; // return from the function
    }
    ifs >> *this; // read the list from the file
    ifs.close(); // close the file
}

void PeopleList::saveFile(const std::string& filename) {
    std::ofstream ofs(filename); // open the file for writing
    if (!ofs) { // if the file could not be opened
        std::cerr << "Error opening file for writing: " << filename << std::endl; // print error message
        return; // return from the function
    }
    ofs << *this; // write the list to the file
    ofs.close(); // close the file

}


std::ostream& operator<<(std::ostream& os, const PeopleList& list) {
    Person* current = list.head; // start at the head of the list}
    while (current != nullptr) { // while there are more persons in the list
        os << *current << std::endl; // print the current person
        current = current->getNext(); // move to the next person
    }
    return os; // return the output stream
}

std::istream& operator>>(std::istream& is, PeopleList& peopleList) {
    std::string line;
    while (getline(is, line)) { // read each line from the input
        std::stringstream ss(line); // create a string stream from the line
        Person* person = new Person(); // create a new person
        ss >> person; // read the person from the input
        peopleList.append(person); // append the new person to the peopleList
    }
    return is; // return the input stream
}
