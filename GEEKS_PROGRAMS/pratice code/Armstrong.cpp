/**
 * @file Armstrong.cpp
 * @author Gandla Bhargavi
 * @brief Program to check whether a given number is an Armstrong number.
 * 
 * This program reads an integer from the user and checks
 * if it is an Armstrong number using a separate function.
 * An Armstrong number is a number that is equal to the sum
 * of its digits each raised to the power of the number of digits.
 * 
 * @version 0.1
 * @date 2025-07-26
 */

#include <iostream>
#include <cmath>
using namespace std;

/**
 * @brief Checks whether a number is an Armstrong number.
 * 
 * @param num The number to check.
 * @return true if num is an Armstrong number, false otherwise.
 */
bool isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

/**
 * @brief Main function to take input and print Armstrong result.
 * 
 * Reads input from the user, calls the isArmstrong function,
 * and prints whether the number is an Armstrong number.
 */
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isArmstrong(number))
        cout << number << " is an Armstrong number." << endl;
    else
        cout << number << " is not an Armstrong number." << endl;

    return 0;
}