/**
 * @file array_STL.cpp
 * @author Gandla Bhargavi
 * @brief   This project demonstrates the usage of the `std::array` container in C++.
 * It showcases how to read values into an array, display them,
 * and modify the front and back elements of the array.
 * @version 0.1
 * @date 2024-10-08
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <array>
#define NUM 7

using namespace std;

void array_STL_fun(); // function declaration

/**
 * @brief main function calling the array function. 
 *
 * @return int
 */
int main()
{
    array_STL_fun();
    return 0;
}

/**
 * @brief  this function array_STL_fun ->It showcases how to read values into an array,
 *  display them,and modify the front and back elements of the array.
 */
void array_STL_fun()
{
    array<int, NUM> arr;
    int i;

    cout << " enter the array of value :" << endl;
    for (i = 0; i < NUM; i++)
    {
        cin >> arr[i];
    }
    cout << "display the array of value :" << endl;
    for (i = 0; i < NUM; i++)
    {
        cout << "arr[" << i << "]" << arr.at(i) << endl;
    }
    cout << " assign value front and back to change in array" << endl;
    arr.front() = 90;
    arr.back() = 78;

    for (i = 0; i < NUM; i++)
    {
        cout << "arr[" << i << "]" << arr.at(i) << endl;
    }
}