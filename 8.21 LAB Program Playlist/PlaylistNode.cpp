// copyright 2025

#include "PlaylistNode.h"
#include <iostream>
#include <string>

// Constructors

// default constructor
PlaylistNode::PlaylistNode() {
    uniqueID = "none";
    songName = "none";
    artistName = "none";
    songLength = 0;
    nextNodePtr = 0;
}

// parameterized constructor
PlaylistNode::PlaylistNode(std::string uniqueID, std::string songName, std::string artistName, int songLength) {
    this->uniqueID = uniqueID;
    this->songName = songName;
    this->artistName = artistName;
    this->songLength = songLength;
    nextNodePtr = 0;
}


// accessor for uniqueID
std::string PlaylistNode::GetID() const {
    return uniqueID;
}

// accessor for songName
std::string PlaylistNode::GetSongName() const {
    return songName;
}

// accessor for artistName
std::string PlaylistNode::GetArtistName() const {
    return artistName;
}

// accessor for songLength
int PlaylistNode::GetSongLength() const {
    return songLength;
}

// accessor for nextNodePtr - returns the next node
PlaylistNode* PlaylistNode::GetNext() const {
    return nextNodePtr;
}

// mutator for nextNodePtr - inserts a node after the current node
void PlaylistNode::InsertAfter(PlaylistNode* nodePtr) {
    PlaylistNode* temp = nextNodePtr;
    nextNodePtr = nodePtr;
    nodePtr->nextNodePtr = temp;
}

// mutator for nextNodePtr - sets the next node
void PlaylistNode::SetNext(PlaylistNode* nodePtr) {
    nextNodePtr = nodePtr;
}

// PrintPlaylistNode() - outputs the uniqueID, songName, artistName, and songLength
// outputs the uniqueID, songName, artistName, and songLength

void PlaylistNode::PrintPlaylistNode() const {
    std::cout << "Unique ID: " << uniqueID << std::endl;
    std::cout << "Song Name: " << songName << std::endl;
    std::cout << "Artist Name: " << artistName << std::endl;
    std::cout << "Song Length (in seconds): " << songLength << std::endl;
    std::cout << std::endl;
}
