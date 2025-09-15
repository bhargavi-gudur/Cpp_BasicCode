/**
 * @file addition.cpp
 * @author Gandla Bhargavi
 * @brief addition of number by using function calling method
 * @version 0.1
 * @date 2024-09-29
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief    Addition of two numbers , we are defining a function named addition
 *  and passing the two arguments and it returns the sum of two numbers
 *
 * @param a
 * @param b
 * @return int
 */
int addition(int a, int b)
{
    system("pause>0");
    return a + b;
}

/**
 * @brief    main function we are calling the addition function .
 *
 *
 * @return int
 */

int main()
{
    int X, Y;
    int result;
    cout << "enter the value of x and y" << endl;
    cin >> X >> Y;
    result = addition(X, Y);
    cout << "the sum of addition :" << result << endl;
    return 0;
 
}
