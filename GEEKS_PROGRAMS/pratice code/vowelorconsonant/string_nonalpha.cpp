/**
 * @file string_nonalpha.cpp
 * @author Gandla Bhargavi
 * @brief  This program removes all non-alphabetic characters
 * from a given string.
 * @version 0.1
 * @date 2025-06-16
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <string>

// Using standard namespace for convenience
using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * @brief  This function removes all non-alphabetic characters from a string.
 * It iterates through each character in the string and appends only alphabetic characters
 * to the result string.
 *
 * @param str The input string from which non-alphabetic characters are to be removed.
 * @return string The resulting string containing only alphabetic characters.
 */
string remove_non_alphabets(string str)
{

    string result = "";
    for (char c : str) // range based for loop
    {
        // if (isalpha(c))
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            result += c;
        }
    }
    return result;
}
/**
 * @brief  Main function to execute the program.
 * It initializes a string and calls the function to remove non-alphabetic characters.
 *
 * @return int
 */
int main()
{
    string str = "Gee$ksfor$geeks";

    cout << "Alphabets only: " << remove_non_alphabets(str)
         << endl;

    return 0;
}