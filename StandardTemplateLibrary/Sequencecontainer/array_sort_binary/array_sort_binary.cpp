/**
 * @file array_sort_binary.cpp
 * @author GandlaBhargavi
 * @brief  This file contains the implementation of the binary search algorithm.
 * @version 0.1
 * @date 2025-03-29
 *
 */

#include <iostream>
#include <algorithm>
using namespace std;
void STL_binary(int arr[], int size); // Function prototype for binary search
/**
 * @brief  This function sorts the array using STL sort and then performs binary search.
 *
 */
void STL_sort()
{
    int arr[] = {10, 15, 5, 8, 20};
    int size = sizeof(arr) / sizeof(arr[0]); // Get the size of the array
    sort(arr, arr + 4);
    cout << "arrayvalue after sorted : ";
    for (auto arrvalue : arr)
    {
        cout << arrvalue << "|";
    }
    cout << endl;
    // Call binary search function with the sorted array
    STL_binary(arr, size);
}
/**
 * @brief  This function performs binary search on the given array.
 *
 * @param arr
 * @param size
 */
void STL_binary(int arr[], int size)
{

    int searchValue = 8;
    if (binary_search(arr, arr + size, searchValue))
    {
        cout << "Value " << searchValue << " is present in the array." << endl;
    }
    else
    {
        cout << "Value " << searchValue << " is not present in the array." << endl;
    }
}
/**
 * @brief  Main function to execute the program.
 *
 * @return int
 */
int main()
{
    STL_sort();
    return 0;
}