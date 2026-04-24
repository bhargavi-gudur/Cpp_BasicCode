/**
 * @file ASCII_table.cpp
 * @author Gandla Bhargavi
 * @brief  This program defines a class `ASCII_table` that contains
 * a method to display the ASCII values of a list of characters.
 * The main function prompts the user to enter characters and displays
 *  their corresponding ASCII values until the user enters '0' to stop the input.
 * @version 0.1
 * @date 2026-04-24
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <vector>

// Using declarations for standard library components to avoid prefixing with std::
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/** @brief A class to display ASCII values for a list of characters. */
class ASCII_table
{
public:
    void ASCII_table_character(vector<char> &characters)
    {
        cout << "ASCII Table for Characters: " << endl;
        for (char c : characters)
        {
            cout << "Character: " << c << " ASCII Value: " << static_cast<int>(c) << endl;
        }
    }
};

/**
 * @brief  Main function to demonstrate the ASCII table for characters.
 * It prompts the user to enter characters and displays their corresponding
 *  ASCII values until the user enters '0' to stop the input.
 *
 * @return int
 */
int main()
{
    vector<char> characters;
    cout << "Enter characters (enter '0' to stop): " << endl;
    char input;
    while (true)
    {
        cin >> input;
        if (input == '0')
            break; // stop condition
        characters.push_back(input);
    }

    ASCII_table ascii;
    ascii.ASCII_table_character(characters);

    return 0;
}