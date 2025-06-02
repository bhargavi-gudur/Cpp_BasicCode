/**
 * @file vector_inbuild.cpp
 * @author GandlaBhargavi
 * @brief  This program demonstrates the use of vectors in C++.
 * It includes functions to swap two vectors, sort a vector, 
 * and remove even numbers from a vector.
 * @version 0.1
 * @date 2025-06-02
 * 
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * @brief  Swaps the contents of two vectors and prints the swapped vectors.
 * 
 * 
 */
void swap_number()
{
    vector<int> vect1 = {1, 4, 5, 8};
    vector<int> vect2 = {11, 14, 15, 18};
    cout << " before vect1 swapping: ";
    for (int value : vect1)
    {
        cout << value << " | ";
    }
    cout << endl;
    cout << " before vect2 swapping: ";
    for (int value : vect2)
    {
        cout << value << " | ";
    }
    cout << endl;
    vect1.swap(vect2);
    cout << "after vect1 swapping: ";
    for (int value : vect1)
    {
        cout << value << " | ";
    }
    cout << endl;
    cout << " after vect2 swapping: ";
    for (int value : vect2)
    {
        cout << value << " | ";
    }
    cout << endl;
}
/**
 * @brief  Sorts a vector of integers in ascending 
 * order and prints the sorted vector.
 * 
 */
void sort_number()
{
    vector<int> vect1 = {121, 234, 345, 8, 19, 56, 78, 120};
    cout << " before vect1 swapping: ";
    sort(vect1.begin(), vect1.end());
    for (int value : vect1)
    {
        cout << value << " | ";
    }
    cout << endl;
}
/**
 * @brief  Removes even numbers from a vector of integers
 *  and prints the modified vector.
 * 
 */
void vector_erase_even_number()
{
    vector<int> v = {121, 234, 345, 8, 19, 56, 78, 120};
    vector<int>::iterator it;
    for (auto it = v.begin(); it != v.end();)
    {
        if (*it % 2 == 0)
        {
            it = v.erase(it); // Safely remove and update iterator
        }
        else
        {
            ++it; // Move to the next element
        }
    }
    cout << "Vector after removing even numbers: ";
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl;
}
/**
 * @brief  Main function that calls the vector manipulation functions.
 * 
 * @return int 
 */
int main()
{
    cout<<"------------- even erase numbers -------------------"<<endl;
    vector_erase_even_number();
    cout<<"-------------------swap numbers -------------------"<<endl;
    swap_number();
    cout<<"-------------------sort numbers -------------------"<<endl;
    sort_number();
    cout<<"-------------------end of program -------------------"<<endl;
    return 0;
}