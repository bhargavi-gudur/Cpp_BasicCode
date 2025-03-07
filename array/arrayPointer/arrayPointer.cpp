/**
 * @file arrayPointer.cpp
 * @author gandla Bhargavi
 * @brief C++ program to demonstrate array and pointer relationship.
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;

void array_pointer();
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    array_pointer();
    return 0;
}
/**
 * @brief array_pointer function to demonstrate array and pointer relationship.
 *
 */
void array_pointer()
{
    int size = 6;
    int arr[] = {6, 2, 1, 3, 5, 3, 0};
    int *arrPtr = NULL;
    arrPtr = arr;
    cout << "------------------------------------------------------" << endl;
    cout << "base address of a array: " << &arr << endl;
    cout << "value *(arr+1): " << *(arr + 1) << endl;
    cout << "value*arr+1 :" << *arr + 1 << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i <= size; i++)
    {
        cout << "array [" << i << "]:- " << arr[i] << endl;
        cout << "array (*(arr+i))->[" << i << "]:- " << *(arr + i) << endl;
        cout << "address of arrptr: " << &arrPtr[i] << ",value: " << arrPtr[i] << endl;
        cout << "pointer array (*(arrPtr+i))->[" << i << "]:- " << *(arrPtr + i) << endl;
        cout << "*************************************************" << endl;
    }
    cout << "------------------------------------------------------" << endl;
}