// Copyright 2025

#ifndef ARTWORK_H
#define ARTWORK_H



#include "Artist.h"

class Artwork{
public:
    Artwork();

    Artwork(string title, int yearCreated, Artist artist);

    string GetTitle();

    int GetYearCreated();

    void PrintInfo();

private:
    // TODO: Declare private data members - title, yearCreated

    // TODO: Declare private data member artist of type Artist

};



#endif //ARTWORK_H
