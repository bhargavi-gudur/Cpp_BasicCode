/**
 * @file function_overloading.cpp
 * @author gandla bhargavi
 * @brief  c++ program to demonstrate function overloading, using c style functions
 * @details
 * @version 0.1
 * @date 2025-04-12
 *
 */
#include <string>
#include <iostream>
using namespace std;
/**
 * @brief  function overloading using c style functions
 *
 * @param floating
 */
void print(double floating)
{
    cout << floating << endl;
}
/**
 * @brief  function overloading using c style functions
 *
 * @param integer
 */
void print(int integer)
{
    cout << integer << endl;
}
/**
 * @brief  function overloading using c style functions
 *
 * @param character
 */
void print(char character)
{
    cout << character << endl;
}
/**
 * @brief  function overloading using c style functions
 *
 * @param str
 */
void print(string str)
{
    cout << str << endl;
}
/**
 * @brief  function overloading using c style functions
 *
 * @param floating
 */
void print(long double floating)
{
    cout << floating << endl;
}
/**
 * @brief main function to demonstrate function overloading using c style functions
 * @details
 *
 * @param integer
 */
int main()
{
    print(12);
    print(12.678);
    print('c');
    print("bhargavi");
    return 0;
}
/**
 * @note
 * This program demonstrates function overloading using c style functions.
 * It defines multiple functions with the same name "print" but with different parameter types.
 * The program calls these functions with different types of arguments to demonstrate
 *  how function overloading works.
 * The program includes functions to print integers, floating-point numbers, characters,
 * strings, and long double values.
 * The main function calls each of these functions with appropriate arguments to show the output.
 * @warning
 * this program is for educational purposes only and may not be suitable for production use.
 * this program does not handle any errors or exceptions that may occur during execution.
 * some coming issues may arise if the input values are not of the expected types.
 * @todo
 * - Add error handling for invalid input types.
 * - Implement additional functions to demonstrate more complex function overloading scenarios.
 * - Explore the use of templates for more flexible function overloading.
 * - Consider using modern C++ features such as lambda functions or std::function
 *   for more advanced function overloading techniques.
 *
 */
