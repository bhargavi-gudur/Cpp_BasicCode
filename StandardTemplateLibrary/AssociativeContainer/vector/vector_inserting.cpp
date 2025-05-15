/**
 * @file vector_inserting.cpp
 * @author GandlaBhargavi
 * @brief  This program demonstrates the use of vectors in C++.
 * It includes functions to create a vector, print its elements, and demonstrate insertion operations.
 * @version 0.1
 * @date 2025-04-01
 *
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Function to create a vector of a specified type and size, and fill it with user input
template <typename vectorTempDt>

/**
 * @brief  Creates a vector of a specified type and size, and fills it with user input.
 *
 */

void CreateAvector()
{
    int i = 0, n;
    vectorTempDt num;
    cout << "Enter the number of elements you want in the vector: " << endl;
    cin >> n;
    // vector<int> v1(n);
    vector<vectorTempDt> v1;
    cout << "  enter the vector  element :" << endl;
    for (i = 0; i < n; i++)
    {
        // cin>>v1[i];
        cin >> num;
        v1.push_back(num);
    }
    cout << " iterator the vector element " << endl;
    for (i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " | ";
    }
    cout << endl;
}
/**
 * @brief  Prints the elements of a vector of a specified type.
 *
 * @tparam vectorTempDt The type of the elements in the vector.
 * @param v The vector to be printed.
 */
template <typename vectorTempDt>
void printVector(vector<vectorTempDt> &v)
{

    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}
/**
 * @brief  Demonstrates the use of vectors and their insertion operations.
 *
 */
void access_printVector()
{
    vector<int> v1 = {1, 4, 2, 3, 5};
    vector<float> v2(5, 9.6);
    printVector(v1);
    printVector(v2);
}
/**
 * @brief  Demonstrates the insertion of elements into a vector of characters.
 *
 * @tparam vectorTempDt The type of the elements in the vector.
 */
template <typename vectorTempDt>
void string_vector()
{
    vector<vectorTempDt> v = {'a', 'f', 'd'};

    // Inserting 'z' at the back
    v.push_back('z');

    // Inserting 'c' at index 1
    v.insert(v.begin() + 1, 'c');
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
}
/**
 * @brief  The main function that calls the vector creation and printing functions.
 *
 * @return int
 */
int main()
{

    cout << "  vector inserting example " << endl;
    CreateAvector<int>();
    cout << "  vector inserting example " << endl;
    string_vector<char>();
    cout << "  vector inserting example " << endl;
    access_printVector();

    return 0;
}