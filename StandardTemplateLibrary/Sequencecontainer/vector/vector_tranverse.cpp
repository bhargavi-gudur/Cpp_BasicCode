/**
 * @file vector_tranverse.cpp
 * @author GandlaBhargavi
 * @brief   This program demonstrates the use of iterators to traverse a vector of boolean values.
 * @version 0.1
 * @date 2025-06-01
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Function to demonstrate the use of iterators to traverse a vector of boolean values
void boolean_array_transverse();
/**
 * @brief  Main function to execute the program.
 *
 * @return int
 */
int main()
{
    boolean_array_transverse();
    return 0;
}
/**
 * @brief This function demonstrates the use of iterators to traverse a vector of boolean values.
 * It initializes two vectors, fills them with boolean values, and prints their contents using iterators.
 */
void boolean_array_transverse()
{
    vector<bool> v1(10, 0); // Initialize a vector of size 10 with all elements set to false (0)
    cout << "iterator_v1 array filled with zero " << endl;

    for (auto iterator_v1 : v1) // Iterate through the vector using a range-based for loop
    {
        cout << iterator_v1 << " "; // Print each element of the vector
    }
    cout << endl; // Print a newline for better readability

    vector<bool> v2(10, 1);
    cout << "iterator_v2 array filled with zero before modification: " << endl;

    for (auto iterator_v2 : v2) // Iterate through the vector using a range-based for loop
    {
        cout << iterator_v2 << " "; // Print each element of the vector
    }
    fill(v2.begin(), v2.end(), 0); // Fill the vector with 1 (true) using the fill algorithm
    cout << "iterator_v2 array filled with one after modification: " << endl;
    for (auto iterator_v2 : v2) // Iterate through the vector using a range-based for loop
    {
        cout << iterator_v2 << " "; // Print each element of the vector
    }
    cout << endl;
}