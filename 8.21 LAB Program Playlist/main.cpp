// copyright 2025

#include <iostream>
#include "PlaylistNode.h"
#include <string>

using namespace std;

void PrintMenu(const string playlistTitle) {
    cout << playlistTitle << " PLAYLIST MENU" << endl;
    cout << "a - Add song" << endl;
    cout << "d - Remove song" << endl;
    cout << "c - Change position of song" << endl;
    cout << "s - Output songs by specific artist" << endl;
    cout << "t - Output total time of playlist (in seconds)" << endl;
    cout << "o - Output full playlist" << endl;
    cout << "q - Quit" << endl << endl;
    cout << "Choose an option:" << endl;

}

PlaylistNode* ExecuteMenu(char option, string playlistTitle, PlaylistNode* headNode){
    int count, currentPosition, newPosition, totalTime, songLength;
    PlaylistNode* temp;
    PlaylistNode* current;
    PlaylistNode* previous;

    switch (option)
    {
        case 'a': {
            cout << "ADD SONG" << endl;
            string uniqueID, songName, artistName;
            cout << "Enter song's unique ID:" << endl;
            getline(cin, uniqueID);
            cout << "Enter song's name:" << endl;
            getline(cin, songName);
            cout << "Enter artist's name:" << endl;
            getline(cin, artistName);
            cout << "Enter song's length (in seconds):" << endl;
            cin >> songLength;
            cin.ignore(); // to ignore the newline character left in the buffer
            PlaylistNode* newNode = new PlaylistNode(uniqueID, songName, artistName, songLength);
            if (headNode == nullptr) {
                headNode = newNode;
            } else {
                current = headNode;
                while (current->GetNext() != nullptr) {
                    current = current->GetNext();
                }
                current->SetNext(newNode);
            }
            cout << endl;
            break;
        }
        case 'd': {
            cout << "REMOVE SONG" << endl;
            string uniqueID;
            cout << "Enter song's unique ID:" << endl;
            getline(cin, uniqueID);
            current = headNode;
            previous = nullptr;
            while (current != nullptr) {
                if (current->GetID() == uniqueID) {
                    string removedSongName = current->GetSongName(); // Store the song name
                    if (previous == nullptr) {
                        headNode = current->GetNext();
                    } else {
                        previous->SetNext(current->GetNext());
                    }
                    delete current;
                    cout << "\"" << removedSongName << "\" removed." << endl; // Print the song name
                    cout << endl;   // space between error message and prompt for user input
                    break;
                }
                previous = current;
                current = current->GetNext();
            }
            break;
    }
        case 'c': {
                cout << "CHANGE POSITION OF SONG" << endl;
                cout << "Enter song's current position:" << endl;
                cin >> currentPosition;
                cout << "Enter new position for song:" << endl;
                cin >> newPosition;
                cin.ignore(); // to ignore the newline character left in the buffer
                if (currentPosition == newPosition) {
                    break;
                }
                current = headNode;
                previous = nullptr;
                count = 1;
                while (current != nullptr) {
                    if (count == currentPosition) {
                        temp = current;
                        if (previous == nullptr) {
                            headNode = current->GetNext();
                        } else {
                            previous->SetNext(current->GetNext());
                        }
                        break;
                    }
                    previous = current;
                    current = current->GetNext();
                    count++;
                }
                if (newPosition == 1) {
                    temp->SetNext(headNode);
                    headNode = temp;
                } else {
                    current = headNode;
                    previous = nullptr;
                    count = 1;
                    while (current != nullptr) {
                        if (count == newPosition) {
                            temp->SetNext(current);
                            if (previous == nullptr) {
                                headNode = temp;
                            } else {
                                previous->SetNext(temp);
                            }
                            break;
                        }
                        previous = current;
                        current = current->GetNext();
                        count++;
                    }
                }
                cout << "\"" << temp->GetSongName() << "\"" << " moved to position " << newPosition  << endl;
                cout << endl;   // space between error message and prompt for user input
                break;
        }

        case 's': {
            cout << "OUTPUT SONGS BY SPECIFIC ARTIST" << endl;
            string artistName;
            cout << "Enter artist's name:" << endl;
            getline(cin, artistName);
            cout << endl;
            current = headNode;
            count = 1;
            while (current != nullptr) {
                if (current->GetArtistName() == artistName) {
                    cout << count << "." << endl;
                    current->PrintPlaylistNode();
                }
                current = current->GetNext();
                count++;
            }
            cout << endl;   // space between error message and prompt for user input
            break;
        }
        case 't': {
            cout << "OUTPUT TOTAL TIME OF PLAYLIST (IN SECONDS)" << endl;
            totalTime = 0;
            current = headNode;
            while (current != nullptr) {
                totalTime += current->GetSongLength();
                current = current->GetNext();
            }
            cout << "Total time: " << totalTime << " seconds" << endl;
            cout << endl;   // space between error message and prompt for user input
            break;
        }
        case 'o': {
            cout << playlistTitle << " - OUTPUT FULL PLAYLIST" << endl;
            current = headNode;
            if (current == nullptr) {
                cout << "Playlist is empty" << endl;
                cout << endl;
                break;
            }
            count = 1;
            while (current != nullptr) {
                cout << count << "." << endl;
                current->PrintPlaylistNode();
                current = current->GetNext();
                count++;
            }

            break;
        }
        case 'q':
            break;
        default:
            cout << "Invalid option. Please try again." << endl;

            break;
    }

    return headNode;
}

int main() {
    // Prompt user for playlist title
    string playlistTitle;
    cout << "Enter playlist's title:" << endl;
    getline(cin, playlistTitle);
    cout << endl; // space between user input and menu

    // Print menu
    char option;
    PlaylistNode* headNode = nullptr;
    PrintMenu(playlistTitle);
    cin >> option;
    cin.ignore(); // to ignore the newline character left in the buffer

    while (option != 'q') {
        headNode = ExecuteMenu(option, playlistTitle, headNode);
        PrintMenu(playlistTitle);
        cin >> option;
        cin.ignore(); // to ignore the newline character left in the buffer
    }
    return 0;
}
