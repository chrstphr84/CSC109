//
//
// A photographer is organizing a photo collection about the national parks in the US and would like to annotate the information about each of the photos into a separate set of files. Write a program that reads the name of a text file containing a list of photo file names. The program then reads the photo file names from the text file, replaces the "_photo.jpg" portion of the file names with "_info.txt", and outputs the modified file names.
//
// Assume the unchanged portion of the photo file names contains only letters and numbers, and the text file stores one photo file name per line. If the text file is empty, the program produces no output.
//
// Ex: If the input of the program is:
//
// ParkPhotos.txt
//
// and the contents of ParkPhotos.txt are:
//
// Acadia2003_photo.jpg
// AmericanSamoa1989_photo.jpg
// BlackCanyonoftheGunnison1983_photo.jpg
// CarlsbadCaverns2010_photo.jpg
// CraterLake1996_photo.jpg
// GrandCanyon1996_photo.jpg
// IndianaDunes1987_photo.jpg
// LakeClark2009_photo.jpg
// Redwood1980_photo.jpg
// VirginIslands2007_photo.jpg
// Voyageurs2006_photo.jpg
// WrangellStElias1987_photo.jpg
//
// the output of the program is:
//
// Acadia2003_info.txt
// AmericanSamoa1989_info.txt
// BlackCanyonoftheGunnison1983_info.txt
// CarlsbadCaverns2010_info.txt
// CraterLake1996_info.txt
// GrandCanyon1996_info.txt
// IndianaDunes1987_info.txt
// LakeClark2009_info.txt
// Redwood1980_info.txt
// VirginIslands2007_info.txt
// Voyageurs2006_info.txt
// WrangellStElias1987_info.txt
//



#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile;
    string fileName, userInput;

    cin >> userInput;

    inFile.open(userInput);
    if (inFile.fail()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    while (getline(inFile, fileName)) {
        size_t pos = fileName.find("_photo.jpg");
        if (pos != string::npos) {
            fileName.replace(pos, 10, "_info.txt");
            cout << fileName << endl;
        }
    }

    inFile.close();
    return 0;
}
