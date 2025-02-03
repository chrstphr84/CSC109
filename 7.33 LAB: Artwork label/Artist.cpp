// Copyright 2025

#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// Default constructor
Artist::Artist() {
    artistName = "unknown";
    birthYear = -1;
    deathYear = -1;
}

// Parameterized constructor
Artist::Artist(string artistName, int birthYear, int deathYear) {
    this->artistName = artistName;
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}

// Get the name of the artist
string Artist::GetName() const {
    return artistName;
}

// Get the birth year of the artist
int Artist::GetBirthYear() const {
    return birthYear;
}

// Get the death year of the artist
int Artist::GetDeathYear() const {
    return deathYear;
}

// Print the artist information
    // If the death year is -1, only print the birth year
    // If the death year is negative, print "present" instead of the death year
void Artist::PrintInfo() const {

    if (birthYear >= 0) {
        cout << "Artist: " << artistName << " (" << birthYear;
        if (deathYear >= 0) {
            cout << " to " << deathYear << ")" << endl;
        }
        else {
            cout << " to present)" << endl;
        }
    }
    else {
        cout << "Artist: " << artistName << " (unknown)" << endl;
    }
};
