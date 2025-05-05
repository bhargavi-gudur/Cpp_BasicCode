/**
 * @file pattern_alphatriangle.cpp
 * @author Gandla Bhargavi
 * @brief This file demonstrates the use of functions to print different patterns of alphabets in a triangle shape.
 * The patterns are created using nested loops and character arithmetic.
 * @version 0.1
 * @date 2025-03-20
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* function declaration*/
void patternAlphaTriangle(int *rows);
void patternAlphaTriangle_1(int *rows);
void patternAlphaTriangle_2(int *rows);
void patternAlphaTriangle_rev(int *rows);

/**
 * @brief main function to call the patternAlphaTriangle function.
 *
 * @return int
 */
int main()
{
    cout << "---------- right angle triangle shape ---------------" << endl;
    int ROWS;
    int choice;
    cout << " enter number of rows : " << endl;
    cin >> ROWS;
    cout << " enter the choice  : " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        patternAlphaTriangle(&ROWS);
        break;
    case 2:
        patternAlphaTriangle_1(&ROWS);
        break;
    case 3:
        patternAlphaTriangle_2(&ROWS);
        break;
    case 4:
        patternAlphaTriangle_rev(&ROWS);
        break;

    default:
        cout << "invalid choice " << endl;
    }
    return 0;
}
/**
 * @brief To print triangle shape on the screen.
 *
 * @param rows
 */
void patternAlphaTriangle(int *rows)
{
    int i, j;
    //char alphabatic = 'A';
    for (i = 0; i <= (*rows); i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << char('a' + j);
        }
        cout << endl;
    }
}
/**
 * @brief To print triangle shape on the screen.
 *
 * @param rows
 */
void patternAlphaTriangle_1(int *rows)
{
    int i, j;
   // char alphabatic = 'A';
    for (i = 0; i <= (*rows); i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
}
/**
 * @brief To print triangle shape on the screen.
 *
 * @param rows
 */
void patternAlphaTriangle_2(int *rows)
{
    int i, j;
   // char alphabatic = 'A';
    for (i = (*rows) - 1; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            cout << char('b' + i);
            // cout << char(alphabatic + j);
        }
        cout << endl;
    }
}
/**
 * @brief To print triangle shape on the screen.
 *
 * @param rows
 */
void patternAlphaTriangle_rev(int *rows)
{
    int i, j;
    //char alphabatic = 'A';
    for (i = 0; i <= (*rows); i++)
    {
        for (j = 0; j <i; j++)
        {
            // cout << char(alphabatic + i);
            cout << char('P' +(*rows-1)-j);
        }
        cout << endl;
    }
}