/**
 * @file star_pattern_menu.cpp
 * @author Gandla Bhargavi
 * @brief Menu-based star pattern program in C++.
 * 
 * This program prints different star patterns based on user choice.
 * 
 * @version 0.1
 * @date 2025-08-07
 */

#include <iostream>
using namespace std;

/**
 * @brief Prints a left-aligned triangle
 */
void leftAligned(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

/**
 * @brief Prints a right-aligned triangle
 */
void rightAligned(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++)
            cout << "  ";
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

/**
 * @brief Prints a centered pyramid
 */
void pyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int s = 1; s <= rows - i; s++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}

/**
 * @brief Main function with star pattern menu
 */
int main() {
    int choice, rows;

    do {
        cout << "\n--- Star Pattern Menu ---\n";
        cout << "1. Left-aligned Triangle\n";
        cout << "2. Right-aligned Triangle\n";
        cout << "3. Pyramid\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter number of rows: ";
            cin >> rows;
        }

        switch (choice) {
            case 1: leftAligned(rows); break;
            case 2: rightAligned(rows); break;
            case 3: pyramid(rows); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}