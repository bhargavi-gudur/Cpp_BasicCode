/**
 * @file minmax_arr.cpp
 * @author Gandla Bhargavi
 * @brief
 * @version 0.1
 * @date 2024-10-02
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;

int max_arr(int a[], int size);
int min_arr(int a[], int size);
/**
 * @brief  Initializes an array with predefined values.
  - Calculates the size of the array.
  - Calls `min_arr` and `max_arr` functions to find the minimum and maximum values.
  - Prints the size of the array, the minimum value, and the maximum value.
 *
 * @return int
 */
int main()
{
    int arr[] = {2, 34, 56, 78, 125, 13};
    int size_arr = ((sizeof(arr) / sizeof(arr[0])));
    int min, max;

    cout << "size of array :" << size_arr << endl;

    min = min_arr(arr, size_arr);
    max = max_arr(arr, size_arr);

    cout << "min_arr: " << min << endl;
    cout << "max_arr: " << max << endl;
    return 0;
}
/**
 * @brief This function takes an array and its size
 * as parameters and returns the minimum value in the array.
 *
 * @param a
 * @param size
 * @return int
 */
int max_arr(int a[], int size)
{
    int max_loop;
    int max_val = a[0];
    for (max_loop = 0; max_loop < size; max_loop++)
    {
        if (a[max_loop] > max_val)
        {
            max_val = a[max_loop];
        }
    }
    return max_val;
}
/**
 * @brief This function takes an array and its size
 * as parameters and returns the maximum value in the array.
 *
 * @param a
 * @param size
 * @return int
 */
int min_arr(int a[], int size)
{
    int min_loop;
    int min_val = a[0];
    for (min_loop = 0; min_loop < size; min_loop++)
    {
        if (a[min_loop] < min_val)
        {
            min_val = a[min_loop];
        }
    }
    return min_val;
}