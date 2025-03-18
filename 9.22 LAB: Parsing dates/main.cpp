//
//
// Complete main() to read dates from input, one date per line. Each date's format must be as follows: March 1, 1990. Any date not following that format is incorrect and should be ignored. Use the substr() function to parse the string and extract the date. The input ends with -1 on a line alone. Output each correct date as: 3-1-1990.
//
// Ex: If the input is:
//
// March 1, 1990
// April 2 1995
// 7/15/20
// December 13, 2003
// -1
//
// then the output is:
//
// 3-1-1990
// 12-13-2003
//
// Use the provided GetMonthAsInt() function to convert a month string to an integer. If the month string is valid, an integer in the range 1 to 12 inclusive is returned, otherwise 0 is returned. Ex: GetMonthAsInt("February") returns 2 and GetMonthAsInt("7/15/20") returns 0.


#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

int GetMonthAsInt(string month) {
    int monthInt = 0;

    if (month == "January")
        monthInt = 1;
    else if (month == "February")
        monthInt = 2;
    else if (month == "March")
        monthInt = 3;
    else if (month == "April")
        monthInt = 4;
    else if (month == "May")
        monthInt = 5;
    else if (month == "June")
        monthInt = 6;
    else if (month == "July")
        monthInt = 7;
    else if (month == "August")
        monthInt = 8;
    else if (month == "September")
        monthInt = 9;
    else if (month == "October")
        monthInt = 10;
    else if (month == "November")
        monthInt = 11;
    else if (month == "December")
        monthInt = 12;
    return monthInt;
}

int main() {
    ostringstream outputString;
    string date;

    getline(cin, date);

    while (date != "-1") {
        try {
            if (date.find(',') == string::npos) {
                throw invalid_argument("No comma");
            }
            if (date.find(',') != date.find_last_of(',')) {
                throw invalid_argument("Multiple commas");
            }

            istringstream iss(date);
            string monthStr;
            int day, year;
            iss >> monthStr >> day;
            if (iss.fail() || day <= 0) {
                throw invalid_argument("Invalid day");
            }
            iss.ignore(); // Ignore the comma
            iss >> year;
            if (iss.fail() || year <= 0) {
                throw invalid_argument("Invalid year");
            }

            int month = GetMonthAsInt(monthStr);
            if (month == 0) {
                throw invalid_argument("Invalid month");
            }

            outputString << month << "-" << day << "-" << year;
            cout << outputString.str() << endl;
            outputString.str(""); // Clear the ostringstream for the next iteration
            outputString.clear();

        } catch (invalid_argument& e) {
            // Invalid date format, read the next line
        }

        getline(cin, date);
    }

    return 0;
}
