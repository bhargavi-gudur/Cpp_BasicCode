/**
 * @file largeElementArr.CPP
 * @author  Gandla Bhargavi
 * @brief  This code is about finding the largest
 * element in an array using a function.
 * @version 0.1
 * @date 2025-02-27
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using namespace std;
/**
 * @brief  Function to find the largest element in an array
 *
 * @param arr
 * @param size
 * @return int
 */
int largestElement(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max) // 3,1 (3,4)
        {
            max = arr[i];
            cout << "inside -> max:" << max << endl;
        }
        cout << "**********************************" << endl;
        cout << "max:" << max << endl;
        cout << "arr[" << i << "]:" << arr[i] << endl;
        cout << "**********************************" << endl;
    }
    return max;
}
/**
 * @brief   Main function
 *
 * @return int
 */
int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int size = (sizeof(arr)) / sizeof(arr[0]);
    int largest = largestElement(arr, size);
    cout << "**********************************" << endl;
    cout << "size: " << size << endl;
    cout << "sizeof(arr[0]): " << sizeof(arr[0]) << endl;
    cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << "largest element :" << largest << endl;
    cout << "**********************************" << endl;

    return 0;
}