/**
 * @file reverse_list.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program takes a list of numbers from the user and
 *   prints them in reverse order. It demonstrates the use
 *   of functions and loops in C++.
 * @date 17-08-2025
 */

#include <iostream>
using namespace std;

/**
 * @brief Reads numbers from the user and stores them in an array.
 * 
 * @param arr The array to store numbers
 * @param n The number of elements
 */
void readNumbers(int arr[], int n) {
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

/**
 * @brief Prints the numbers in the original order.
 * 
 * @param arr The array of numbers
 * @param n The number of elements
 */
void printNumbers(int arr[], int n) {
    cout << "Numbers in original order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/**
 * @brief Prints the numbers in reverse order.
 * 
 * @param arr The array of numbers
 * @param n The number of elements
 */
void printReverse(int arr[], int n) {
    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/**
 * @brief Main function - controls input and output flow.
 */
int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int arr[n];

    readNumbers(arr, n);   // input
    printNumbers(arr, n);  // show original
    printReverse(arr, n);  // show reversed

    return 0;
}