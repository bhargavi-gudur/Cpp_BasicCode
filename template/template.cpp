/**
 * @file template.cpp
 * @author Gandla Bhargavi
 * @brief This program demonstrates the use of templates for bitwise operations.
 * @version 0.1
 * @date 2024-10-24
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;
/**
 * @brief Template class
 *
 * @tparam bitwise_temp
 */

template <class bitwise_temp>
/**
 * @brief  Template function to perform bitwise AND operation on two arrays
 *
 * @param a  array of a
 * @param b  array of b
 * @param result array a & b was stored  in result of array
 * @param n size of the array
 */
void bitwise_oper(bitwise_temp a[], bitwise_temp b[], bitwise_temp result[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        result[i] = a[i] & b[i];
    }
}
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int a[] = {1, 2, 3, 5, 6};
    int b[] = {3, 5, 6, 77, 90};
    int result[5];
    int n = (sizeof(a) / sizeof(a[0]));
    bitwise_oper<int>(a, b, result, n);
    // Print the result array
    cout << "Bitwise AND results:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
