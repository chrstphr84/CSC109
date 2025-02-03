// Copyright 2025

#ifndef TEAM_H
#define TEAM_H

#include <string>

//using namespace std;

class Team {

private:
    std::string name;
    int wins;
    int losses;
    //double winPercentage;

public:
    // Mutator functions
    void SetTeamName(std::string name);
    void SetTeamWins(int wins);
    void SetTeamLosses(int losses);

    // Accessor functions
    std::string GetTeamName() const;
    int GetTeamWins() const;
    int GetTeamLosses() const;
    double GetWinPercentage() const;

    void PrintStanding() const;

};



#endif //TEAM_H
