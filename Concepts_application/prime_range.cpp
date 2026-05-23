/**
 * @file prime_range.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program finds and prints all prime numbers 
 *   between a user-given range.
 * @date 08-09-2025
 */

#include <iostream>
using namespace std;

/**
 * @brief Checks if a number is prime.
 * @param num Number to check
 * @return true if prime, false otherwise
 */
bool isPrime(int num) {
    if (num <= 1) return false;             // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) {    // check divisors up to sqrt(num)
        if (num % i == 0) return false;
    }
    return true;
}

/**
 * @brief Prints prime numbers between start and end (inclusive).
 * @param start Start of the range
 * @param end End of the range
 */
void printPrimeInRange(int start, int end) {
    cout << "Prime numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    printPrimeInRange(start, end);  // function call

    return 0;
}