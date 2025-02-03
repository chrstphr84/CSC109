// Copyright 2025

#ifndef TESTTEAM_H
#define TESTTEAM_H
#include <cxxtest/TestSuite.h>
#include "Team.h"

class newCxxTest : public CxxTest::TestSuite {
public:
    Team team;
    std::string teamName = "Ravens";

    // test SetTeamName and GetTeamName functions
    void testTeamName() {
        team.SetTeamName(teamName);
        TS_ASSERT_EQUALS(team.GetTeamName(), teamName);
    }

    // test SetTeamWins and GetTeamWins functions
    void testWins() {
        //Team team;
        int wins = 5;
        team.SetTeamWins(wins);
        TS_ASSERT_EQUALS(team.GetTeamWins(), wins);
    }

    // test SetTeamLosses and GetTeamLosses functions
    void testLosses() {
        int losses = 6;
        team.SetTeamLosses(losses);
        TS_ASSERT_EQUALS(team.GetTeamLosses(), losses);
    }

    // test GetWinPercentage function
    void testWinPercentage() {
        team.SetTeamWins(80);
        team.SetTeamLosses(82);
        TS_ASSERT_DELTA(team.GetWinPercentage(), 0.49, 0.01);
    }




};

#endif //TESTTEAM_H
