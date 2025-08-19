/**
 * @file vowel_count.cpp
 * @author Gandla Bhargavi
 * @brief Program to count individual vowels in a given string.
 * 
 * This program reads a string from the user and counts how many times
 * each vowel (a, e, i, o, u) appears in it. It displays the count
 * of each vowel separately.
 * 
 * @version 0.1
 * @date 2025-07-27
 */

#include <iostream>
#include <string>
#include <cctype> // for tolower
using namespace std;

/**
 * @brief Counts the number of each vowel in the given string.
 * 
 * @param str The input string.
 * @param a Count of 'a' or 'A'.
 * @param e Count of 'e' or 'E'.
 * @param i Count of 'i' or 'I'.
 * @param o Count of 'o' or 'O'.
 * @param u Count of 'u' or 'U'.
 */
void countVowels(string str, int &a, int &e, int &i, int &o, int &u) {
    a = e = i = o = u = 0;
    for (char ch : str) {
        ch = tolower(ch); // convert to lowercase
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }
}

/**
 * @brief Main function to read input and display vowel counts.
 * 
 * Reads a string from the user and calls the countVowels function
 * to print the number of times each vowel appears in the input.
 */
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);  // to include spaces

    int a, e, i, o, u;
    countVowels(input, a, e, i, o, u);

    cout << "Vowel counts:\n";
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;

    return 0;
}