/**
 * @file array_fun.cpp
 * @author Gandla bhargavi
 * @brief This is a simple C++ program designed to help beginners understand how to work with arrays. The program allows users to input elements into an array and then displays the elements along with their indices.
 * It covers basic C++ concepts like loops, arrays, and standard input/output operations.
 *
 * @version 0.1
 * @date 2024-10-01
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#define N 6
using namespace std;
int array(); // function declaration
/**
 * @brief Function to take input and display an array of fixed size.
 *
 * @return int
 */
int array() // function definition
{
    int arr[N];
    int loop;
    cout << "enter the array of number :" << endl;
    for (loop = 0; loop < N; loop++)
    {
        cin >> arr[loop];
    }
    cout << "array value display" << endl;
    for (loop = 0; loop < N; loop++)
    {
        cout << "a[" << loop << "]" << arr[loop] << endl;
    }
}
/**
 * @brief Main function to execute the array operations
 *
 * @return int
 */
int main()
{
    array(); // function calling
    return 0;
}
