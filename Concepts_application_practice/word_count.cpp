/**
 * @file word_count.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program takes a sentence from the user and counts 
 *   the number of words in it. Words are separated by spaces.
 * @date 12-09-2025
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);   // read full line including spaces

    int count = 0;            // word counter
    for (int i = 0; i < sentence.length(); i++) {
        // If current character is space and previous character is not space
        if (sentence[i] == ' ' && i > 0 && sentence[i-1] != ' ') {
            count++;
        }
    }

    // Add 1 to count for the last word (if string not empty and not all spaces)
    if (!sentence.empty() && sentence[sentence.length()-1] != ' ')
        count++;

    cout << "Word count: " << count << endl;
    return 0;
}