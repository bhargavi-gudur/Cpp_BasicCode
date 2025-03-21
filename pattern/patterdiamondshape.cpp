/**
 * @file patterdiamondshape.cpp
 * @author GandlaBhargavi
 * @brief sample pattern diamond shape to demostrate the program.
 *
 * @version 0.1
 * @date 2025-03-19
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/* function declaration*/
void patternDiamondShape(int *rows);

/**
 * @brief main function to call the patternDiamondShape function.
 *
 * @return int
 */
int main()
{
    cout << "---------- diamond shape ---------------" << endl;
    int ROWS;
    cout << " enter number of rows : " << endl;
    cin >> ROWS;
    patternDiamondShape(&ROWS);
    cout << "------------------------------------------" << endl;

    return 0;
}
/**
 * @brief To print diamond shape on the screen.
 *
 * @param rows
 */
void patternDiamondShape(int *rows)
{
    int i, j, space;
    for (i = 1; i <= (*rows); i++)
    {
        for (space = 1; space <= (*rows - i); space++)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = (*rows - 1); i >= 1; i--)
    {
        for (space = 1; space <= (*rows - i); space++)
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