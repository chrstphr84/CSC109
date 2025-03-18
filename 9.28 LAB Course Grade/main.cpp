#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

char calculateGrade(double average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    return 'F';
}

int main() {

    /* TODO: Declare any necessary variables here. */
    ifstream inFile;
    ofstream outFile;
    string inputFile;
    int midterm1, midterm2, final;
    double midterm1Sum = 0, midterm2Sum = 0, finalSum = 0;

    vector<string> studentNames;
    vector<int> midterm1Scores, midterm2Scores, finalScores;

    /* TODO: Read a file name from the user and read the tsv file here. */
    cin >> inputFile;

    inFile.open(inputFile);
    if (inFile.fail()) {
        cout << "Error opening file." << endl;
        return 1;
    }
    outFile.open("report.txt");
    if (outFile.fail()) {
        cout << "Error opening output file." << endl;
        return 1;
    }

    string line, lastName, firstName;
    while (getline(inFile, line)) {
        stringstream ss(line);
        getline(ss, lastName, '\t');
        getline(ss, firstName, '\t');
        ss >> midterm1 >> midterm2 >> final;

        studentNames.push_back(lastName + "\t" + firstName);
        midterm1Scores.push_back(midterm1);
        midterm2Scores.push_back(midterm2);
        finalScores.push_back(final);
    }

    /* TODO: Compute student grades and exam averages, then output results to a text file here. */
    for (int i = 0; i < studentNames.size(); i++) {
        double average = (midterm1Scores[i] + midterm2Scores[i] + finalScores[i]) / 3.0;
        char grade = calculateGrade(average);

        outFile << studentNames[i] << "\t"
                << midterm1Scores[i] << "\t"
                << midterm2Scores[i] << "\t"
                << finalScores[i] << "\t"
                << grade << endl;

        midterm1Sum += midterm1Scores[i];
        midterm2Sum += midterm2Scores[i];
        finalSum += finalScores[i];
    }

    outFile << endl;
    double midterm1Avg = midterm1Sum / studentNames.size();
    double midterm2Avg = midterm2Sum / studentNames.size();
    double finalAvg = finalSum / studentNames.size();
    outFile << "Averages: midterm1 " << fixed << setprecision(2) << midterm1Avg
            << ", midterm2 " << fixed << setprecision(2) << midterm2Avg
            << ", final " << fixed << setprecision(2) << finalAvg << endl;

    inFile.close();
    outFile.close();

    return 0;
}
