/**
 * @file calculator_app.cpp
 * @author Gandla Bhargavi
 * @brief Simple calculator using separate functions for each operation.
 * @version 0.1
 * @date 2025-09-17
 */

#include <iostream>
using namespace std;

// Function declarations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero not allowed!\n";
        return a; // return unchanged value
    }
    return a / b;
}
double clear() { return 0.0; }

/**
 * @brief Main function: menu-driven calculator
 */
int main() {
    double result = 0.0;
    int choice;
    double num;

    while (true) {
        cout << "\n==== Simple Calculator ====\n";
        cout << "Current result: " << result << endl;
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Clear (reset result to 0)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting calculator. Goodbye!\n";
            break;
        }

        if (choice == 5) {
            result = clear();
            cout << "Result cleared!\n";
            continue;
        }

        cout << "Enter number: ";
        cin >> num;

        switch (choice) {
            case 1: result = add(result, num); break;
            case 2: result = subtract(result, num); break;
            case 3: result = multiply(result, num); break;
            case 4: result = divide(result, num); break;
            default: cout << "Invalid choice, try again.\n";
        }
    }

    return 0;
}