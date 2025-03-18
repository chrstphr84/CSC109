//
// Created by Christopher Noel on 3/17/25.
//

#include "Number.h"
#include <iostream>
using namespace std;

int main() {
    int input;
    cin >> input;

    Number num = Number(input);
    cout << num;

    return 0;
}
