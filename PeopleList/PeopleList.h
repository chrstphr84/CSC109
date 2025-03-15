//
// Created by Christopher Noel on 3/14/25.
//

#ifndef PEOPLELIST_H
#define PEOPLELIST_H
#include "Person.h"
#include <iostream>
#include <string>
#include <sstream>


class PeopleList {
public:
    PeopleList(); // default constructor
    ~PeopleList(); // destructor
    void append(Person* newPerson); // append a new person to the list
    bool operator==(const PeopleList& other); // compare two lists
    friend std::ostream& operator<<(std::ostream& os, const PeopleList& list); // print list
    friend std::istream& operator>>(std::istream& is, PeopleList& peopleList); // read peopleList from input
    void saveFile(const std::string& filename); // save list to file
    void loadFile(const std::string& filename); // load list from file
private:
    Person* head; // pointer to the head of the list
    Person* tail; // pointer to the tail of the list
    int size; // size of the list

};



#endif //PEOPLELIST_H
