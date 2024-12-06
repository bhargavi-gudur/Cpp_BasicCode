/**
 * @file fraction_addition.cpp
 * @author Gandla Bhargavi
 * @brief This program solves the problem of adding two fractions and outputs
 * the result in its simplest form. It is designed to handle multiple test cases
 * efficiently, ensuring that the fractions are reduced to their smallest numerator
 * and denominator using the GCD (Greatest Common Divisor) algorithm.
 * @version 0.1
 * @date 2024-12-06
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <algorithm> // For __gcd function
using namespace std;

/**
 * @brief Function to add two fractions and return the result in simplest form
 *
 * @param a
 * @param b
 * @param c
 * @param d
 */
void addFractions(long long a, long long b, long long c, long long d)
{
    // Find numerator and denominator of the resultant fraction
    long long numerator = a * d + b * c;
    long long denominator = b * d;

    // Simplify the fraction
    long long gcd = __gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    // Print the simplified fraction
    cout << numerator << " " << denominator << endl;
}
/**
 * @brief main fucntion
 *
 * @return int
 */
int main()
{
    int T; // Number of test cases
    cin >> T;

    while (T--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        addFractions(a, b, c, d);
    }

    return 0;
}
