/**
 * @file passArrTofun.cpp
 * @author Gandla Bhargavi
 * @brief This program demonstrates how to pass an array to a function in C++.
 *        It includes a function to print the elements of an array.
 * @version 0.1
 * @date 2024-10-02
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;
void print_array(int[], int size); // function declaration
/**
 * @brief Main function to initialize an array and call the print_array function.
 *
 * @return int
 */
int main()
{
    int arr[] = {2, 34, 56, 78, 125, 13};
    int size_arr = ((sizeof(arr) / sizeof(arr[0])));
    cout << "size of array :" << size_arr << endl;
    print_array(arr, size_arr); // function calling

    return 0;
}
/**
 * @brief function to print the array value using passing
 * array to function.
 *
 * @param a
 * @param size
 */
void print_array(int a[], int size) // function calling
{
    int loop;
    for (loop = 0; loop < size; loop++)
    {
        cout << "array value: " << a[loop] << endl;
    }
}