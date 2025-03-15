// copyright 2025

#include "TwoDArray.h"
#include <iomanip>
#include <sstream>

// sets the array of row_vals in row
void set_row(double *the_array, int row_num, int col_size, double *row_vals) {
    double *row = the_array + row_num * col_size;
    while (col_size--) {
        *row++ = *row_vals++;
    }
}

// gets the specified row from a two-dimensional array
double* get_row(double *the_array, int row_num, int col_size) {
    return the_array + row_num * col_size;
}

// sets the specified element
void set_element(double *the_array, int row_num, int col_size, int col_num, double val) {
    *(the_array + row_num * col_size + col_num) = val;
}

// gets the specified element
double get_element(double *the_array, int row_num, int col_size, int col_num) {
    return *(the_array + row_num * col_size + col_num);
}

// returns sum of the values in the array
double sum(double *the_array, int row_size, int col_size) {
    double sum = 0;
    double *ptr = the_array;
    for (int i = 0; i < row_size * col_size; i++) {
        sum += *ptr;
        ptr++;
    }
    return sum;
}

double find_max(double *the_array, int row_size, int col_size) {
    double max = *the_array;
    double *ptr = the_array;
    for (int i = 0; i < row_size * col_size; i++) {
        if (*ptr > max) {
            max = *ptr;
        }
        ptr++;
    }
    return max;
}
double find_min(double *the_array, int row_size, int col_size) {
    double min = *the_array;
    double *ptr = the_array;
    for (int i = 0; i < row_size * col_size; i++) {
        if (*ptr < min) {
            min = *ptr;
        }
        ptr++;
    }
    return min;
}

// Returns a string representing the two-dimensional array. Set the width to 10 spaces. Use fixed and setprecision to 2 to format your output.

std::string to_string(double *the_array, int row_size, int col_size) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(2);
    double *ptr = the_array;
    for (int i = 0; i < row_size; i++) {
        for (int j = 0; j < col_size; j++) {
            oss << std::setw(10) << *ptr;
            ptr++;
        }
        oss << std::endl;
    }
    return oss.str();
}
