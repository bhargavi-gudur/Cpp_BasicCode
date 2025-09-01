/**
 * @file SwitchCasePtr.cpp
 * @author gandla bhargavi
 * @brief  This program demonstrates the use of pointers,
 * dynamic memory allocation, and arrays in C++.
 * @version 0.1
 * @date 2025-05-28
 *
 */

#include <iostream>
#include <cstdlib>
using namespace std;
/**
 * @brief  This structure defines a rectangle with two integer members: length and breadth.
 *
 */
struct rect
{
    int lenght;
    int breadth;
};
/**
 * @brief  This function demonstrates the use of dynamic memory allocation in C and C++.
 *
 */
void dymanicmemoryC()
{
    int *dymptr = nullptr;
    int *dymcppptr = nullptr;
    dymptr = (int *)malloc(5 * sizeof(int));
    dymcppptr = new int[5];
    cout << "c style size of  dymptr : " << sizeof(dymptr) << endl;
    cout << "cpp style size of  dymcppptr : " << sizeof(dymcppptr) << endl;
}
/**
 * @brief  This function demonstrates the use of arrays and pointers in C++.
 *
 */
void array_number()
{
    int a[5] = {1, 4, 5, 66, 78};
    int *arrPtr = a;
    a[0] = 89;
    for (auto arr_value : a) // range based for loop
    {
        cout << "value " << arr_value << endl;
    }

    int *ptr = new int[5];

    for (int i = 0; i < 5; i++) // Loop to copy values from array `a` to dynamic array `ptr`
    {
        ptr[i] = a[i]; // Copy values from array `a` to the dynamic array
    }
    ptr[1] = 90;
    ptr[0] = 100;
    for (int i = 0; i < 5; i++)
    {
        cout << "value " << ptr[i] << endl;
    }
    delete[] ptr;
    ptr = nullptr;
}
/**
 * @brief  This function demonstrates the use of pointers in C++.
 *
 */
void pointerConcept()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    cout << "address of ptr: " << ptr << " |a  of address : " << &a << endl;
    cout << "a value is  : " << a << " |value of *ptr :  " << *ptr << endl;
    cout << " size of a value is  : " << sizeof(a) << " |value of ptr : " << sizeof(ptr) << endl;
}
/**
 * @brief  This is the main function that serves as the entry point for the program.
 * It prompts the user to select an option from a menu and calls the corresponding function.
 * @return int
 */
int main()
{
    int choice;
    cout << " enter the choice  from 1 to 4 : " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        pointerConcept();
        break;
    case 2:
        dymanicmemoryC();
        break;
    case 3:
        array_number();
        break;
    case 4:
        struct rect r;
        cout << " size of rect :" << sizeof(r) << endl;
        break;
    default:
        cout << " invalid choice " << endl;
        break;
    }
    return 0;
}