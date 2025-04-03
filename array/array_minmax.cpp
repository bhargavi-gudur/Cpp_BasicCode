/**
 * @file array_minmax.cpp
 * @author gandla bhargavi
 * @brief  This program finds the minimum and maximum
 * values in an array using references.
 *
 * @version 0.1
 * @date 2025-03-26
 *
 */
#include <iostream>
using std ::cin;
using std::cout;
using std::endl;

// function to find min and max values in an array
void minmax(int arr[], int &min, int &max, int size);
/**
 * @brief This function finds the minimum and maximum values in an array.
 *
 * @return int
 */
int main()
{
    int arr[5] = {2, 4, 5, 6, 7};
    int min, max;
    minmax(arr, min, max, 5); // Pass variables directly (using references)
    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}
/**
 * @brief  This function finds the minimum and maximum values in an array.
 *
 * @param arr
 * @param min
 * @param max
 * @param size
 */
void minmax(int arr[], int &min, int &max, int size)
{
    int i = 0;
    min = arr[0];
    max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i]; // update min value here
        }
        if (arr[i] > max)
        {
            max = arr[i]; // update max value here
        }
    }
}
