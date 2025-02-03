// Copyright 2025

#ifndef ARTIST_H
#define ARTIST_H



#include <string>
using namespace std;

class Artist{
public:
    Artist();

    Artist(string artistName, int birthYear, int deathYear);
    string GetName() const;
    int GetBirthYear() const;
    int GetDeathYear() const;
    void PrintInfo() const;

private:
    string artistName;
    int birthYear;
    int deathYear;

};




#endif //ARTIST_H
