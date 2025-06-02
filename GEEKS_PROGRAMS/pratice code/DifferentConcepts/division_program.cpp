/**
 * @file division_program.cpp
 * @author GandlaBhargavi
 * @brief program to find the quotient and remainder.
 * using pass by reference method,function parameters.
 * @version 0.1
 * @date 2025-02-24
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using namespace std;

void division(int &quotient, int &remain);

/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int quotient, remain;
    division(quotient, remain);
    return 0;
}
/**
 * @brief division function
 *
 * @param quotient
 * @param remain
 */
void division(int &quotient, int &remain)
{
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remain = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remain << endl;
}