/**
 * @file FloatingType.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of
 * different floating-point types in C++.
 * @version 0.2
 * @date 2025-09-21
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * @brief  Demonstrates the use of floating-point types in C++.
 *
 */
void floatingdatatype()
{
    // Creating a decimal double type variable
    double a = 3.912348239293;

    // Creating an exponential double type variable
    double ex1 = 325e+2;

    // Creating a float type variable
    float b = 3.912348239293f;

    // Creating an exponential float type variable
    float ex2 = 325e+2f;

    // Displaying output with fixed
    cout << "Displaying Output With fixed:" << endl;
    cout << "Double Type Number 1 = " << fixed << a << endl;
    cout << "Double Type Number 2  = " << fixed << ex1 << endl;
    cout << "Float Type Number 1   = " << fixed << b << endl;
    cout << "Float Type Number 2   = " << fixed << ex2 << endl;

    // Displaying output with scientific
    cout << "\nDisplaying Output With scientific:" << endl;
    cout << "Double Type Number 1  = " << scientific << a << endl;
    cout << "Double Type Number 2  = " << scientific << ex1 << endl;
    cout << "Float Type Number 1   = " << scientific << b << endl;
    cout << "Float Type Number 2   = " << scientific << ex2 << endl;
}
/**
 * @brief  Main function to demonstrate the use of
 * floating-point types.
 *
 * @return int
 */
int main()
{
    floatingdatatype();

    return 0;
}
