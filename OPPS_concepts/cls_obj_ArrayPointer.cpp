/**
 * @file cls_obj_ArrayPointer.cpp
 * @author gandla bhargavi
 * @brief C++ program to demonstrate array and pointer relationship using class and object.
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;
/**
 * @brief Arraypointer class
 *
 */
class Arraypointer
{
private:
    int size;
    int *arrPtr;

public:
    Arraypointer(int *arr, int size) : size(size), arrPtr(new int[size]) // constructor
    {
        for (int i = 0; i < size; i++)
        {
            arrPtr[i] = arr[i]; // copying values of array to pointer
        }
    }
    void arrayValueDisplay();
    ~Arraypointer() // destructor
    {
        delete[] arrPtr;
    }
};
/**
 * @brief arrayValueDisplay function to display array values.
 *
 */
void Arraypointer::arrayValueDisplay()
{
    cout << "------------------------------------------------------" << endl;
    cout << "base address of a array: " << &arrPtr << endl;
    cout << "value *(arrPtr+1): " << *(arrPtr + 1) << endl;
    cout << "value (*arrPtr+1) :" << *arrPtr + 1 << endl;
    cout << "------------------------------------------------------" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "array [" << i << "]:- " << arrPtr[i] << endl;
        cout << "array (*(arrPtr + i))->[" << i << "]:- " << *(arrPtr + i) << endl;
        cout << "address of arrPtr: " << &arrPtr[i] << ", value: " << arrPtr[i] << endl;
        cout << "pointer array (*(arrPtr + i))->[" << i << "]:- " << *(arrPtr + i) << endl;
        cout << "*************************************************" << endl;
    }
    cout << "------------------------------------------------------" << endl;
}
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int arr[] = {6, 2, 1, 3, 5, 3, 0};
    int size = 7;
    Arraypointer objArraypointer(arr, size);
    objArraypointer.arrayValueDisplay();
    return 0;
}
