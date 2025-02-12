// Implement a class Address. An address has a house number, a street, an optional apartment number, a city, a state, and a postal code.
// Use Address as your class name
//
// Create the following instance variables in your class Address:
//
// house_number is an integer;
// street is a string;
// apartment_number is an integer;
// city is a string;
// state is a string;
// postal_code is a string;
// Supply three constructors:
//
// The first one is the default constructor.
// Set all the integer variables to 0 and string variables to blank values.
//
// The second constructor takes in an address with an apartment number.
// The order of the parameters is as follows:
//
// house number, street name, apartment number, city, state, and postal code
// The third constructor takes in an address without an apartment number.
// The order of the parameters is as follows:
//
// house number, street name, city, state, and postal code. If the address has no apartment number, set it to zero.
// Create a print function in the class Address that prints the address with the house number, street name, and optional apartment number on one line, and the city, state, and postal code on the next line. Set the apartment number to zero.
// The following example prints the address without the apartment number.
//
// 148 First Ave
// San Diego, CA, 10392
// The following example prints the address with the apartment number.
//
// 553 Second St, #44
// San Diego, CA, 10394
// Create a set of accessors and mutators for the above instance variables. Make sure to use the following function names for the above instance variables.
//
// getHouseNumber
// setHouseNumber
// getStreet
// setStreet
// getApartmentNumber
// setApartmentNumber
// getCity
// setCity
// getState
// setState
// getPostalCode
// setPostalCode
//
//
//
// Overload the less-than operator for comparing two addresses.  Return true if the first address' zip code is less than the second address' zip code, you must implement the operator as a member function and not a regular function.
// Use main.cpp as your test program and write the following tests.
//
// create an address without the apartment number.
// create another address with the apartment number.
// call the print function to print out the addresses using the less operator. If the first address' zip code is less than the second address' zip code, then print the following.
// Note: you must overload the less-than operator as a member function and not a standard function.
// Comparing address
// 148 First Ave
// San Diego, CA, 10394
// with address
// 553 Second St, #44
// San Diego, CA,  20392
// The first address precedes the second address.
// Otherwise, if the first address's zip code is greater than the second address's zip code, then print the following:
//
// Comparing address
// 148 First Ave
// San Diego, CA, 20392
// with address
// 553 Second St, #44
// San Diego, CA, 10394
// The second address precedes the first address.
// In order to get full credit for this problem, you must overload the less-than operator as a member function and use it in your code. For example,
//
// if (addr1 < addr2)
// {
// // do something
// }
// #assume addr1 and addr2 are the objects of class address.
// Please upload the following files to Zybooks.
//
// Address.h
// Address.cpp
// main.cpp
//
//
// Please zip the following files and upload it to Web-CAT server.
//
// Address.h
// Address.cpp
// newCxxTest.h
//
// Your test cases must cover all the code in your program.
