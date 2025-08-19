/**
 * @file sort_map.cpp
 * @author Gandla Bhargavi
 * @brief Program to count and sort numbers using map in C++.
 * 
 * This program reads a list of integers, counts the frequency of
 * each number using a map, and then displays them in sorted order.
 * Since map stores keys in sorted order, no extra sorting is needed.
 * 
 * @version 0.1
 * @date 2025-08-03
 */

#include <iostream>
#include <map>
using namespace std;

/**
 * @brief Reads an array of numbers and displays sorted frequencies using map.
 * 
 * @param arr The input array.
 * @param size The size of the array.
 */
void sortAndCountUsingMap(int arr[], int size) {
    map<int, int> frequencyMap;

    // Count frequency of each number
    for (int i = 0; i < size; i++) {
        frequencyMap[arr[i]]++;
    }

    // Display sorted result
    cout << "Sorted number frequencies:\n";
    for (auto pair : frequencyMap) {
        cout << pair.first << " : " << pair.second << endl;
    }
}

/**
 * @brief Main function to input values and call sorting function.
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

    sortAndCountUsingMap(arr, size);

    return 0;
}