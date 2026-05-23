/**
 * @file gcd.cpp
 * @author Gandla Bhargavi
 * @brief Program to compute the Greatest Common Divisor (GCD) using Euclid's algorithm.
 * 
 * This program reads two integers and finds their greatest common divisor (GCD).
 * Euclid's algorithm is used, which repeatedly replaces the larger number by 
 * the remainder of dividing the larger by the smaller until one becomes zero.
 * 
 * @version 0.1
 * @date 2025-09-13
 */

#include <iostream>
#include <cstdlib>  // for abs()
using namespace std;

/**
 * @brief Computes the GCD of two integers using Euclid's algorithm.
 * 
 * @param a First integer.
 * @param b Second integer.
 * @return int The greatest common divisor of a and b.
 */
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

/**
 * @brief Main function: reads input, calls gcd(), and prints result.
 */
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;

    return 0;
}