/**
 * @file electric_bike_receipt.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an electric bike recharge system
 *   with payment, receipt generation, date/time, and
 *   transaction ID.
 * @date 29-03-2026
 */

#include <iostream>
#include <ctime>
using namespace std;

/**
 * @brief Calculates recharge cost
 */
float calculateCost(int battery) {

    if(battery < 0 || battery > 100) {
        cout << "Invalid battery percentage!\n";
        return 0;
    }

    return (100 - battery) * 2.5;
}

/**
 * @brief Generates and prints receipt
 */
void printReceipt(float amount, int paymentMethod) {

    time_t now = time(0);
    char* dt = ctime(&now);

    int transactionID = rand() % 10000;

    cout << "\n===== PAYMENT RECEIPT =====\n";
    cout << "Date & Time: " << dt;
    cout << "Transaction ID: " << transactionID << endl;

    cout << "Payment Method: ";
    if(paymentMethod == 1) cout << "Cash\n";
    else if(paymentMethod == 2) cout << "UPI\n";
    else if(paymentMethod == 3) cout << "Card\n";

    cout << "Amount Paid: " << amount << " Rs\n";
    cout << "Recharge Successful!\n";
}

/**
 * @brief Handles payment
 */
void makePayment(float amount) {

    int choice;

    cout << "\nPayment Options:\n";
    cout << "1. Cash\n2. UPI\n3. Card\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice >= 1 && choice <= 3) {
        printReceipt(amount, choice);
    }
    else {
        cout << "Invalid payment method!\n";
    }
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