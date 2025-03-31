/**
 * @file arraySTL.cpp
 * @author GandlaBhargavi
 * @brief STL array example
 * @details This program demonstrates the use of STL array in C++.
 * @version 0.1
 * @date 2025-03-29
 *
 */

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
#include <string>

using namespace std;
//function prototypes
void STL_Array();
void array1();

/**
 * @brief  Main function to demonstrate the use of STL array.
 *
 * @return int
 */
int main()
{
    STL_Array();
    array1();
    return 0;
}
/**
 * @brief This function demonstrates the use of STL array in C++.
 *
 */
void STL_Array()
{
    array<int, 5> ar1{{3, 4, 5, 1, 2}};
    array<int, 5> ar2 = {1, 2, 3, 4, 5};
    array<string, 2> ar3 = {{string("a"), "b"}};
    cout << "Sizes of arrays are" << endl;
    cout << ar1.size() << endl;
    cout << ar2.size() << endl;
    cout << ar3.size() << endl;
    cout << "\nInitial ar1 : ";
    for (auto i : ar1)
        cout << i << ' ';
    cout << endl;
    // container operations are supported
    sort(ar1.begin(), ar1.end());
    cout << " ater sorted array 1 :";
    for (auto i : ar1)
        cout << i << ' ';
    cout << endl;
    // container operations are supported
    cout << " ater sorted array 2 :";
    sort(ar2.begin(), ar2.end());
    for (auto i : ar2)
        cout << i << ' ';
    cout << endl;
    ar2.fill(6);
    cout << " ater fill with 6 in array 2 :";

    for (auto i : ar2)
        cout << i << ' ';
    cout << endl;
    // ranged for loop is supported
    cout << "\nar3 : ";
    for (auto &s : ar3)
        cout << s << ' ';
    cout << endl;
}
/**
 * @brief   This function demonstrates the use of STL array in C++.
 *
 */
void array1()
{
    array<int, 3> arr = {'G', 'f', 'G'}; // ASCII val of 'G' =71
    cout << arr.cbegin() << " " << arr.cend() << endl;
    cout << "the total size is  " << sizeof(arr) << " bytes ." << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << char(arr[i]) << " | " << arr[i] << " | " << sizeof(arr[i]) << "|" << &arr[i] << endl;
    }
}


