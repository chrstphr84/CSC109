//
// Created by Christopher Noel on 3/14/25.
//

#include "Person.h"
#include <iostream>
#include <string>
#include <sstream>

Person::Person() {
    name = "";
    age = 0;
    phone = "";
    email = "";
    next = nullptr; // initialize next to nullptr
}

Person::Person(std::string name, int age, std::string phone, std::string email) {
    this->name = name;
    this->age = age;
    this->phone = phone;
    this->email = email;
    next = nullptr; // initialize next to nullptr
}

Person* Person::getNext() {
    return next; // return the next person in the list
}


void Person::insertAfter(Person* newPerson) {

    newPerson->next = next;
    next = newPerson; // insert the new person after this person
}

bool Person::operator==(const Person& other) const {
    return (name == other.name && age == other.age && phone == other.phone && email == other.email);
}


Person::~Person() {
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    // TODO:insert return statement here
    os << "Name: " << person.name << "\n"
       << "Age: " << person.age << "\n"
       << "Phone: " << person.phone << "\n"
       << "Email: " << person.email << "\n";
    return os; // return the output stream
}

std::istream& operator>>(std::istream& is, Person* person) {
    // is >> person.name >> person.age >> person.phone >> person.email;
    //
    // We will overload operator>> to read in the string with comma delimiter
    getline(is, person->name, ','); // read name until comma
    std::string ageStr;
    getline(is, ageStr, ','); // read age until comma
    person->age = stoi(ageStr); // convert age string to int
    getline(is, person->phone, ','); // read phone until comma
    getline(is, person->email); // read email until newline
    return is; // return the input stream


}

