/**
 * @file lambda_sample_program.cpp
 * @author GandlaBhargavi
 * @brief  Sample program to demonstrate the use of lambda
 * functions in C++.
 * @details This program includes several lambda functions
 * that perform different operations such as addition,
 *  checking even/odd, and squaring a number.
 * @version 0.1
 * @date 2025-04-08
 *
 */
#include <iostream>
#include <list>
using namespace std;
/**
 * @brief  Function to demonstrate the use of a lambda function
 *  example to add two numbers
 */
void add()
{
    auto addfun = [](int a, int b)
    { return a + b; };
    cout << "sum:" << addfun(5, 3) << endl;
}
/**
 * @brief  Function to demonstrate the use of a lambda function
 *  example to check if a number is even or odd
 */
void odd_even()
{
    auto checkEvenOdd = [](int num)
    { return (num % 2 == 0) ? " even " : "odd"; };

    int number;
    cout << " enter a number ";
    cin >> number;
    cout << "the number is " << checkEvenOdd(number) << endl;
}
/**
 * @brief  Function to demonstrate the use of a lambda function
 * example to check if a number is even or odd
 */
void iseven()
{
    auto even = [](int num)
    { return (num % 2 == 0) ? " even " : "odd"; };
    int number;
    cout << "enter a number ";
    cin >> number;
    cout << "Number is " << even(number) << endl;
}
/**
 * @brief  Function to demonstrate the use of a lambda function
 * example to square a number
 */
void square()
{
    auto square_num = [](int n)
    { return n * n; };

    int number;
    cout << "enter a number ";
    cin >> number;
    cout << "the number is " << square_num(number) << endl;
}
/**
 * @brief  Main function to call the above functions
 * @return int
 */
int main()
{
    add();
    odd_even();
    iseven();
    square();
    return 0;
}
