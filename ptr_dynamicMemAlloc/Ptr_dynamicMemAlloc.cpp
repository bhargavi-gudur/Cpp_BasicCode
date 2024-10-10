/**
 * @file Ptr_dynamicMemAlloc.cpp
 * @author Gandla Bhargavi
 * @brief
 * @version 0.1
 * @date 2024-10-10
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <cstdlib>

using namespace std;
/***************function declaration*************/
void dynamicMemAlloc();
void nullpointer_fun();
/**
 * @brief
 *
 * @return int
 */
int main()
{
    nullpointer_fun();
    dynamicMemAlloc();
    return 0;
}

/**
 * @brief
 *
 */
void nullpointer_fun()
{
    int *ptr = nullptr;
    int value;
    cout << "enter the value :" << endl;
    cin >> value;
    if (ptr == nullptr)
    {
        cout << "memory is allocate " << endl;
        ptr = &value;
    }

    if (ptr != nullptr)
    {
        ptr = &value;
        cout << "the value of ptr :" << *ptr << endl;
        cout << "value :" << value << endl;
    }
}
/**
 * @brief
 *
 */
void dynamicMemAlloc()
{
    int *ptr = nullptr;
    int value;
    cout << "enter the value :" << endl;
    cin >> value;
    ptr = (int *)malloc(sizeof(int));
    cout << "dynamic memory allocation" << endl;
    if (ptr != nullptr)
    {
        ptr = &value;
        cout << "the value of ptr :" << *ptr << endl;
        cout << "value :" << value << endl;
    }
    else
    {
        cout << "memory allocation failed" << endl;
    }
}