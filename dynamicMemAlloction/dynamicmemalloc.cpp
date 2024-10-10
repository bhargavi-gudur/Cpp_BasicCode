/**
 * @file dynamicmemalloc.cpp
 * @brief Demonstrates dynamic memory allocation using
 * malloc, calloc, and realloc in C++ using cstyle code.
 * @version 0.1
 * @date 2024-10-10
 *
 * This program allocates memory dynamically and displays the values stored in the allocated memory.
 *
 * Author: Gandla Bhargavi
 */
#include <iostream>
#include <cstdlib>
#define N 2
using namespace std;

/******************function declaration*****************/
int dynamicmem_alloc();
void malloc_allocation();
void calloc_allocation();
void realloc_allocation();
/******************************************************/

/**
 * @brief Main function that calls the dynamic memory allocation functions.
 *
 * @return int Returns 0 upon successful completion.
 */
int main()
{
    dynamicmem_alloc();
    return 0;
}

/**
 * @brief Function to call malloc, calloc, and realloc allocation functions.
 *
 * @return int Returns 0 upon successful completion.
 */
int dynamicmem_alloc()
{
    malloc_allocation();
    calloc_allocation();
    realloc_allocation();
    return 0;
}

/**
 * @brief Demonstrates dynamic memory allocation using malloc.
 *
 * This function allocates memory for an integer using malloc, assigns a value to the allocated memory,
 * and then displays the value.
 */
void malloc_allocation()
{
    int *ptr = (int *)malloc(sizeof(int));
    int value = 23;

    if (ptr != nullptr)
    {
        *ptr = value; // Assign value to the allocated memory
        cout << "malloc ptr :" << *ptr << endl;
        free(ptr); // Free the allocated memory
    }
    else
    {
        cout << "malloc allocation failed" << endl;
    }
}

/**
 * @brief Demonstrates dynamic memory allocation using calloc.
 *
 * This function allocates memory for an array of integers using calloc, assigns values to the allocated memory,
 * and then displays the values.
 */
void calloc_allocation()
{
    int *ptr = (int *)calloc(N, sizeof(int));
    int value = 345;

    if (ptr != nullptr)
    {
        *ptr = value; // Assign a single value to the allocated memory
        cout << "calloc ptr :" << *ptr << endl;
        cout << "values in allocated memory:";
        for (int i = 0; i < N; ++i)
        {
            ptr[i] = i + 1;
            cout << " " << ptr[i]; // Display the values in the allocated memory
        }
        cout << endl;
        free(ptr); // Free the allocated memory
    }
    else
    {
        cout << "calloc allocation failed" << endl;
    }
}

/**
 * @brief Demonstrates dynamic memory allocation using realloc in a loop.
 *
 * This function allocates memory for an array of integers using malloc, then uses realloc to resize the array
 * within a loop, assigning values to each element and displaying them.
 */
void realloc_allocation()
{
    int *ptr = (int *)malloc(N * sizeof(int));
    int newSize = N;

    if (ptr == nullptr)
    {
        cout << "initial allocation failed" << endl;
        return;
    }

    for (int i = 0; i < 5; ++i)
    {
        int *temp = (int *)realloc(ptr, (newSize + 1) * sizeof(int));
        if (temp == nullptr)
        {
            cout << "realloc failed" << endl;
            free(ptr); // Free the originally allocated memory to avoid memory leak
            return;
        }
        ptr = temp;
        ptr[newSize] = i + 1; // Assign value to the newly allocated memory
        newSize++;
    }

    cout << "realloc array elements: ";
    for (int i = 0; i < newSize; ++i)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    free(ptr); // Free the allocated memory
}