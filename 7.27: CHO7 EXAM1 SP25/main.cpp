// copyright 2025 Christopher Noel

#include <cstdlib>
#include <iostream>
#include "Address.h"


int main()
{

    // declare first_address
    Address first_address(148, "First Ave", "San Diego", "CA", "20392");

    // declare second_address
    Address second_address(553, "Second St", 44, "San Diego", "CA", "10394");

    std::cout << "Comparing address" << std::endl;
    // print the first address
    first_address.print();
    std::cout << "with address" << std::endl;
    // print the second address
    second_address.print();

    // compare the addresses and print the result
    if (first_address < second_address)
        std::cout << "The first address precedes the second address." << std::endl;
    else
        std::cout << "The second address precedes the first address." << std::endl;


    /**
    Running example:

    Comparing address
    148 First Ave
    San Diego, CA, 20392
    with address
    553 Second St, #44
    San Diego, CA, 10394
    The second address precedes the first address.

    */


    return 0;
}
