
    /**
 * @file palindrome.cpp
 * @author Gandla Bhargavi
 * @brief Program to check whether a given integer is a palindrome using a function calling method.
 *        It reads an integer input from the user, reverses the number, and compares it to the original.
 *        If both are equal, the number is considered a palindrome.
 * 
 * @details This program demonstrates the use of functions in C++ for checking palindromic numbers.
 *          It also handles the case for negative integers by returning false for any negative input.
 * 
 * @version 0.1
 * @date 2025-07-12
 */

#include <iostream>
using namespace std;

/**
 * @brief Checks whether a given integer is a palindrome.
 * 
 * @param num The integer number to check.
 * @return true if the number is a palindrome, false otherwise.
 */
bool isPalindrome(int num) {
    if (num < 0) return false;  // Negative numbers are not palindromes

    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

/**
 * @brief Main function to drive the program.
 *        Takes user input and prints whether it's a palindrome.
 * 
 * @return int Returns 0 on successful execution.
 */
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}