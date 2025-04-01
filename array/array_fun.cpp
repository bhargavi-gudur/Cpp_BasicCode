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
void array_add(); // function declaration

/**
 * @brief Function to take input and display an array of fixed size.
 *
 * @return int
 */
int array() 
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
    return 0;
}
/**
 * @brief function to take input and  display array of addition
 *        of fixed size.
 */
void array_add()
{
    int arr[N];
    int sum_arr[N];
    int loop;
    cout << "enter the array of number :" << endl;
    for (loop = 0; loop < N; loop++)
    {
        cin >> arr[loop];
    }
    cout << "array value display" << endl;
    for (loop = 0; loop < N; loop++)
    {
        sum_arr[loop] += arr[loop];
        cout << "a[" << loop << "]\t -> sum : " << sum_arr[loop] << endl;
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
    array_add();
    return 0;
}
