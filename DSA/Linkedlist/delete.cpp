/**
 * @file ArrayDeleteBrief.cpp
 * @author Gandla Bhargavi 
 * @brief Demonstrates how to allocate and deallocate an array of objects using new[] and delete[].
 *
 * Explanation:
 *  - The program creates an array of 'Base' objects using new[].
 *  - delete[] is used to safely delete the entire allocated array.
 *  - This ensures proper memory cleanup when working with dynamic arrays.
 *
 * @date 2025-12-10
 */

#include <iostream>
using namespace std;

int const n = 10;   // number of objects in the array

/**
 * @brief Simple Base class with one integer variable.
 */
class Base {
public:
    int b_var;
};

/**
 * @brief Main function demonstrating new[] and delete[].
 *
 * Steps:
 *   1. Dynamically allocate an array of Base objects.
 *   2. Use delete[] to correctly delete the entire array.
 *   3. Return status.
 */
int main() {
    Base *bp = new Base[n];   // allocate array of Base objects

    delete[] bp;              // safely delete array

    return 0;
}