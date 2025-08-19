/**
 * @file swap_menu.cpp
 * author Gandla Bhargavi
 * @brief Program to swap two numbers using a menu-based system.
 * 
 * This program gives the user a menu to choose how to swap two numbers:
 * using a temporary variable, arithmetic operations, or XOR.
 * 
 * @version 0.1
 * @date 2025-08-05
 */

#include <iostream>
using namespace std;

/**
 * @brief Swaps numbers using a temporary variable.
 */
void swapWithTemp(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/**
 * @brief Swaps numbers using arithmetic operations (no temp).
 */
void swapWithArithmetic(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

/**
 * @brief Swaps numbers using XOR (bitwise).
 */
void swapWithXOR(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

/**
 * @brief Main function to provide a menu to the user for swap options.
 */
int main() {
    int num1, num2, choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nChoose a swapping method:\n";
    cout << "1. Swap using temp variable\n";
    cout << "2. Swap using arithmetic\n";
    cout << "3. Swap using XOR\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            swapWithTemp(num1, num2);
            break;
        case 2:
            swapWithArithmetic(num1, num2);
            break;
        case 3:
            swapWithXOR(num1, num2);
            break;
        default:
            cout << "Invalid choice. No swap performed.\n";
            return 0;
    }

    cout << "\nAfter swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    return 0;
}