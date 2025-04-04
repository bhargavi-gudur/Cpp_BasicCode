/**
 * @file dowhile_positivenum.cpp
 * @author gandla bhargavi
 * @brief to demonstrate do while loop to sum of positive numbers.
 * @details  this program will take user input and sum of positive numbers using do while loop.
 * @version 0.1
 * @date 2025-03-19
 */
#include <iostream>

using std::cin;
using std::cout;
using std ::endl;

// declaration of the function
void dowhile_sumpostive_num();
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    dowhile_sumpostive_num();
    return 0;
}
/**
 * @brief this function using do while concept ,
 * sum of  positive numbers .
 *
 */
void dowhile_sumpostive_num()
{
    cout << " user input number sum of number " << endl;

    int num = 0;
    int sum = 0;
    do
    {
        cin >> num;
        cout << "enter a number :" << num << endl;
        if (num >= 0)
        {
            sum += num;
        }

    } while (num >= 0);

    cout << " final positive sum :" << sum << endl;
}