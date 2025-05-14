/**
 * @file memory_address.cpp
 * @author Gandla Bhargavi
 * @brief  This file demonstrates the use of pointers
 *  and memory addresses in C++. 
 * It includes a class MemoryAddress that contains methods to demonstrate 
 * row-major and column-major representations of a 2D array.
 * 
 * @version 0.1
 * @date 2025-03-28
 *
 */

#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
/**
 * @brief This class demonstrates the use of pointers and memory addresses
 * in C++.
 *
 */
class MemoryAddress
{
public:
    void ColMajorArray()
    {
        int a[2][3] = {{1, 2, -78}, {5, 6, 7}};
        cout << "size of the array : " << sizeof(a) << "bytes " << endl;
        cout << " row - major representation " << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                int *memoryaddress = &a[0][0] + (i * 3 + j);
                cout << "Address of a[" << i << "][" << j << "]: " << memoryaddress << " | Value: " << *memoryaddress << endl;
            }
        }
    }
    ~MemoryAddress()
    {
        cout << "Destructor called for memory address " << endl;
    }
};
/**
 * @brief  This function demonstrates the use of dynamic memory
 * allocation in C and C++.
 *
 */
void memoryrepArrayelements()
{
    int a[2][3] = {{1, 2, -78}, {5, 6, 7}};
    for (auto &element : a)
    {
        for (auto arr_value : element)
        {
            cout << arr_value << " ";
        }
        cout << endl;
    }
    cout << "size " << sizeof(a) << endl;
}
/**
 * @brief This function demonstrates the use of row-major representation
 * for a 2D array in C++.
 *
 */
void RowMajorArray()
{
    int a[2][3] = {{1, 2, -78}, {5, 6, 7}};

    cout << "size of the array : " << sizeof(a) << "bytes " << endl;
    cout << " col - major representation " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int *memoryaddress = &a[0][0] + (j * 2 + i);
            cout << "Address of a[" << i << "][" << j << "]: " << memoryaddress << " | Value: " << *memoryaddress << endl;
        }
    }
}

/**
 * @brief   This function is the entry point of the program.
 *  It calls the memoryrepArrayelements() and RowMajorArray()
 *  functions to demonstrate the use of pointers and memory addresses.
 *  @details The program uses a class MemoryAddress to demonstrate
 *
 * @return int
 */

int main()
{
    int choice;
    cout << "Enter 1 for memory representation of array elements" << endl;
    cout << "Enter 2 for row-major representation of array elements" << endl;
    cout << "Enter 3 for column-major representation of array elements" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        memoryrepArrayelements();
        break;
    case 2:
        RowMajorArray();
        break;
    case 3:
    {
        MemoryAddress objMemoryAddress;
        objMemoryAddress.ColMajorArray();
        break;
    }
    default:
        cout << "Invalid choice , please press  inbetween 1 to 3 " << endl;
        break;
    }
    return 0;
}
