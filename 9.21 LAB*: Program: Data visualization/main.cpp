#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <sstream>

using namespace std;

int main() {

    string title, header1, header2;
    cout << "Enter a title for the data:" << endl;
    getline(cin, title);
    cout << "You entered: " << title << endl <<  endl;

    cout << "Enter the column 1 header:" << endl;
    getline(cin, header1);
    cout << "You entered: " << header1 << endl <<  endl;

    cout << "Enter the column 2 header:" << endl;
    getline(cin, header2);
    cout << "You entered: " << header2 << endl;

    ostringstream ossTable;
    ostringstream ossHistogram;

    vector<string> dataString;
    vector<int> dataInt;
    string dataPoint;

    while (true) {
        cout << endl << "Enter a data point (-1 to stop input):" << endl;
        getline(cin, dataPoint);

        // exit condition
        if (dataPoint == "-1") {
            cout << endl;
            break;
        }

        // error checking
        size_t commaPos = dataPoint.find(','); // store position of first comma

        if (dataPoint.find(',') == string::npos) {
            cout << "Error: No comma in string." << endl;
            continue;
        }

        if (dataPoint.find(',', + commaPos + 1) != string::npos) {
            cout << "Error: Too many commas in input." << endl;
            continue;
        }

        string columnA = dataPoint.substr(0, commaPos);
        string numberStr = dataPoint.substr(commaPos + 1);
        int columnB;

        try {
            columnB = stoi(numberStr);
        } catch (invalid_argument&) {
            cout << "Error: Comma not followed by an integer." << endl;
            continue;
        }

        dataString.push_back(columnA);
        dataInt.push_back(columnB);

        // Output the data points
        cout << "Data string: " << columnA << endl;
        cout << "Data integer: " << columnB << endl;
    }

    // Formatted Table
    cout << right << setw(33) << title << endl;
    cout << left << setw(20) << header1 << "|" << right << setw(23) << header2 << endl;
    cout << string(44, '-') << endl;

    // print the table
    for (size_t i = 0; i < dataString.size(); i++) {
        ossTable << left << setw(20) << dataString[i] << "|" << right << setw(23) << dataInt[i] << endl;
    }
    cout << ossTable.str() << endl;

    // output histogram
    for (size_t i = 0; i < dataString.size(); i++) {
        ossHistogram << right << setw(20) << dataString[i] << " " << string(dataInt[i], '*') << endl;
}
    cout << ossHistogram.str();

    return 0;
}

