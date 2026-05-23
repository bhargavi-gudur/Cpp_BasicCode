/**
 * @file reverse_numbers_list.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program takes multiple numbers from the user
 *   and prints them in reverse order.
 * @date 15-08-2025
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers: ";
    cin >> n;

    int arr[n]; // store numbers

    // Input numbers
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output in reverse order
    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}