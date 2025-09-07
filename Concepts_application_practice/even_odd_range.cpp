/**
 * @file even_odd_range.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program takes a range from the user and prints
 *   all even and odd numbers separately.
 * @date 07-09-2025
 */

#include <iostream>
using namespace std;

/**
 * @brief Prints all even numbers in the given range.
 * @param start Starting number of the range
 * @param end Ending number of the range
 */
void printEven(int start, int end) {
    cout << "Even numbers: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
}

/**
 * @brief Prints all odd numbers in the given range.
 * @param start Starting number of the range
 * @param end Ending number of the range
 */
void printOdd(int start, int end) {
    cout << "Odd numbers: ";
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;
    cout << "Enter end of range: ";
    cin >> end;

    printEven(start, end);  // Function call
    printOdd(start, end);   // Function call

    return 0;
}