/**
 * @file SequenceMissing.cpp
 * @author Gandla Bhargavi
 * @brief Program to find the missing number in the sequence 3, 3, 6, 9, 15, ? using a separate function.
 *
 * Rule: Each term = sum of the previous two terms
 * 3, 3, 6, 9, 15, 24, ...
 *
 * @version 0.1
 * @date 2025-09-27
 */

#include <iostream>
using namespace std;

/**
 * @brief Generates and prints the sequence up to n terms.
 * 
 * @param n Number of terms to generate.
 */
void printSequence(int n) {
    int prev2 = 3; // first term
    int prev1 = 3; // second term

    cout << prev2 << ", " << prev1;

    for (int i = 3; i <= n; i++) {
        int next = prev1 + prev2;
        cout << ", " << next;
        prev2 = prev1;
        prev1 = next;
    }

    cout << "\nMissing number is: " << prev1 << endl;
}

/**
 * @brief Main function to call printSequence.
 */
int main() {
    printSequence(6);  // generate first 6 terms (3,3,6,9,15,24)
    return 0;
}