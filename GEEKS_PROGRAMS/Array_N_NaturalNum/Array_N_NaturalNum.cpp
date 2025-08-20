/**
 * @file Array_N_NaturalNum.cpp
 * @author Gandla bhargavi
 * @brief  This program is designed to read a natural number N
 * from the user and then create an array of size N.
 * @version 0.1
 * @date 2025-06-10
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief  This function reads N natural numbers from the user,
 * stores them in an array, and returns .
 * the sum of all positive numbers in that array.
 *
 * @param n
 * @return int
 */
int findSum(int n)
{
    int sum = 0;
    int *arr = new int[n]; // Dynamically allocate memory
    if (!arr)
    {
        cout << "memory allocation failed!";
        return -1;
    }
    // Read N natural numbers from the user.
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Calculate the sum of positive  N Natural numbers.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sum = sum + arr[i];
        }
    }

    delete[] arr;
    arr = nullptr;
    return sum;
}

/**
 * @brief  Main function to execute the program.
 *
 * @return int
 */
int main()
{
    int n = 4;
    cout << "Enter " << n << " numbers:\n";
    cout << findSum(n);
    return 0;
}

/**@note: this program modification of geeks to geeks code
 * used  array method based upon user input and
 * dynamic memory allocation.
 */