/**
 * @file array_RevNum.cpp
 * @author gandla Bhargavi
 * @brief
 * @version 0.1
 * @date 2025-02-24
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
#include <array>

using namespace std;

int reverse_array_printing();
int rev_arr_Inbuilt_print();

/**
 * @brief main function is the entry point of the program.
 *
 * @return int
 */
int main()
{
    reverse_array_printing();

    rev_arr_Inbuilt_print();
    return 0;
}
/**
 * @brief  reverse_array_printing() function is used to reverse the array and print the array values.
 *
 * @return int
 */
int reverse_array_printing()
{
    int MAX_SIZE = 15;
    int arr[MAX_SIZE];
    int i;
    int size;
    int index;

    cout << "the size of the array : " << endl;
    cin >> size;

    if (size > MAX_SIZE || size < 1)
    {
        cout << "Invalid size!" << endl;
        return 1; // Error code for invalid size
    }
    cout << "enter the array values : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "display the array : " << endl;
    index = size - 1;
    for (auto arr_value : arr)
    {
        if (index >= 0)
        {
            cout << "array {" << index << "}\t" << arr_value << endl;
            index--;
        }
    }
    return 0;
}
/**
 * @brief rev_arr_Inbuilt_print() function is used to reverse
 *  the array using inbuilt function and print the array values.
 *
 * @return int
 */
int rev_arr_Inbuilt_print()
{
    const int MAX_SIZE = 15;
    array<int, MAX_SIZE> arr;
    int i;
    int size;
    cout << "the size of the array : " << endl;
    cin >> size;
    if(size>MAX_SIZE || size<1)
    {
        cout<<"Invalid size!"<<endl;
        return 1; // Error code for invalid size
    }
    cout << "enter the array values : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "display the array : " << endl; 
    for (int i = size - 1; i >= 0; i--)
    {
        cout << "array {" << i << "}\t" << arr[i] << endl;
    }
    return 0;
}
