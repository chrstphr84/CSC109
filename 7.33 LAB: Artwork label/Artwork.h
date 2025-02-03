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
    string title;
    int yearCreated;
    Artist artist;

};



#endif //ARTWORK_H
