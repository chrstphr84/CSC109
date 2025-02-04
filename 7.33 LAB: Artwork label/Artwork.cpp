// Copyright 2025

#include "Artwork.h"
#include <iostream>

// Default constructor
Artwork::Artwork() {
    title = "unknown";
    yearCreated = -1;
}

// Parameterized constructor
Artwork::Artwork(std::string title, int yearCreated, Artist artist) {
    this->title = title;
    this->yearCreated = yearCreated;
    this->artist = artist;
}

// Get the title of the artwork
std::string Artwork::GetTitle() {
    return title;
}
// Get the year the artwork was created
int Artwork::GetYearCreated() {
    return yearCreated;
}

// Print the artwork information.
    // Call the Artist's PrintInfo() function to print the artist's information.
void Artwork::PrintInfo()
{
    artist.PrintInfo();
    std::cout << "Title: " << title << ", " << yearCreated << std::endl;
}
