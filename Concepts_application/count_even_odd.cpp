/**
 * @file count_even_odd.cpp
 * @author Gandla Bhargavi
 * @brief Program to count even and odd numbers using map in C++.
 * 
 * This program reads a list of integers and uses a map to keep count
 * of how many are even and how many are odd.
 * 
 * @version 0.1
 * @date 2025-08-02
 */

#include <iostream>
#include <map>
using namespace std;

/**
 * @brief Counts even and odd numbers using a map and displays the result.
 * 
 * @param arr The input array of integers.
 * @param size The size of the array.
 */
void countEvenOdd(int arr[], int size) {
    map<string, int> countMap;
    countMap["even"] = 0;
    countMap["odd"] = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            countMap["even"]++;
        else
            countMap["odd"]++;
    }

    cout << "Even count: " << countMap["even"] << endl;
    cout << "Odd count : " << countMap["odd"] << endl;
}

/**
 * @brief Main function to read numbers and call count function.
 */
int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    countEvenOdd(arr, size);

    return 0;
}