/**
 * @file atmapp.cpp
 * @author Gandla Bhargavi
 * @brief  ATM Application
 * @details This ATM application allows users to check their balance,
 *  withdraw money, and deposit money.
 * @version 0.2
 * @date 2026-04-28
 */

#include <iostream>
#include <cstdlib> // for system("cls")

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Class representing the ATM application
 */
class AtmApp
{
    int balance; // account balance

public:
    AtmApp() : balance(1000) {} // constructor initializes balance

    void run()
    {
        int withdrawal = 0;
        int depositAmount = 0;
        int choice;

        do
        {
            system("cls"); // clear screen before showing menu

            cout << "-----------------------------------------------------------" << endl;
            cout << " 1. Check balance" << endl;
            cout << " 2. Withdraw amount" << endl;
            cout << " 3. Deposit amount" << endl;
            cout << " 4. Exit" << endl;
            cout << "-----------------------------------------------------------" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "Your current balance is: " << balance << " units." << endl;
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> withdrawal;
                if (withdrawal <= balance)
                {
                    balance -= withdrawal;
                    cout << "Withdrawal successful! New balance: " << balance << " units." << endl;
                }
                else
                {
                    cout << "Insufficient balance. Withdrawal failed!" << endl;
                }
                break;

            case 3:
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                if (depositAmount > 0)
                {
                    balance += depositAmount;
                    cout << "Deposit successful! New balance: " << balance << " units." << endl;
                }
                else
                {
                    cout << "Invalid deposit amount. Please try again." << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM app. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please select a valid option (1-4)." << endl;
                break;
            }

            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();

        } while (choice != 4);
    }
};

/**
 * @brief Main function of the ATM application
 */
int main()
{
    AtmApp app;
    app.run();
    return 0;
}
