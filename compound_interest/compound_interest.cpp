/**
 * @file compound_interest.cpp
 * @author Gandla Bhargavi
 * @brief  Program to Find Compound Interest.
 * @version 0.1
 * @date 2024-11-04
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <cmath>
using namespace std;

class compound_interest
{
private:
    double principal = 10000, rate = 5, time = 2;

public:
    compound_interest() {}  // constructor
    void compound_fun();    // display the compound interest.
    ~compound_interest() {} // destructor
};
/**
 * @brief calculate the compund interest.
 * Initialize the principal amount, rate of interest, and time period.
 *
 */
void compound_interest ::compound_fun()
{

    // Calculate compound interest
    double A = principal * ((pow((1 + rate / 100), time)));
    double CI = A - principal;

    cout << "Compound interest is " << CI;
}
/**
 * @brief main function
 * when object created Calculate and display compound interest.
 * @return int
 */
int main()
{
    compound_interest obj_compound_interest;
    obj_compound_interest.compound_fun();
    return 0;
}
