/**
 * @file WordFrequency.cpp
 * @author Gandla Bhargavi
 * @brief Program to count repeated words in a user-provided sentence.
 *
 * This program takes a sentence as input from the user,
 * splits it into words, and counts how many times each
 * word occurs. It then prints the frequency of each word.
 *
 * @version 0.1
 * @date 2025-09-25
 */

#include <iostream>
#include <sstream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

/**
 * @brief Cleans punctuation from a word (like .,!?).
 * 
 * @param word The input word to clean.
 * @return string The cleaned word.
 */
string cleanWord(string word) {
    word.erase(remove_if(word.begin(), word.end(),
                         [](char c) { return ispunct(c); }),
               word.end());
    return word;
}

/**
 * @brief Main function to count repeated words in a sentence.
 * 
 * @return int Exit status of the program.
 */
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    map<string, int> wordCount;
    stringstream ss(sentence);
    string word;

    while (ss >> word) {
        word = cleanWord(word);
        // convert to lowercase for uniform counting
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordCount[word]++;
    }

    cout << "\n--- Word Frequency ---\n";
    for (auto &entry : wordCount) {
        cout << entry.first << " : " << entry.second << endl;
    }

    return 0;
}