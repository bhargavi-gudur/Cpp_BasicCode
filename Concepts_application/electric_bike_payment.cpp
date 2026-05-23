/**
 * @file electric_bike_payment.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an electric bike recharge system
 *   with a payment system. It calculates recharge cost based
 *   on battery percentage and allows the user to make payment
 *   using different modes.
 * @date 28-03-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates recharge cost
 * @param battery Current battery percentage
 * @return total cost
 */
float calculateCost(int battery) {

    if(battery < 0 || battery > 100) {
        cout << "Invalid battery percentage!\n";
        return 0;
    }

    int units = 100 - battery;
    return units * 2.5;   // cost per unit
}

/**
 * @brief Handles payment process
 * @param amount Total amount to pay
 */
void makePayment(float amount) {

    int choice;

    cout << "\nPayment Options:\n";
    cout << "1. Cash\n2. UPI\n3. Card\n";
    cout << "Enter payment method: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Payment successful (Cash).\n";
            break;
        case 2:
            cout << "Payment successful (UPI).\n";
            break;
        case 3:
            cout << "Payment successful (Card).\n";
            break;
        default:
            cout << "Invalid payment method!\n";
            return;
    }

    cout << "Amount Paid: " << amount << " Rs\n";
}

/**
 * @brief Main function
 */
int main() {

    int battery;
    float cost;

    cout << "Electric Bike Recharge System\n";
    cout << "Enter battery percentage: ";
    cin >> battery;

    cost = calculateCost(battery);

    if(cost > 0) {
        cout << "Recharge Cost: " << cost << " Rs\n";
        makePayment(cost);
    }

    return 0;
}