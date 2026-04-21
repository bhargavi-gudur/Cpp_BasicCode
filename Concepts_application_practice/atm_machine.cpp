/**
 * @file atm_machine.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an ATM machine.
 *   It supports card insertion, withdrawal, balance enquiry,
 *   and handles errors like card not inserted or not read.
 *   Dispenses notes in 2000, 500, and 100 denominations.
 * @date 21-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief ATM Class
 */
class ATM {
private:
    int balance = 5000;
    bool cardInserted = false;
    bool cardRead = false;

public:

    // Insert card
    void insertCard() {
        cardInserted = true;
        cout << "Card Inserted Successfully\n";
    }

    // Read card
    void readCard() {
        if(!cardInserted) {
            cout << "Please insert card first!\n";
            return;
        }
        cardRead = true;
        cout << "Card Read Successfully\n";
    }

    // Balance enquiry
    void checkBalance() {
        if(!cardInserted || !cardRead) {
            cout << "Card not ready!\n";
            return;
        }
        cout << "Available Balance: " << balance << " Rs\n";
    }

    // Withdrawal
    void withdraw() {
        if(!cardInserted) {
            cout << "Card not inserted!\n";
            return;
        }

        if(!cardRead) {
            cout << "Card not read!\n";
            return;
        }

        int amount;
        cout << "Enter amount: ";
        cin >> amount;

        if(amount > balance) {
            cout << "Insufficient balance!\n";
            return;
        }

        if(amount % 100 != 0) {
            cout << "Enter amount in multiples of 100!\n";
            return;
        }

        balance -= amount;

        cout << "Please collect your cash:\n";

        int n2000 = amount / 2000;
        amount %= 2000;

        int n500 = amount / 500;
        amount %= 500;

        int n100 = amount / 100;

        if(n2000 > 0) cout << "2000 x " << n2000 << endl;
        if(n500 > 0) cout << "500 x " << n500 << endl;
        if(n100 > 0) cout << "100 x " << n100 << endl;

        cout << "Transaction Successful\n";
    }

    // Menu
    void menu() {
        int choice;

        do {
            cout << "\n===== ATM Machine =====\n";
            cout << "1. Insert Card\n";
            cout << "2. Read Card\n";
            cout << "3. Balance Enquiry\n";
            cout << "4. Withdraw\n";
            cout << "5. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    insertCard();
                    break;
                case 2:
                    readCard();
                    break;
                case 3:
                    checkBalance();
                    break;
                case 4:
                    withdraw();
                    break;
                case 5:
                    cout << "Thank you!\n";
                    break;
                default:
                    cout << "Invalid choice!\n";
            }

        } while(choice != 5);
    }
};

/**
 * @brief Main function
 */
int main() {

    ATM atm;
    atm.menu();

    return 0;
}