#include <iostream>
#include <string>
using namespace std;

int main() {

    string input;
    string firstWord;
    string secondWord;
    size_t commaPosition;
    size_t spaces;

    cout << "Enter input string:" << endl;
    getline(cin, input);

    while (input != "q") {
        // check if input contains a comma
        if (input.find(',') == string::npos) {
            cout << "Error: No comma in string." << endl;
            cout << endl;
        } else {
            // find the position of the comma
            commaPosition = input.find(',');
            firstWord = input.substr(0, commaPosition);
            secondWord = input.substr(commaPosition + 1);

            spaces= input.find(' ');
            if (spaces != string::npos) {
                firstWord.erase(firstWord.find_last_not_of(' ') + 1);
                secondWord.erase(0, secondWord.find_first_not_of(' '));
            }

            cout << "First word: " << firstWord << endl;
            cout << "Second word: " << secondWord << endl;
            cout << endl;

        }
        cout << "Enter input string:" << endl;
        getline(cin, input);
    }

    return 0;
}
