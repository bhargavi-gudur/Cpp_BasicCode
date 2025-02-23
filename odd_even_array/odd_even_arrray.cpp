/**
 * @file odd_even_arrray.cpp
 * @author Gandla Bhargavi
 * @brief This project provides a C++ program to separate odd and even numbers
 *  from a predefined array and display them.
 * @version 0.1
 * @date 2024-10-26
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <array>
#include <algorithm>
#define N 5
using namespace std;

/**
 * @brief class of odd_even
 *
 */
class odd_even
{
private:
    array<int, N> odd_even_var;

public:
    odd_even();
    void odd_even_fun();
    ~odd_even();
};
/**
 * @brief Construct a new odd even::odd even object
 *
 */
odd_even::odd_even()
{
    odd_even_var = {1, 4, 56, 78, 34};
}
/**
 * @brief separate odd and even numbers
 *  from a predefined array and display them.
 *
 */
void odd_even ::odd_even_fun()
{
    array<int, N> odd = {};
    array<int, N> even = {};
    int odd_count = 0;
    int even_count = 0;

    for (int num : odd_even_var)
    {
        if (num % 2 == 0 && even_count < N)
        {
            even[even_count++] = num;
        }
        else if (odd_count < N)
        {
            odd[odd_count++] = num;
        }
    }

    cout << "Even numbers: ";
    for (int i = 0; i < even_count; ++i)
    {
        cout << even[i] << " ";
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < odd_count; ++i)
    {
        cout << odd[i] << " ";
    }
    cout << endl;
}
/**
 * @brief Destroy the odd even::odd even object
 *
 */
odd_even::~odd_even() {}
/**
 * @brief Main function
 *
 * @return int
 */
int main()
{
    odd_even objodd_even;
    objodd_even.odd_even_fun();
    return 0;
}
