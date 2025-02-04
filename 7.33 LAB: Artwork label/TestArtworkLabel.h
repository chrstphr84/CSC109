// Copyright 2025

#ifndef TESTARTWORKLABEL_H
#define TESTARTWORKLABEL_H
#include <cxxtest/TestSuite.h>
#include "Artist.h"
#include "Artwork.h"

class newCxxTest : public CxxTest::TestSuite {
    public:

    // Test default artwork
    void testDefaultArtwork() {
        Artwork defaultArtwork;

        TS_ASSERT_EQUALS(defaultArtwork.GetTitle(), "unknown");
        TS_ASSERT_EQUALS(defaultArtwork.GetYearCreated(), -1);
    }

    // Test default artist
    void testDefaultArtist() {
        Artist defaultArtist;

        TS_ASSERT_EQUALS(defaultArtist.GetName(), "unknown");
        TS_ASSERT_EQUALS(defaultArtist.GetBirthYear(), -1);
        TS_ASSERT_EQUALS(defaultArtist.GetDeathYear(), -1);
    }

    // Test artist with positive parameters
    void testArtist1() {
        int birthYear = 1853;
        int deathYear = 1890;
        std::string name = "Vincent van Gogh";

        Artist artist = Artist(name, birthYear, deathYear);

        TS_ASSERT_EQUALS(artist.GetName(), "Vincent van Gogh");
        TS_ASSERT_EQUALS(artist.GetBirthYear(), 1853);
        TS_ASSERT_EQUALS(artist.GetDeathYear(), 1890);
    }

    // Test artist with negative parameters
    void testArtist2() {
        int birthYear = -1;
        int deathYear = -1;
        std::string name = "Brice Marden";

        Artist artist = Artist(name, birthYear, deathYear);

        TS_ASSERT_EQUALS(artist.GetBirthYear(), -1);
        TS_ASSERT_EQUALS(artist.GetDeathYear(), -1);
    }

    // Test printInfo with positive parameters
    void testPrintInfo() {
        int birthYear = 1853;
        int deathYear = 1890;
        std::string name = "Vincent van Gogh";

        Artist artist = Artist(name, birthYear, deathYear);

        TS_ASSERT_EQUALS(artist.GetName(), "Vincent van Gogh");
        TS_ASSERT_EQUALS(artist.GetBirthYear(), 1853);
        TS_ASSERT_EQUALS(artist.GetDeathYear(), 1890);
    }

    // Test printInfo with negative birth year (unknown)
    void testPrintInfoUnknownBirthYear() {
        int birthYear = -1;
        int deathYear = 1890;
        std::string name = "TestArtist1";

        Artist artist = Artist(name, birthYear, deathYear);

        TS_ASSERT_EQUALS(artist.GetName(), "TestArtist1");
        TS_ASSERT_EQUALS(artist.GetBirthYear(), -1);
        TS_ASSERT_EQUALS(artist.GetDeathYear(), 1890);
    }


    // Test printInfo with negative death year (birthYear - present)
    void testPrintInfoPresent() {
        int birthYear = 1984;
        int deathYear = -1;
        std::string name = "TestArtist2";

        Artist artist = Artist(name, birthYear, deathYear);

        TS_ASSERT_EQUALS(artist.GetName(), "TestArtist2");
        TS_ASSERT_EQUALS(artist.GetBirthYear(), 1984);
        TS_ASSERT_EQUALS(artist.GetDeathYear(), -1);
    }
};




#endif //TESTARTWORKLABEL_H
