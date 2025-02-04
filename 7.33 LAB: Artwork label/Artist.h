// Copyright 2025

#ifndef ARTIST_H
#define ARTIST_H



#include <string>
//using namespace std;

class Artist{
public:
    Artist();

    Artist(std::string artistName, int birthYear, int deathYear);
    std::string GetName() const;
    int GetBirthYear() const;
    int GetDeathYear() const;
    void PrintInfo() const;

private:
    std::string artistName;
    int birthYear;
    int deathYear;

};




#endif //ARTIST_H
