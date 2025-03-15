// copyright 2025

#ifndef TESTCASES_H
#define TESTCASES_H

#include <iostream>
#include "TwoDArray.h"
#include <cxxtest/TestSuite.h>

class TestCases : public CxxTest::TestSuite
{
public:
    // test getters and setters
    void TestSetRowGetRow() {
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

        double* row = get_row(the_array, 2, 7);
        row = get_row(the_array, 3, 7);

        TS_ASSERT_EQUALS(*(row), *(row3));

        // TS_ASSERT_EQUALS(row[0], 12.00);
        // TS_ASSERT_EQUALS(row[1], 11.00);
        // TS_ASSERT_EQUALS(row[2], 11.00);
        // TS_ASSERT_EQUALS(row[3], 11.00);
        // TS_ASSERT_EQUALS(row[4], 11.00);
        // TS_ASSERT_EQUALS(row[5], 31.00);
        // TS_ASSERT_EQUALS(row[6], 11.00);
    }

    // test set element and get element
    void TestSetElementGetElement() {
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

        set_element(the_array, 2, 7, 3, 100.00);
        TS_ASSERT_EQUALS(get_element(the_array, 2, 7, 3), 100.00);
    }

    // test sum
    void TestSum() {
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

        TS_ASSERT_EQUALS(sum(the_array, 6, 7), 318.00);
    }

    //test fund max
    void TestFindMax() {
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

        TS_ASSERT_EQUALS(find_max(the_array, 6, 7), 31.00);
    }

    // test find min
    void TestFindMin() {
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

        TS_ASSERT_EQUALS(find_min(the_array, 6, 7), 2.00);
    }

    // Test to string
    void TestToString() {
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

        std::string expected = "     11.00       2.00       3.00       4.00       5.00       6.00       7.00\n"
                               "     10.00       9.00       8.00       7.00       6.00       5.00       4.00\n"
                               "     12.00      11.00      11.00      11.00";

    }
};
#endif //TESTCASES_H
