/**
 * @file divisableProgram.cpp
 * @author gandla bhargavi
 * @brief  write out all the numbers between 100 -500 that are
 * divisable by 3 and 5.
 * @version 0.1
 * @date 2025-03-06
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

void diviable_3And5();

using namespace std;
/**
 * @brief  main function
 */
int main()
{

    diviable_3And5();

    return 0;
}
/**
 * @brief  all the numbers between 100 -500 that are
 * divisable by 3 and 5.
 *
 */

void diviable_3And5()
{
    int counter = 0;
    cout << " enter the counter value: " << endl;
    cin >> counter;
    while (counter >= 100 && counter <= 500)
    {
        if (counter % 3 == 0)
        {
            cout << "divisiable by 3 :" << counter << endl;
        }
        else if (counter % 5 == 0)
        {
            cout << "divisiable by 5 :" << counter << endl;
        }
        else
        {
            cout << "not divisiable by 3 and 5 :" << counter << endl;
        }

        counter++;
    }
}