/**
 * @file fruits_template.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program demonstrates a fruits billing system
 *   using C++ templates with custom type name.
 * @date 31-03-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Template function using custom type name 'fruits'
 */
template <typename fruits>
fruits calculateTotal(fruits price, fruits qty) {
    return price * qty;
}

/**
 * @brief Displays fruits
 */
void showFruits() {
    cout << "\n1. Apple  - 100 Rs/kg\n";
    cout << "2. Banana - 40 Rs/dozen\n";
    cout << "3. Orange - 80 Rs/kg\n";
}

/**
 * @brief Handles buying fruits
 */
void buyFruits() {

    int choice;
    float qty, total = 0;

    do {
        showFruits();

        cout << "Enter choice (0 to finish): ";
        cin >> choice;

        if(choice == 0)
            break;

        cout << "Enter quantity: ";
        cin >> qty;

        switch(choice) {

            case 1:
                total += calculateTotal<float>(100, qty);
                break;

            case 2:
                total += calculateTotal<float>(40, qty);
                break;

            case 3:
                total += calculateTotal<float>(80, qty);
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 0);

    cout << "\nTotal Bill: " << total << " Rs\n";
}

/**
 * @brief Main function
 */
int main() {

    buyFruits();
    return 0;
}