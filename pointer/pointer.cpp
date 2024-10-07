/**
 * @file pointer.cpp
 * @author Gandla Bhargavi
 * @brief  This C++ program demonstrates the use of pointers and functions.
 *  The program prompts the user to enter a value, stores it in a variable,
 *  assigns the address of that variable to a pointer, and then prints
 *  the value and address.
 *
 * @version 0.1
 * @date 2024-10-05
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;

void pointer(int *ptr); // function declaration
/**
 * @brief  main function and calling function pointer.
 *
 * @return int
 */
int main()
{
    int value;
    pointer(&value);
    return 0;
}
/**
 * @brief The pointer function takes an integer pointer ptr as an argument.
 *
 * @param ptr
 */
void pointer(int *ptr)
{
    int ptr_val;
    cout << "enter the value : " << endl;
    cin >> ptr_val;

    ptr = &ptr_val;

    cout << " the value ptr :" << *ptr << endl;
    cout << " the  address ptr:" << ptr << endl;
    cout << " the  value ptr_value:" << ptr_val << endl;
    cout << " the  address ptr_value:" << &ptr_val << endl;
}
