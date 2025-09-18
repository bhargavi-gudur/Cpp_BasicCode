/**
 * @file VectorExample.cpp
 * @author Gandla Bhargavi
 * @brief Program to demonstrate basic operations using std::vector in C++.
 *
 * This program shows how to:
 * - Insert elements into a vector
 * - Access elements
 * - Iterate through a vector
 * - Remove elements
 * - Display the vector size and capacity
 *
 * @version 0.1
 * @date 2025-09-18
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Prints all elements of a vector.
 * 
 * @param v The vector of integers to print.
 */
void printVector(const vector<int>& v) {
    cout << "Vector elements: ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

/**
 * @brief Main function demonstrating vector operations.
 * 
 * @return int Exit status of the program.
 */
int main() {
    // Declare a vector of integers
    vector<int> numbers;

    // Insert elements
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    cout << "After insertion:" << endl;
    printVector(numbers);

    // Access elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Last element : " << numbers.back() << endl;

    // Remove the last element
    numbers.pop_back();
    cout << "\nAfter removing last element:" << endl;
    printVector(numbers);

    // Insert at specific position (beginning)
    numbers.insert(numbers.begin(), 5);
    cout << "\nAfter inserting 5 at beginning:" << endl;
    printVector(numbers);

    // Erase element at index 1
    numbers.erase(numbers.begin() + 1);
    cout << "\nAfter erasing element at index 1:" << endl;
    printVector(numbers);

    // Show size and capacity
    cout << "\nVector size: " << numbers.size() << endl;
    cout << "Vector capacity: " << numbers.capacity() << endl;

    return 0;
}