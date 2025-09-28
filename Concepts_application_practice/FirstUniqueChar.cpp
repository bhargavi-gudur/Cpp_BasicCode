/**
 * @file FirstUniqueChar.cpp
 * @author Gandla Bhargavi
 * @brief Find the first non-repeating character in a string (Google interview style question).
 *
 * @version 0.1
 * @date 2025-09-28
 */

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

/**
 * @brief Finds the first non-repeating character.
 * 
 * @param s Input string
 * @return char First unique character or '_' if none
 */
char firstUniqueChar(const string &s) {
    unordered_map<char, int> freq;

    // Count frequency of each character
    for (char c : s) {
        freq[c]++;
    }

    // Find first char with count = 1
    for (char c : s) {
        if (freq[c] == 1)
            return c;
    }
    return '_'; // if no unique character
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    char result = firstUniqueChar(s);
    if (result == '_')
        cout << "No non-repeating character found." << endl;
    else
        cout << "First non-repeating character: " << result << endl;

    return 0;
}