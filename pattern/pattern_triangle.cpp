/**
 * @file pattern_triangle.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-03-18
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