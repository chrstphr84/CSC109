//
// Created by Christopher Noel on 3/14/25.
//  This code is overcommented for educational purposes.

#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <sstream>

class Person {
public:
    Person(); // default constructor
    Person(std::string name, int age, std::string phone, std::string email); // parameterized constructor
    Person* getNext(); // get next person
    ~Person(); // destructor

    // setters
    void insertAfter(Person* newPerson); // insert a new person after this person

    // getters
    bool operator==(const Person& other) const; // compare two persons

    // output operator overload
    friend std::ostream& operator<<(std::ostream& os, const Person& person); // print person

    // input operator overload
    friend std::istream& operator>>(std::istream& is, Person* person); // read person from input

    private:
    std::string name;
    int age;
    std::string phone;
    std::string email;
    Person* next; // pointer to the next person in the list
};



#endif //PERSON_H
