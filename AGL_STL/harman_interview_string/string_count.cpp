/**
 * @file string_count.cpp
 * @author gandla bhargavi
 * @brief  This program counts the frequency of each character in a given string
 * and displays the repeated characters along with their counts.
 * @version 0.1
 * @date 2026-04-26
 *
 */
#include <iostream>
#include <unordered_map>
#include <string>

// Using declarations for convenience and readability
using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::unordered_map;

/** @brief Class to handle counting repeated characters in a string */
class repeated_string_char
{
    string string_word;

public:
    repeated_string_char(const string &input)
    {
        string_word = input;
    }
    void each_character_count()
    {
        unordered_map<char, int> freq;
        for (char c : string_word)
        {
            if (c != ' ')
            { // skip spaces
                freq[c]++;
            }
        }
        cout << "Repeated characters:\n";
        for (auto &char_count : freq) // for (auto& [ch, count] : freq)
        {
            char ch = char_count.first;
            int count = char_count.second;
            if (count > 0)
            {
                cout << ch << " -> " << count << endl;
            }
        }
    }
};
/** @brief Main function to execute the program */
int main()
{
    string s;
    cout << "enter the string :" << endl;
    std::getline(std::cin, s);
    repeated_string_char obj_each_character_count(s);
    obj_each_character_count.each_character_count();
}
