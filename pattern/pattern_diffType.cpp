/**
 * @file pattern_diffType.cpp
 * @author gandla bhargavi
 * @brief 
 * @version 0.1
 * @date 2025-03-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setw;

int i, j;

extern "C" void pattern_rect();
extern "C" void pattern();
/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
    cout << "----------------------------------------" << endl;
    pattern_rect();
    cout << "----------------------------------------" << endl;
    pattern();
    cout << "----------------------------------------" << endl;
    return 0;
}
/**
 * @brief 
 * 
 */
void pattern_rect()
{
    int n = 3, m = 4;
    int arr[3][4] = {{1, 2, 3, 4}, {5, 7, 8, 9}, {10, 12, 13, 14}};
    for (i = 0; i < n; i++)
    {
        for (j = i; j <= m - 1; j++)
        {
            cout << setw(5) << arr[i][j];
        }
        cout << endl;
    }
}
void pattern()
{
    int n = 3, m = 4;
    for (i = 0; i < m; i++)
    {
        for (j = m - 1; j >= i; j--)
        {
            cout << setw(5) << i;
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = m - 1; j >= i; j--)
        {
            cout << setw(5) << j;
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = i; j < m; j++)
        {
            cout << setw(5) << j;
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = i; j < m; j++)
        {
            cout << setw(5) << i;
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
    for (i = 0; i <= m; i++)
    {
        for (j = m; j >= i; j--)
        {
            cout << setw(5) << i;
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
    for (i = 0; i <= m; i++)
    {
        for (j = m; j >= i; j--)
        {
            cout << setw(5) << j;
        }
        cout << endl;
    }
    cout << "----------------------------------------" << endl;
    char a = 'b';
    for (i = 0; i <= m; i++)
    {
        for (j = m; j >= i; j--)
        {
            cout << setw(5) << char(a + i);
        }
        cout << endl;
    }
}
