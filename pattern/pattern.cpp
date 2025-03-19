/**
 * @file pattern.cpp
 * @author Gandla bhargavi
 * @brief program to display pattern of given height and width with given symbol.
 * @version 0.1
 * @date 2025-03-11
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std ::endl;
using std::setw;

extern "C" void pattern(int *height, int *width, char *symbol); // extern "C" is used to call c function in c++

/**
 * @brief main function to call pattern function and
 *        take input from user and display pattern.
 *
 * @return int
 */

int main()
{

    cout << "--------pattern table-------------" << endl;
    int h, w;
    char s;
    cout << "enter the height and width:" << endl;
    cin >> h >> w;
    cout << "enter symbol" << endl;
    cin >> s;
    pattern(&h, &w, &s);
    return 0;
}
/**
 * @brief  function to display pattern of given height and width with given symbol.
 * 
 * @param height 
 * @param width 
 * @param symbol 
 */
void pattern(int *height, int *width, char *symbol)
{
    for (int i = 1; i <= (*height); i++)
    {
        for (int j = 1; j <= (*width); j++)
        {
            cout << setw(4) << (*symbol);
        }
        cout << endl;
    }
}