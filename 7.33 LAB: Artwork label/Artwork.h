// Copyright 2025

#ifndef ARTWORK_H
#define ARTWORK_H

#include "Artist.h"

class Artwork{
public:
    Artwork();
    Artwork(std::string title, int yearCreated, Artist artist);
    std::string GetTitle();
    int GetYearCreated();
    void PrintInfo();

private:
    std::string title;
    int yearCreated;
    Artist artist;

};



#endif //ARTWORK_H
