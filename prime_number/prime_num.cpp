/**
 * @file prime_num.cpp
 * @author Gandla Bhargavi
 * @brief prime number program using function call by reference.
 * @version 0.1
 * @date 2024-10-05
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;

/****************function declaration***************************/
void primeNum(int *num);
/**************************************************************/
/**
 * @brief Calls primeNum() and exits.
 *
 * @return int
 */
int main()
{
    int value = 7;
    primeNum(&value);
    return 0;
}
/**
 * @brief Checks if the given number is prime and prints the result.
 *
 * @param num
 */
void primeNum(int *num)
{
    cout << "check the value is prime number  or not prime number " << endl;
    bool isPrime = true;
    for (int i = 2; i <= *num / 2; ++i)
    {
        if (((*num) % i) == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime && (*num > 1))
    {
        cout << "the value is prime number : " << *num << endl;
    }
    else
    {
        cout << " the value is not prime number :" << *num << endl;
    }
}
