/**
 * @file reverse_string.cpp
 * @author Gandla Bhargavi
 * @brief Program to reverse a given string.
 * 
 * This program reads a string from the user and reverses it
 * using a simple loop. For example, if the input is "hello",
 * the output will be "olleh".
 * 
 * @version 0.1
 * @date 2025-07-28
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Reverses the given string.
 * 
 * @param str The original string to be reversed.
 * @return The reversed string.
 */
string reverseString(string str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

/**
 * @brief Main function to take string input and print the reversed string.
 * 
 * Reads a string from the user, calls the reverseString function,
 * and prints the reversed result.
 */
int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = reverseString(input);
    cout << "Reversed string: " << output << endl;

    return 0;
}