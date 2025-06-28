/**
 * @file explicitTypeConv.cpp
 * @author Gandla Bhargavi
 * @brief  This file demonstrates explicit type conversion in C++.
 * In C++, explicit type conversion is done using the `static_cast`
 *  operator.   
 * @version 0.1
 * @date 2025-06-26
 * 
 */

#include <iostream>

using namespace std;

/**
 * @brief  Function to demonstrate explicit type conversion.
 * 
 * This function shows how to convert a double to an int and a char to an int
 * using the `static_cast` operator.
 * 
 * @return int 
 */
int explicitTypeConversion() 
{
    // Example of explicit type conversion using static_cast
    double num = 9.99;
    int intNum = static_cast<int>(num); // Convert double to int

    cout << "Original double: " << num << endl;
    cout << "Converted int: " << intNum << endl;

    // Example of converting char to int
    char ch = 'A';
    int asciiValue = static_cast<int>(ch); // Convert char to int

    cout << "Character: " << ch << endl;
    cout << "ASCII value: " << asciiValue << endl;

    return 0;
}   
/**
 * @brief  Main function to demonstrate explicit type conversion.
 * 
 * @return int 
 */
int main() 
{
    explicitTypeConversion();
    return 0;
}