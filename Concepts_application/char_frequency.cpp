/**
 * @file char_frequency.cpp
 * @author Gandla Bhargavi
 * @brief Program to count frequency of each character in a string.
 * 
 * This program reads a string from the user and prints how many times
 * each character appears in it. Case is considered (A and a are different).
 * 
 * @version 0.1
 * @date 2025-07-31
 */

#include <iostream>
#include <map>
#include <string>
using namespace std;

/**
 * @brief Prints the frequency of each character in the input string.
 * 
 * @param str The input string to analyze.
 */
void countCharacterFrequency(const string& str) {
    map<char, int> freq;

    for (char ch : str) {
        freq[ch]++;
    }

    cout << "Character frequencies:" << endl;
    for (auto pair : freq) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

/**
 * @brief Main function to read input and display character frequencies.
 */
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    countCharacterFrequency(input);

    return 0;
}