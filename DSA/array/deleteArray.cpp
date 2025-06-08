/**
 * @file deleteArray.cpp
 * @author Gandla bhargavi
 * @brief  the sample to delete the array value
 * in the array at the given position.
 * @version 0.1
 * @date 2025-02-25
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using namespace std;

void deleteArray();
void deleteUnSortedArray();

/**
 * @brief main function to call the deleteArray and deleteUnSortedArray functions.
 *
 * @return int
 */
int main()
{
    deleteArray();
    deleteUnSortedArray();
    return 0;
}
/**
 * @brief   the sample to delete the array value using a sorted array.
 *
 */
void deleteArray()
{
    int SIZE_MAX1 = 10;
    int arr[SIZE_MAX1] = {10, 20, 34, 56, 12, 67, 0, 0, 0, 10, 0};
    int size;
    int pos, i;

    cout << " enter the size :" << endl;
    cin >> size;
    cout << " enter the pos :" << endl;
    cin >> pos;
    // checking the condition for the given position
    if (pos <= 0 || pos > size || pos > SIZE_MAX1)
    {
        cout << " invalid pos" << pos << endl;
        if (size > SIZE_MAX1 || size <= 0)
        {
            cout << " invalid size" << size << endl;
        }
    }
    // displaying the array before deletion
    cout << "before deletion of array pos display:" << endl;
    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
        cout << i << "\t" << arr[i] << endl;
    }
    // deleting the array value at the given position
    for (i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    // displaying the array after deletion
    cout << "after deletion of array pos display:" << endl;
    for (i = 0; i < size; i++)
    {

        cout << "the array[" << i << "] " << arr[i] << endl;
    }
}
/**
 * @brief the sample to delete the array value using a unsort array.
 *
 */
void deleteUnSortedArray()
{
    int SIZE_MAX1 = 10;
    int arr[SIZE_MAX1] = {10, 20, 34, 56, 12, 67, 0, 0, 0, 10, 0};
    int size;
    int pos, i;

    cout << " enter the size :" << endl;
    cin >> size;
    cout << " enter the pos :" << endl;
    cin >> pos;

    cout << "before deletion of array pos display:" << endl;
    for (i = 0; i < size; i++)
    {
        arr[i] = arr[i + 1];
        cout << i << "\t" << arr[i] << endl;
    }

    arr[pos] = arr[size];
    size--;

    cout << "after deletion of array pos display:" << endl;
    for (i = 0; i < size; i++)
    {

        cout << "the array[" << i << "] " << arr[i] << endl;
    }
}