/**
 * @file array_sum.cpp
 * @author GandlaBhargavi
 * @brief  This is a simple C++ program designed
 * to help beginners understand how to find the sum
 *  of elements in an array using inbuilt function.
 * @version 0.1
 * @date 2025-02-24
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
#include <array>

using namespace std;

void sumofArray(); // Function prototype

/**
 * @brief This function is used to find the sum of elements in an array.
 *
 * @return int
 */
int main()
{
    sumofArray();
    return 0;
}
/**
 * @brief This function is used to find the sum of elements in an array.
 *
 */
void sumofArray()
{
    int MAX_SIZE = 6;
    const int size = 6;
    array<int, size> ArrOfElements;
    int sum = 0;

    cout << "bound check size in an array :" << ArrOfElements.size() << endl;
    if(size<MAX_SIZE||size>MAX_SIZE||size<1 )
    {
        cout<<"size is greater than array size"<<endl;
    }
    else
    {
        cout<<"size is less than array size"<<endl;
    }

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        cin >> ArrOfElements[i];
    }

    cout << "display the sum of the element in the array:" << endl;
    for (auto value : ArrOfElements)
    {
        sum += value;
        cout << "inside loop sum :" << sum << endl;
    }
    cout << "Sum of array elements: " << sum << endl;
}