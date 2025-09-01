/**
 * @file string_number_identifier.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program identifies whether the given input is a number or a string.
 *   It uses a function isNumber() that is called from main().
 * @date 28-08-2025
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/**
 * @brief Checks whether a given string is a number.
 * 
 * @param input The string entered by the user
 * @return true if it is a number, false otherwise
 */
bool isNumber(const string &input) {
    if (input.empty()) return false;
    for (char ch : input) {
        if (!isdigit(ch)) return false;
    }
    return true;
}

int main() {
    string userInput;

    cout << "Enter something: ";
    cin >> userInput;

    if (isNumber(userInput)) {
        cout << "You entered a NUMBER: " << userInput << endl;
    } else {
        cout << "You entered a STRING: " << userInput << endl;
    }

    return 0;
}