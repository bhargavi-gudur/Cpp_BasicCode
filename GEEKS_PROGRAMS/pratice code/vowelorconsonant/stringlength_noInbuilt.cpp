/**
 * @file stringlength_noInbuilt.cpp
 * @author Gandla Bhargavi
 * @brief  This program calculates the length of a string without
 * using inbuilt functions.
 * @version 0.1
 * @date 2025-06-19
 *
 */
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**
 * @brief  This function calculates the length of a string
 * without using inbuilt functions.
 *
 */
void stringlen()
{
    string user_string;
    cout << "Enter a string: ";
    getline(cin, user_string);
    int length = 0;
    for (int i = 0; user_string[i] != '\0'; i++)
    {
        length++;
    }
    cout << "The length of the string is: " << length << endl;
}
/**
 * @brief  Main function to execute the string length calculation.
 *
 * @return int
 */
int main()
{
    stringlen();
    return 0;
}
