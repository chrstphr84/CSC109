// Copyright 2025

#include "Artist.h"
#include <iostream>
#include <string>


// Default constructor
Artist::Artist() {
    artistName = "unknown";
    birthYear = -1;
    deathYear = -1;
}

// Parameterized constructor
Artist::Artist(std::string artistName, int birthYear, int deathYear) {
    this->artistName = artistName;
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}

// Get the name of the artist
std::string Artist::GetName() const {
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
        std::cout << "Artist: " << artistName << " (" << birthYear;
        if (deathYear >= 0) {
            std::cout << " to " << deathYear << ")" << std::endl;
        }
        else
            {
            std::cout << " to present)" << std::endl;
        }
    }
    else
        {
        std::cout << "Artist: " << artistName << " (unknown)" << std::endl;
    }
};
