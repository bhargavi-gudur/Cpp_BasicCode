/**
 * @file cls_Array_N_naturalNum.cpp
 * @author Gandla bhargavi
 * @brief  C++ program to find the sum of first n
 * natural numbers using a class.
 *
 * @version 0.1
 * @date 2025-06-06
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;

class array_n_NaturalNum
{
    int *arr; // Class member array
    int size; // Store size for memory management
public:
    // Function to find sum
    array_n_NaturalNum(int n)
    {
        size = n;
        arr = new int[n]; // Dynamically allocate memory
    }
    int findSum()
    {

        int sum = 0;

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > 0)
            {
                sum = sum + arr[i];
            }
        }

        return sum;
    }
    ~array_n_NaturalNum()
    {
        delete[] arr;
        arr = nullptr;
    };
};

int main()
{
    int n = 4;
    cout << "Enter " << n << " numbers:\n";
    array_n_NaturalNum objarray_n_NaturalNum(n);

    cout << objarray_n_NaturalNum.findSum();
    return 0;
}