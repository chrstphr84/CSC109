// Copyright 2025

#ifndef TEAM_H
#define TEAM_H

#include <string>

using namespace std;

class Team {


    // TODO: Declare private data members - name, wins, losses
private:
    string name;
    int wins;
    int losses;
    //double winPercentage;

public:
    // Mutator functions
    void SetName(string name);
    void SetWins(int wins);
    void SetLosses(int losses);

    // Accessor functions
    string GetName() const;
    int GetWins() const;
    int GetLosses() const;
    double GetWinPercentage() const;

    void PrintStanding() const;

};



#endif //TEAM_H
