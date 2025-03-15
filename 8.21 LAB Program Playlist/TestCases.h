// copyright 2025

#ifndef TESTCASES_H
#define TESTCASES_H
#include <cxxtest/TestSuite.h>
#include "PlaylistNode.h"
//Include your classes header file(s) below and uncomment.


class newCxxTest : public CxxTest::TestSuite {
public:

    // test PlaylistNode constructor
    void testPlaylistNodeConstructor() {
        PlaylistNode* testNode = new PlaylistNode();
        TS_ASSERT_EQUALS(testNode->GetID(), "none");
        TS_ASSERT_EQUALS(testNode->GetSongName(), "none");
        TS_ASSERT_EQUALS(testNode->GetArtistName(), "none");
        TS_ASSERT_EQUALS(testNode->GetSongLength(), 0);
        TS_ASSERT_EQUALS(testNode->GetNext(), nullptr);
    }

    // test PlaylistNode parameterized constructor
    void testPlaylistNodeParameterizedConstructor() {
        PlaylistNode* testNode = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        TS_ASSERT_EQUALS(testNode->GetID(), "S123");
        TS_ASSERT_EQUALS(testNode->GetSongName(), "Peg");
        TS_ASSERT_EQUALS(testNode->GetArtistName(), "Steely Dan");
        TS_ASSERT_EQUALS(testNode->GetSongLength(), 237);
        TS_ASSERT_EQUALS(testNode->GetNext(), nullptr);
    }

    // test PlaylistNode InsertAfter
    void testPlaylistNodeInsertAfter() {
        PlaylistNode* testNode1 = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        PlaylistNode* testNode2 = new PlaylistNode("S124", "Reelin' in the Years", "Steely Dan", 258);
        testNode1->InsertAfter(testNode2);
        TS_ASSERT_EQUALS(testNode1->GetNext(), testNode2);
        TS_ASSERT_EQUALS(testNode2->GetNext(), nullptr);
    }

    // test PlaylistNode SetNext
    void testPlaylistNodeSetNext() {
        PlaylistNode* testNode1 = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        PlaylistNode* testNode2 = new PlaylistNode("S124", "Reelin' in the Years", "Steely Dan", 258);
        testNode1->SetNext(testNode2);
        TS_ASSERT_EQUALS(testNode1->GetNext(), testNode2);
    }


    // test PlaylistNode PrintPlaylistNode
    void testPlaylistNodePrintPlaylistNode() {
        PlaylistNode* testNode = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        testNode->PrintPlaylistNode();
        TS_ASSERT_EQUALS(testNode->GetID(), "S123");
        TS_ASSERT_EQUALS(testNode->GetSongName(), "Peg");
        TS_ASSERT_EQUALS(testNode->GetArtistName(), "Steely Dan");
        TS_ASSERT_EQUALS(testNode->GetSongLength(), 237);
    }

    // test PlaylistNode GetID
    void testPlaylistNodeGetID() {
        PlaylistNode* testNode = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        TS_ASSERT_EQUALS(testNode->GetID(), "S123");
    }

    // test PlaylistNode GetSongName
    void testPlaylistNodeGetSongName() {
        PlaylistNode* testNode = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        TS_ASSERT_EQUALS(testNode->GetSongName(), "Peg");
    }

    // test PlaylistNode GetArtistName
    void testPlaylistNodeGetArtistName() {
        PlaylistNode* testNode = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        TS_ASSERT_EQUALS(testNode->GetArtistName(), "Steely Dan");
    }

    // test PlaylistNode GetSongLength
    void testPlaylistNodeGetSongLength() {
        PlaylistNode* testNode = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        TS_ASSERT_EQUALS(testNode->GetSongLength(), 237);
    }

    // test PlaylistNode GetNext
    void testPlaylistNodeGetNext() {
        PlaylistNode* testNode1 = new PlaylistNode("S123", "Peg", "Steely Dan", 237);
        PlaylistNode* testNode2 = new PlaylistNode("S124", "Reelin' in the Years", "Steely Dan", 258);
        testNode1->SetNext(testNode2);
        TS_ASSERT_EQUALS(testNode1->GetNext(), testNode2);
    }


};

#endif //TESTCASES_H
