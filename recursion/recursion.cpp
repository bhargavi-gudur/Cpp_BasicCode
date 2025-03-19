/**
 * @file recursion.cpp
 * @author Gandla Bhargavi
 * @brief  this sample code demostrate using recursion factorial of number and
 *  call by reference approach.
 * @version 0.1
 * @date 2025-03-16
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int *n); // function declaration

/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int num;
    cout << "enter the num  to find factorial of the number! " << endl;
    cin >> num;

    cout << "Factorial: " << factorial(&num) << endl; // function calling

    return 0;
}
/**
 * @brief
 *
 * @param n
 * @return int
 */
int factorial(int *n)
{
    int value = (*n - 1);
    if (value == 0 || value == 1)
    {
        return 1;
    }
    return (*n) * factorial(&value);
}
