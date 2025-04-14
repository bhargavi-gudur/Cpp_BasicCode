/**
 * @file pattern_triangle.cpp
 * @author gandla bhargavi
 * @brief  This file demonstrates the use of functions to print different patterns of triangles using stars and spaces.
 * @version 0.2
 * @date 2025-03-19
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void pattern_triangle_StarSpace();
void pattern_triangle_star();

/**
 * @brief main function calling the pattern functions. 
 * 
 * @return int 
 */
int main()
{
    cout << "----------------------------------" << endl;
    cout << " printing pattern for triangle_StarSpace " << endl;
    pattern_triangle_StarSpace();
    cout << " printing pattern for triangle_star  " << endl;
    pattern_triangle_star();
    cout << "----------------------------------" << endl;
    return 0;
}
/**
 * @brief  This function prints a triangle pattern using stars and spaces.
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
 * @brief  This function prints a triangle pattern using stars.
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