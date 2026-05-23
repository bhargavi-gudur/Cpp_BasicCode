/**
 * @file RepeatLetters.cpp
 * @author Gandla Bhargavi
 * @brief Program to count repeated letters in a given string.
 *
 * This program takes a string from the user and prints
 * how many times each letter appears.
 *
 * @version 0.1
 * @date 2025-10-11
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Counts and displays repeated letters in a string.
 * @param text Input string from the user.
 */
void repeatLetters(string text) {
    int count[256] = {0}; // array to store frequency of each character

    // Count frequency of each character
    for (char c : text) {
        if (isalpha(c)) {              // consider only alphabets
            c = tolower(c);            // ignore case
            count[(int)c]++;
        }
    }

    cout << "\nRepeated letters in the string:\n";
    bool found = false;

    // Print only characters that repeat
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            cout << (char)i << " → " << count[i] << " times" << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No repeated letters found.\n";
}

/**
 * @brief Main function to take user input and call repeatLetters().
 */
int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    repeatLetters(text);
    return 0;
}