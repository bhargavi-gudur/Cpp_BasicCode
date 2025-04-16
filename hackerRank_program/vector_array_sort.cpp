/**
 * @file vector_array_sort.cpp
 * @author gandla bhargavi
 * @brief This program demonstrates the use of arrays and vectors in C++.
 * @version 0.1
 * @date 2025-03-21
 *
 */

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void array_vector_sort();
/**
 * @brief main function calling the array_vector_sort function.
 *
 * @return int
 */
int main()
{
    array_vector_sort();

    return 0;
}
/**
 * @brief This function takes user input for the size of an array and a vector,
 *
 */
void array_vector_sort()
{
    int n; // Number of integers to input
    cout << "enter the size of array and vector: ";
    cin >> n;
    vector<int> v;
    int arr[n];
    cout << " enter  value of vector and array integer: " << endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // Add the integer to the vector

        arr[i] = x;
    }

    // Sort the vector
    sort(v.begin(), v.end());
    // Sort the array
    sort(arr, arr + n);
    // Output the sorted integers
    cout << " storing vector: " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << v[i] << endl;
        ;
    }
    cout << " storing array: " << endl;
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << endl;
    }
    cout << endl;
}