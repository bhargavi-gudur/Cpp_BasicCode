/**
 * @file electric_bike_history.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an electric bike recharge system
 *   with payment, receipt generation, and transaction history.
 *   All transactions are stored in a file.
 * @date 30-03-2026
 */

#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
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
 * @brief Stores transaction details in file
 */
void saveTransaction(float amount, string method, int id, string date) {

    ofstream file("transactions.txt", ios::app);

    file << "ID: " << id
         << " | Date: " << date
         << " | Method: " << method
         << " | Amount: " << amount << " Rs\n";

    file.close();
}

/**
 * @brief Prints receipt
 */
void printReceipt(float amount, int paymentMethod) {

    time_t now = time(0);
    char* dt = ctime(&now);

    int transactionID = rand() % 10000;
    string method;

    if(paymentMethod == 1) method = "Cash";
    else if(paymentMethod == 2) method = "UPI";
    else method = "Card";

    cout << "\n===== PAYMENT RECEIPT =====\n";
    cout << "Date & Time: " << dt;
    cout << "Transaction ID: " << transactionID << endl;
    cout << "Payment Method: " << method << endl;
    cout << "Amount Paid: " << amount << " Rs\n";

    // Save to file
    saveTransaction(amount, method, transactionID, dt);
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
 * @brief Displays transaction history
 */
void showHistory() {

    ifstream file("transactions.txt");
    string line;

    cout << "\n===== Transaction History =====\n";

    while(getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

/**
 * @brief Main function
 */
int main() {

    int choice, battery;
    float cost;

    do {

        cout << "\n===== Electric Bike Recharge System =====\n";
        cout << "1. Recharge Bike\n";
        cout << "2. View Transaction History\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Enter battery percentage: ";
                cin >> battery;

                cost = calculateCost(battery);

                if(cost > 0) {
                    cout << "Recharge Cost: " << cost << " Rs\n";
                    makePayment(cost);
                }
                break;

            case 2:
                showHistory();
                break;

            case 3:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}