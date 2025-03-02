/**
 * @file array_2dSmallNum.cpp
 * @author Gandla Bhargavi
 * @brief 2D array in c++  with n rows and m columns
 * and display the elements in the array and find the smallest element in the array.
 * @version 0.1
 * @date 2025-02-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 2;

int smallest(int arr[ROWS][COLS], int rows, int cols)
{
    int max = arr[0][0];

    cout << "arrayof matrix:" << endl;
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            if (arr[i][j] < max)
            {
                max = arr[i][j];
            }
            cout << "arr[" << i << "][" << j << "]: " << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return max;
}

int main()
{
    int arr[ROWS][COLS] = {3, 1, 4, 1, 5, 9, 2, 6};
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr) / sizeof(arr[0]);

    cout << "smallest element: \n"
         << smallest(arr, rows, cols) << endl;
    return 0;
}
