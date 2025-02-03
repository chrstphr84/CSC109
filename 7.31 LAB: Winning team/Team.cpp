// Copyright 2025

#include <iostream>
#include <iomanip>
#include "Team.h"
using namespace std;


// Set the team name
void Team::SetName(string teamName) {
    name = teamName;
}

// Set the number of wins
void Team::SetWins(int teamWins) {
    wins = teamWins;
}

// Set the number of losses
void Team::SetLosses(int teamLosses) {
    losses = teamLosses;
}


// Accessor functions -
//       GetName(), GetWins(), GetLosses()

// Return the team name
string Team::GetName() const {
    return name;
}

// Return the number of wins
int Team::GetWins() const {
    return wins;
}

// Return the number of losses
int Team::GetLosses() const {
    return losses;
}


// Calculate win percentage
double Team::GetWinPercentage() const {
    double winPercentage = static_cast<double>(wins) / (wins + losses);
    return winPercentage;
}


// Print results
//  A team has a winning average if the win percentage is 0.5 or greater.
void Team::PrintStanding() const {
    cout <<  "Win percentage: "  << fixed << setprecision(2) << GetWinPercentage() << endl;
    //  Determine if team has a winning average: win percentage is 0.5 or greater.
    if (GetWinPercentage() >= 0.5) {
        cout << "Congratulations, Team " << name << " has a winning average!" << endl;
    }
    else {
        cout << "Team " << name << " has a losing average." << endl;
    }
}

#include "Team.h"
