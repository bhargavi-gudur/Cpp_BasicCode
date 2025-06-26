/**
 * @file  Array.cpp
 * @author Gandla Bhargavi
 * @brief This project demonstrates the usage of arrays and classes in C++ programming.
 *  Arrays are fundamental data structures that store elements of the same type in
 *  contiguous memory locations,while classes provide a way to bundle data and methods together.
 * @version 0.1
 * @date 2024-10-22
 * @copyright Copyright (c) 2024
 */

#include <iostream>
#include <array>
#define N 5
using namespace std;

class cls_array
{
private:
    array<int, N> array_val;

public:
    cls_array(const array<int, N> &arr); // Constructor
    void display();                      // Method to display array elements
    ~cls_array();                        // Destructor
};

/**
 * @brief Construct a new cls array::cls array object
 *
 * @param arr
 */
cls_array::cls_array(const array<int, N> &arr) : array_val(arr) {}

/**
 * @brief Display function definition
 *
 */
void cls_array::display()
{
    cout << "Array values:" << endl;
    for (int i = 0; i < N; ++i)
    {
        cout << "arr[" << i << "]: " << array_val[i] << endl;
    }
}

/**
 * @brief Destroy the cls array::cls array object
 *
 */
cls_array::~cls_array() {}
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    array<int, N> arr_value = {2, 7, 89, 78, 123};
    cls_array obj(arr_value); // Create an object of cls_array
    obj.display();            // Call the display method to print array values
    return 0;
}
