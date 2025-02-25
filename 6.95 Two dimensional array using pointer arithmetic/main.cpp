// For this homework, you are required to use pointer arithmetic exclusively. Using array syntax (e.g., `a[1][2]`) will result in no credit for your submission. Additionally, you must provide eight test cases—one for each function—demonstrating the use of pointers. Be sure to submit all test cases along with your assignment via Web-CAT.
//
// Below are the function declarations using pointers. Please ensure you use the exact names and formats provided. Any changes to the function names or parameters will cause you to fail the instructor test.
//
// Implement the following functions to operate on a two-dimensional array. The main function should call each of these functions and display the corresponding results. The functions must have the following declarations. For this homework assignment, don't use c++ class for this assignment.
//
// Name your header file as TwoDArray.h.  Include the following functions declaration in your header file.
//
// Name your implementation file as TwoDArray.cpp.
//
// The two-dimensional array stores double values.
//
// // *thearray is a two dimensional array; rownum is the row number to be replaced ; colsize is column size; rowvals is the new the row void setrow(double *thearray , int rownum, int colsize, double *rowvals); // Stores the array of row vals in row
//
// // return a row of two-dimensional array by row number. double* getrow(double *thearray, int rownum, int colsize); // Returns the specified row from a two-dimensional array
//
// // set a value in a two-dimensional array by row and column number void setelement( double *thearray, int rownum, int colsize, int col_num, double val); // Sets the specified element
//
// // return a value from a two-dimensional array by row and column number. double getelement(double *thearray, int rownum, int colsize, int col_num); // Returns the specified element
//
// double sum(double *thearray, int rowsize, int col_size); // Returns sum of the values in the array
//
// double findmax(double *thearray, int rowsize, int colsize);  // Returns the largest value in the array
//
// double findmin(double *thearray, int rowsize, int colsize); // Returns the smallest value in the array
//
// string tostring(double *thearray, int rowsize, int colsize); // Returns a string representing the two-dimensional array. Set the width to 10 spaces. Use fixed and setprecision to 2 to format your output.
//
// Create a two-dimensional array and test the above function.  I will use a different two-dimensional array to test your code.
//
//      11.00      2.00      3.00      4.00      5.00      6.00      7.00
//      10.00      9.00      8.00      7.00      6.00      5.00      4.00
//      12.00     11.00     11.00     11.00     11.00     31.00     11.00
//       5.00      5.00      5.00      5.00      5.00      5.00      5.00
//      12.00      3.00      4.00      9.00      8.00      7.00      6.00
//      12.00      3.00      4.00      9.00      8.00      7.00      6.00

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