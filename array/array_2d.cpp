/**
 * @file array_2d.cpp
 * @author GandlaBhargavi
 * @brief 2D array in c++  with 2 rows and 3 columns
 * and display the elements in the array.
 * @version 0.1
 * @date 2025-02-27
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;

void array_2d(); // function prototype
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    array_2d(); // calling function
    return 0;
}
/**
 * @brief 2D array in c++  with 2 rows and 3 columns
 * and display the elements in the array.
 *
 */

void array_2d()
{
    int size_n = 2, size_m = 3;
    int arr[2][3];
    int i, j;
    cout << "enter 2d element in array:" << endl;
    for (i = 0; i < size_n; i++)
    {
        for (j = 0; j < size_m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "display 2d element in array:" << endl;
    for (i = 0; i < size_n; i++)
    {
        for (j = 0; j < size_m; j++)
        {
            cout << "arr[" << i << "][" << j << "]: " << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Total size of 2D array: " << sizeof(arr) << " bytes" << endl;
    cout << "Size of one element in 2D array: " << sizeof(arr[0][0]) << " bytes" << endl;
    cout << "Number of elements in 2D array: " << sizeof(arr) / sizeof(arr[0][0]) << endl;
    cout << "Number of rows in 2D array: " << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "Number of columns in 2D array: " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    cout << "Size of 2D array: " << sizeof(arr) / sizeof(arr[0]) << "x" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
}