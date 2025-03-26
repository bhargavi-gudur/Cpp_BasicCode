/**
 * @file switch_pattern.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of functions to print different patterns of triangles using stars and spaces.
 * @version 0.1
 * @date 2025-03-18
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

void pattern_triangle_StarSpace();
void pattern_triangle_star();
void pattern_invertedPattern();

/**
 * @brief main function calling the pattern functions.
 *
 * @return int
 */
int main()
{
    int choice;
    bool continue_break;
    cout << " to continue is 1 or break is 0 " << endl;
    cin >> continue_break;
    while (continue_break)
    { // Start an infinite loop for the menu
        system("cls");
        cout << "----------------------------------" << endl;
        cout << "Choose a pattern to print (1-3) or 0 to exit:" << endl;
        cout << "1. Triangle with spaces and stars" << endl;
        cout << "2. Triangle with contiguous stars" << endl;
        cout << "3. Inverted triangle with stars" << endl;
        cout << "0. Exit" << endl;
        cout << "----------------------------------" << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            cout << "----------------------------------" << endl;
            cout << " printing pattern for triangle_StarSpace " << endl;
            pattern_triangle_StarSpace();
            cout << "----------------------------------" << endl;
            break;
        case 2:
            cout << "----------------------------------" << endl;
            cout << " printing pattern for triangle_star  " << endl;
            pattern_triangle_star();
            cout << "----------------------------------" << endl;
            break;
        case 3:
            cout << "----------------------------------" << endl;
            cout << " printing pattern for inverted triangle_star  " << endl;
            pattern_invertedPattern();
            cout << "----------------------------------" << endl;
        default:
            if (choice != 0 || choice > 4)
                cout << "invalid number , please enter 1-3 range " << endl;
            break;
        }
        // Ask the user if they want to continue
        cout << "Do you want to continue? Enter 1 to continue, 0 to exit: " << endl;
        cin >> continue_break;
    }
    return 0;
}
/**
 * @brief This function prints a triangle pattern using stars and spaces.
 *
 */
void pattern_triangle_StarSpace()
{
    int i, j, rows = 0, space;
    cout << "enter number of rows : " << endl;
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (space = rows; space >= i; space--)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
/**
 * @brief This function prints a triangle pattern using stars.
 *
 */
void pattern_triangle_star()
{
    int i, j, rows = 0, space;
    cout << "enter number of rows : " << endl;
    cin >> rows;
    for (i = 1; i <= rows; i++)
    {
        for (space = rows; space >= i; space--)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/**
 * @brief This function prints an inverted triangle pattern using stars.
 *
 */
void pattern_invertedPattern()
{
    int i, j, rows = 0, space;
    cout << "enter number of rows : " << endl;
    cin >> rows;
    for (i = rows; i >= 1; i--)
    {
        for (space = 1; space <= (rows - i); space++)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}