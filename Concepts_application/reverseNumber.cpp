/**
 * @file reverseNumber.cpp
 * @author Gandla Bhargavi
 * @brief Program to reverse a given integer number.
 * 
 * This program reads an integer from the user and reverses its digits.
 * For example, if the input is 1234, the output will be 4321.
 * 
 * @version 0.1
 * @date 2025-07-27
 */

#include <iostream>
using namespace std;

/**
 * @brief Reverses the digits of a given integer.
 * 
 * @param num The number to be reversed.
 * @return The reversed number.
 */
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

/**
 * @brief Main function to take input and print reversed number.
 * 
 * Reads an integer from the user, calls the reverseNumber function,
 * and prints the reversed result.
 */
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reversed = reverseNumber(number);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}