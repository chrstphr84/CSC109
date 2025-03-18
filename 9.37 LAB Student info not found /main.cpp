// Given a program that searches for a studentâs ID or name in a text file, complete the FindID()
// and FindName() functions. Then, insert a try/catch statement in main() to catch any exceptions
// thrown by FindID() or FindName(), and output the exception message. Each line in the text file
// contains a name and ID separated by a space.
// Function FindID() has two parameters: a student's name (string) and the text file's contents
// (ifstream). The function FindID() returns the ID associated with the student's name if the name is
// in the file, otherwise the function throws a runtime_error with the message "Student ID not found
// for studentName", where studentName is the name of the student.
// Function FindName() has two parameters: a student's ID (string) and the text file's contents
// (ifstream). The function FindName() returns the name associated with the student's ID if the ID is
// in the file, otherwise the function throws a runtime_error with the message "Student name not found
// for studentID", where studentID is the ID of the student.
// The main program takes three inputs from a user: the name of a text file (string), the search option
// for finding the ID or name of a student (int), and the ID or name of a student (string). If the search
// option is 0, FindID() is invoked with the student's name as an argument. If the search option is 1,
// FindName() is invoked with the student's ID as an argument. The main program outputs the search result
// or the caught exception message.
//
// Ex: If the input of the program is:
// roster.txt 0 Reagan
//
// and the contents of roster.txt are:
// Reagan rebradshaw835
// Ryley rbarber894
// Peyton pstott885
// Tyrese tmayo945
// Caius ccharlton329
//
// the output of the program is:
// rebradshaw835
//
// Ex: If the input of the program is:
// roster.txt 0 Mcauley
//
// the program outputs an exception message:
// Student ID not found for Mcauley
//
// Ex: If the input of the program is:
// roster.txt 1 rebradshaw835
//
// the output of the program is:
// Reagan
//
// Ex: If the input of the program is:
// roster.txt 1 mpreston272
//
// the program outputs an exception message:
// Student name not found for mpreston272

#include <string>
#include <iostream>
#include <stdexcept>
#include <fstream>
using namespace std;

string FindID(string name, ifstream &infoFS) {
    string line;
    while (getline(infoFS, line)) {
        size_t pos = line.find(' ');
        string currentName = line.substr(0, pos);
        string currentID = line.substr(pos + 1);
        if (currentName == name) {
            return currentID;
        }
    }
    throw runtime_error("Student ID not found for " + name);
}

string FindName(string ID, ifstream &infoFS) {
    string line;
    while (getline(infoFS, line)) {
        size_t pos = line.find(' ');
        string currentName = line.substr(0, pos);
        string currentID = line.substr(pos + 1);
        if (currentID == ID) {
            return currentName;
        }
    }
    if (infoFS.eof()) {
        throw runtime_error("Student name not found for " + ID);
    }
}

int main() {
    int userChoice;
    string studentName;
    string studentID;

    string studentInfoFileName;
    ifstream studentInfoFS;

    cin >> studentInfoFileName;

    studentInfoFS.open(studentInfoFileName);
    if (!studentInfoFS.is_open()) {
        cout << "File not found" << endl;
        return 1;
    }

    // Read search option from user. 0: FindID(), 1: FindName()
    cin >> userChoice;

    try {
        if (userChoice == 0) {
            cin >> studentName;
            studentID = FindID(studentName, studentInfoFS);
            cout << studentID << endl;
        }
        else {
            cin >> studentID;
            studentName = FindName(studentID, studentInfoFS);
            cout << studentName << endl;
        }
    }
    catch (runtime_error &e) {
        cout << e.what() << endl;
    }

    studentInfoFS.close();
    return 0;
}
