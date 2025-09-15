/**
 * @file factorial_recursive.cpp
 * @author Gandla Bhargavi
 * @brief Program to compute factorial of a number using recursion.
 * @version 0.1
 * @date 2025-09-15
 */

#include <iostream>
using namespace std;

/**
 * @brief Recursive function to calculate factorial.
 * 
 * @param n Input number.
 * @return unsigned long long Factorial of n.
 */
unsigned long long factorialRec(int n) {
    if (n <= 1) return 1ULL;
    return (unsigned long long)n * factorialRec(n - 1);
}

/**
 * @brief Main function: reads input and prints factorial.
 */
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0) {
        cout << "Undefined for negative numbers\n";
        return 0;
    }

    cout << "Factorial: " << factorialRec(n) << endl;
    return 0;
}