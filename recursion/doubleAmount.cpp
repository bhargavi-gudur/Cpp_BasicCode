/**
 * @file doubleAmount.cpp
 * @author GandlaBhargavi
 * @brief  This program calculates the total amount of money earned
 * on a given day by doubling the amount earned on the previous day.
 * The program uses recursion to calculate the total amount.
 * @version 0.1
 * @date 2025-04-14
 */
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

/**
 * @brief  This function calculates the total amount of money earned
 * on a given day by doubling the amount earned on the previous day.
 *
 * @param num
 * @return int
 */
int doubleamount(int num)
{
    if (num == 1)
    {

        return 1;
    }

    return 2 * doubleamount(num - 1);
}
/**
 * @brief  This  main function calling  doubleamount function and
 *  printing the total amount earned on a given day.
 * @return int
 */
int main()
{
    int total_amount = 0, n = 0;
    cout << "enter number of days:" << endl;
    cin >> n;
    total_amount = doubleamount(n);
    cout << " total amount :" << total_amount << endl;
    return 0;
}