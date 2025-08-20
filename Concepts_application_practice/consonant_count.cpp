/**
 * @file consonant_count.cpp
 * @author Gandla Bhargavi
 * @brief Program to count the number of consonants in a string.
 * 
 * This program reads a string from the user and counts how many
 * consonants are present in it. It ignores digits and special characters.
 * 
 * @version 0.1
 * @date 2025-07-30
 */

#include <iostream>
#include <string>
#include <cctype> // for isalpha and tolower
using namespace std;

/**
 * @brief Checks whether a character is a vowel.
 * 
 * @param ch The character to check.
 * @return true if the character is a vowel, false otherwise.
 */
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

/**
 * @brief Counts the number of consonants in a given string.
 * 
 * @param str The input string.
 * @return Number of consonants.
 */
int countConsonants(string str) {
    int count = 0;
    for (char ch : str) {
        if (isalpha(ch) && !isVowel(ch)) {
            count++;
        }
    }
    return count;
}

/**
 * @brief Main function to read input and display consonant count.
 * 
 * Reads a string from the user and prints the number of consonants using
 * the countConsonants function.
 */
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int consonantCount = countConsonants(input);
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}