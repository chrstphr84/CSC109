// copyright 2025

#include <iostream>
#include <string>
#include <sstream>  // don't remove this line; use for ostringstream
#include <iomanip>      // use std::setw to set the width for each number
#include "TwoDArray.h"

using namespace std;

int main() {
    int row_size = 6, col_size = 7;
    double* the_array = new double[row_size*col_size];

    double* row0 = new double[col_size]{11.00, 2.00, 3.00, 4.00, 5.00, 6.00, 7.00};
    double* row1 = new double[col_size]{10.00, 9.00, 8.00, 7.00, 6.00, 5.00, 4.00};
    double* row2 = new double[col_size]{12.00, 11.00, 11.00, 11.00, 11.00, 31.00, 11.00};
    double* row3 = new double[col_size]{5.00, 5.00, 5.00, 5.00, 5.00, 5.00, 5.00};
    double* row4 = new double[col_size]{12.00, 3.00, 4.00, 9.00, 8.00, 7.00, 6.00};
    double* row5 = new double[col_size]{12.00, 3.00, 4.00, 9.00, 8.00, 7.00, 6.00};

    set_row(the_array, 0, 7, row0);
    set_row(the_array, 1, 7, row1);
    set_row(the_array, 2, 7, row2);
    set_row(the_array, 3, 7, row3);
    set_row(the_array, 4, 7, row4);
    set_row(the_array, 5, 7, row5);

    cout << to_string(the_array, 6, 7) << endl;


}
