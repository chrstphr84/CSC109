#include <iostream>
using namespace std;

int main() {
    cin.exceptions(ios::failbit); // Allow cin to throw exceptions
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    int max = 0;

    int count = 0;
    try {
        while (count < 3) {
            if (count == 0) {
                cin >> val1;
                max = val1;
            }
            else if (count == 1) {
                cin >> val2;
                if (val2 > max) {
                    max = val2;
                }
            }
            else if (count == 2) {
                cin >> val3;
                if (val3 > max) {
                    max = val3;
                }
            }
            count++;
        }

        cout << max << endl;

    } catch (ios_base::failure &e) {
        cout << count << " input(s) read:" << endl;
        if (max > 0) {
            cout << "Max is " << max << endl;
        }
        else {
            cout << "No max" << endl;;
        }
        return 0;
    }
}
