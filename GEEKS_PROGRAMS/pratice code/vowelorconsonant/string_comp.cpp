/**
 * @file string_comp.cpp
 * @author gandla bhargavi
 * @brief This program explains how to compare two strings.
 * @version 0.1
 * @date 2025-02-24
 *
 */
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void string_fun();

int main()
{
    string_fun(); // calling string function
    return 0;
}
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