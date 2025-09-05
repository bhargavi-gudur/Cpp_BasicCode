/**
 * @file string_transform_cmp.cpp
 * @author gandla bhargavi
 * @brief This program explains how to compare two strings.
 * It takes two strings as input from the user, converts them
 *  to lowercase, and then compares them.
 * @version 0.2
 * @date 2025-06-18
 *
 */
#include <iostream>
#include <string>
#include <algorithm>

/* Using standard namespace to avoid prefixing 
 std::, before every standard library function or object*/

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::transform;

/**
 * @brief This function takes two strings as input from the user,
 * converts them to lowercase, and compares them.
 * If they are equal, it prints a message indicating they are the same.
 * If they are different, it prints a message indicating they are different.
 */
void string_fun()
{
   
        string response;
        string com_str_response;
        // Get the strings from the user
        cout << "enter comparing string" << endl;
        cin >> com_str_response;
        cout << "enter response string" << endl;
        cin >> response;
        // Convert both strings to lowercase
        transform(response.begin(), response.end(), response.begin(), ::tolower);
        transform(com_str_response.begin(), com_str_response.end(), com_str_response.begin(), ::tolower);
        // Compare both strings
        if (response == com_str_response)
        {
            cout << " comparsion of string values are same : " << response << endl;
            cout << com_str_response << endl;
        }
        else
        {
            cout << "  string values are different : " << response << endl;
            cout << com_str_response << endl;
        } 
}

/**
 * @brief  Main function of the program.
 * This function calls the string_fun() function to perform
 * string comparison.
 * @return int
 */
int main()
{
    string_fun(); // calling string function
    return 0;
}
