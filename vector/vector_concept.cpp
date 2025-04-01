/**
 * @file vector_concept.cpp
 * @author GandlaBhargavi
 * @brief  Vector concept in C++
 * @details This program demonstrates the use of vectors in C++.
 * @version 0.1
 * @date 2025-03-31
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/**
 * @brief  Function to print the elements of a vector
 * 
 * @param v 
 */
void vector_fun(vector<int> &v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
/**
 * @brief  Function to demonstrate vector insertion and printing
 * 
 */
void vector_insert()
{
    vector<char> v = {'a', 'b', 'c', 'd'};
    v.push_back('b');
    v.insert(v.begin() + 3, 't');
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
}
/**
 * @brief  Main function to demonstrate vector operations
 * 
 * @return int 
 */
int main()
{
    vector<int> v1 = {2, 4, 5, 6, 67, 45};
    vector<int> v2(5, 9);
    vector_fun(v1);
    vector_fun(v2);
    vector_insert();
    return 0;
}