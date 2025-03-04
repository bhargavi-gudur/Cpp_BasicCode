/**
 * @file array_2d_sample.cpp
 * @author gandla bhargavi
 * @brief 2D array sample program to print the elements of 2D array and size of array.
 *
 * @version 0.1
 * @date 2025-03-04
 *
 */
#include <iostream>

using namespace std;

// method declaration
void array_2d_sample();
/**
 * @brief   main method to print the elements of 2D array and size of array.
 *
 * @return int
 */
int main()
{
    // calling the method to print the elements of 2D array and size of array.
    array_2d_sample();
    return 0;
}
/**
 * @brief  method to print the elements of 2D array and size of array.
 *
 */
void array_2d_sample()
{
    // array of size 5
    int a[3][2] = {1, 2, 3, 4, 5, 5};

    // indexing variable
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << "a[" << i << j << "] -> " << a[i][j] << ", ";
        }
        cout << endl;
    }
    cout << "size of total array in bytes :" << sizeof(a) << endl;
    cout << "array lenght element  :" << sizeof(a) / sizeof(a[0][0]) << endl;
    cout << "array col lenght :" << sizeof(a) / sizeof(a[0]) << endl;
    cout << "array  size in bytes total row:" << sizeof(a[0]) << endl;
}
/**
 *  @note
 * This code is contributed by Code_Mech in 1d array ,based took reference
 * from that and modified to 2d array.
 *  I took example and some modification done in 2d array and also added
 *  the size of array in bytes and size of array.
 *
 */
