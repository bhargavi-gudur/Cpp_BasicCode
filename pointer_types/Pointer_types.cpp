/**
 * @file Pointer_types.cpp
 * @author Gandla Bhargavi
 * @brief brief Demonstrates the usage of void pointers
 * and handling different data types using void pointers.
 * @version 0.1
 * @date 2024-10-09
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
using namespace std;

void void_ptr();
void diff_datatype_ptr(void *ptr_data_void, char type);

/**
 * @brief entry point of the program.
 *
 * @return int
 */
int main()
{
    cout << "*****************************************" << endl;
    void_ptr();
    cout << "*****************************************" << endl;
    void *ptr;
    int integer = 56;
    float floating = 67.89;
    char character = 'b';
    ptr = &integer;
    diff_datatype_ptr(ptr, 'i');
    cout << "*****************************************" << endl;
    ptr = &floating;
    diff_datatype_ptr(ptr, 'f');
    cout << "*****************************************" << endl;
    ptr = &character;
    diff_datatype_ptr(ptr, 'c');
    cout << "*****************************************" << endl;
    return 0;
}
/**
 * @brief Demonstrates the usage of void pointers.
 *
 */
void void_ptr()
{
    int var;
    void *ptr_void;

    ptr_void = &var;
    var = 14;
    cout << "var:" << var << endl;
    cout << "ptr_void:" << *(int *)ptr_void << endl;
}
/**
 * @brief Handles different data types using void pointers.
 * @param ptr_data_void Void pointer pointing to the data
 * @param type Character representing the data type ('i' for int, 'f' for float, 'c' for char)
 */
void diff_datatype_ptr(void *ptr_data_void, char type)
{
    switch (type)
    {
    case 'i':
        cout << "integer " << *(int *)ptr_data_void << endl;
        break;
    case 'f':
        cout << "floating " << *(float *)ptr_data_void << endl;
        break;
    case 'c':
        cout << "character " << *(char *)ptr_data_void << endl;
        break;

    default:
        cout << "invalid data type" << endl;
    }
}