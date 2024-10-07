/**
 * @file odd_even.cpp
 * @author Gandla Bhargavi
 * @brief This C++ program checks whether numbers in an array are odd or even.
 * It initializes an array with values from 1 to 10 and then iterates over the array,
 *  printing whether each number is odd or even
 * @version 0.1
 * @date 2024-10-05
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#define N 10
using namespace std;

int OddOrEven(); // function declaration

/**
 * @brief The main() function calls OddOrEven() and then terminates.
 *
 * @return int
 */
int main()
{
    OddOrEven();
    return 0;
}
/**
 * @brief the OddOrEven() function:
 * An array num[N] of size N is declared.
 * A message is printed to indicate the start of the checking process.
 * The array is initialized with values from 1 to N.
 * A for loop iterates over the array to check if each number is odd or even.
 * If a number is even, a message is printed indicating that it is even.
 * If a number is odd, a message is printed indicating that it is odd.
 * @return int
 */
int OddOrEven()
{
    int num[N], i;
    cout << " In loop of N number checking odd and even :" << endl;
    // Initialize the array with some values
    for (i = 0; i < N; i++)
    {
        num[i] = i + 1; // Just an example, you can initialize it with  own values
    }
    for (i = 0; i <= N; i++)
    {
        if ((num[i]) % 2 == 0)
        {
            cout << "the number is even : " << num[i] << endl;
        }
        else
        {
            cout << "the number is odd : " << num[i] << endl;
        }
    }
    return 0;
}