/**
 * @file RangeBasedForLoop.cpp
 * @author GandlaBhargavi
 * @brief  This file demonstrates the use of a range-based for loop in C++.
 * @version 0.1
 * @date 2025-03-20
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
/**
 * @brief This function is used to count the number of iterations in a loop.   
 * 
 * @param count 
 */
void countloop(int *count)
{
    cout << "count :" << (*count)++ << endl;
}
/**
 * @brief   This function demonstrates the use of a range-based for loop.
 * 
 */
void rangeBasedForLoop()
{

    int arr[] = {1, 2, 3, 445, 56, 90};
    int loop_count = 0;
    cout << "i-> ";
    for (int range_arr : arr) // (datatype) rangedelaration : range expression
    {
        cout << " |" << range_arr << "| ";
        countloop(&loop_count);
    }

    cout << endl;
}
/**
 * @brief  This is the main function that calls the range-based for loop function.
 * 
 * @return int 
 */
int main()
{
    rangeBasedForLoop();
    return 0;
}