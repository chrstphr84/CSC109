// Copyright 2025

#include <iostream>
#include <iomanip>
#include "Team.h"


// Set the team name
void Team::SetTeamName(std::string teamName) {
    name = teamName;
}

// Set the number of wins
void Team::SetTeamWins(int teamWins) {
    wins = teamWins;
}

// Set the number of losses
void Team::SetTeamLosses(int teamLosses) {
    losses = teamLosses;
}

// Return the team name
std::string Team::GetTeamName() const {
    return name;
}

// Return the number of wins
int Team::GetTeamWins() const {
    return wins;
}

// Return the number of losses
int Team::GetTeamLosses() const {
    return losses;
}

// Calculate win percentage
double Team::GetWinPercentage() const {
    double winPercentage = static_cast<double>(wins) / (wins + losses);
    return winPercentage;
}

// Commented out for testing
//
// // Print results of team standing
// void Team::PrintStanding() const {
//     // Print win percentage
//     std::cout <<  "Win percentage: "  << std::fixed << std::setprecision(2) << GetWinPercentage() << std::endl;
//
//     //  A team has a winning average if the win percentage is 0.5 or greater.
//     if (GetWinPercentage() >= 0.5) {
//         std::cout << "Congratulations, Team " << name << " has a winning average!" << std::endl;
//     }
//     else {
//         std::cout << "Team " << name << " has a losing average." << std::endl;
//     }
// }

#include "Team.h"
