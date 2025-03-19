/**
 * @file patternconcept.cpp
 * @author gandla bharrgavi
 *
 * @brief demostrate sample  pattern coding different pattern,
 *  used in this programming by using function concept and call by reference approach.
 *
 * @version 0.1
 * @date 2025-03-15
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

extern "C"
{
    void pattern(int *size);
};

/**
 * @brief
 *
 * @return int
 */

int main()
{
    int length;
    cout << "**************** pattern coding problem ***************" << endl
         << endl;
    cout << "*******************************************************" << endl;
    cout << " enter size of  -> length: " << endl;
    cin >> length;
    cout << "************* 1.pattern coding ***********" << endl;
    pattern(&length);
    cout << endl
         << "******************************************************" << endl;

    return 0;
}

/**
 * @brief
 *
 * @param size
 */

void pattern(int *size)
{
    cout << "------------approach 1-----------------------" << endl;
    for (int x = 1; x <= *size; x++)
    {
        for (int y = *size; y >= x; y--)
        {
            cout << setw(3) << "*" << x << y;
        }
        cout << endl;
    }
    cout << "---------------approach 2 --------------------" << endl;
    for (int x = *size; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << setw(3) << "*" << x << y;
        }
        cout << endl;
    }

    cout << "-----------------approach 3--------------------------" << endl;
    for (int x = 1; x <= *size; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << setw(4) << "*" << x;
            cout << setw(4) << "@" << y;
        }
        cout << endl;
    }
    cout << "-----------------approach 4--------------------------" << endl;
    for (int x = 1; x <= *size; x++)
    {
        for (int y = 1; y <= *size; y++)
        {
            cout << setw(4) << "*" << x << "@" << y;
        }
        cout << endl;
    }
    cout << "-----------------approach 5--------------------------" << endl;
    for (int x = *size; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << setw(4) << "*" << y;
        }
        cout << endl;
    }
    cout << "-----------------approach 6--------------------------" << endl;
    for (int x = *size; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << setw(4) << "@" << x;
        }
        cout << endl;
    }
}
