/**
 * @file switch_case.cpp
 * @author Gandla Bhargavi
 * @brief This program demonstrates the use of switch-case
 * statements to perform basic arithmetic operations.
 * @version 0.1
 * @date 2024-10-23
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;
// Function declaration
void switchcase();

/**
 * @brief Main function
 * @return int
 */
int main()
{
    switchcase();
    return 0;
}

/**
 * @brief Function to perform arithmetic operations based on user choice
 */
void switchcase()
{
    int choice, a, b;
    int result;
    cout << "Enter two integers a and b:" << endl;
    cin >> a >> b;
    cout << "Enter your choice:" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        result = a ^ b;
        cout << "x-or: " << result;
        break;
    case 2:
        result = a + b;
        cout << "Addition: " << result;
        break;
    case 3:
        result = a - b;
        cout << "subtraction: " << result;
        break;
    case 4:
        result = a % b;
        cout << "modulus: " << result;
        break;
    case 5:
        result = a / b;
        cout << "division: " << result;
        break;
    case 6:
        result = a * b;
        cout << "multiplication: " << result;
        break;
    default:
        cout << "Invalid choice\n";
    }
}