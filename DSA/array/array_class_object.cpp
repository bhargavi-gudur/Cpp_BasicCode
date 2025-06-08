/**
 * @file array_class_object.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of the C++
 * standard library's array class.
 * @version 0.1
 * @date 2025-06-06
 *
 */
#include <iostream>
#include <array>

using namespace std;

/**
 * @brief This class demonstrates the use of
 * the C++ standard library's array class.
 */
class array_list
{
public:
    array<int, 5> arr = {10, 20, 30, 40, 50};
    /**
     * @brief This function accesses and prints the elements of the array.
     */
    void array_access()
    {
        cout << "Accessing elements:\n";
        for (size_t i = 0; i < arr.size(); i++)
        {
            cout << "Element at index " << i << " = " << arr[i] << endl;
        }
    }
    /**
     * @brief This function prints the contents of the array.
     */
    void array_print()
    {
        cout << "Array contents: ";
        for (int val : arr)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};
/**
 * @brief  Main function to demonstrate the use of the array_list class.
 *
 * @return int
 */
int main()
{
    array_list objarray_list;

    objarray_list.array_access();
    objarray_list.array_print();

    return 0;
}
