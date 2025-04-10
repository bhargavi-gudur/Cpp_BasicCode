/**
 * @file mergeArray.cpp
 * @author GandlaBhargavi 
 * @brief  Merging two arrays
 * @details This program merges two sorted arrays into a single sorted array.
 * @version 0.1
 * @date 2025-04-05
 * 
 */
#include <iostream>
#include <array>
#include <algorithm>

using std::array;
using std::begin;
using std::cout;
using std::end;
using std::endl;
using std::merge;
using std::sort;

/**
 * @brief  Merges two sorted arrays into a single sorted array.
 *
 */
void mergearray()
{
    array<int, 5> v1 = {1, 45, 12, 56, 78};
    array<int, 5> v2 = {115, 415, 142, 6, 8};
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    array<int, 10> mergedArray;
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), mergedArray.begin());
    for (auto i = 0; i < mergedArray.size(); ++i)
    {
        cout << mergedArray[i] << " ";
    }
}
/**
 * @brief   Main function to execute the mergearray function.
 *
 * @return int
 */
int main()
{
    mergearray();
    return 0;
}