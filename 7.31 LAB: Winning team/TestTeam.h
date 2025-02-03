// Copyright 2025

#ifndef TESTTEAM_H
#define TESTTEAM_H
#include <cxxtest/TestSuite.h>
#include "Team.h"

class newCxxTest : public CxxTest::TestSuite {
public:
    Team team;
    string teamName = "Ravens";

    // test SetName and GetName functions
    void testTeamName() {
        team.SetName(teamName);
        TS_ASSERT_EQUALS(team.GetName(), teamName);
    }

    // test SetWins and GetWins functions
    void testWins() {
        //Team team;
        int wins = 5;
        team.SetWins(wins);
        TS_ASSERT_EQUALS(team.GetWins(), wins);
    }

    // test SetLosses and GetLosses functions
    void testLosses() {
        int losses = 6;
        team.SetLosses(losses);
        TS_ASSERT_EQUALS(team.GetLosses(), losses);
    }

    // test GetWinPercentage function
    void testWinPercentage() {
        team.SetWins(80);
        team.SetLosses(82);
        TS_ASSERT_DELTA(team.GetWinPercentage(), 0.49, 0.01);
    }




};

#endif //TESTTEAM_H
