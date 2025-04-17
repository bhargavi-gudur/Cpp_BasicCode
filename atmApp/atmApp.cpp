/**
 * @file atmapp.cpp
 * @author Gandla Bhargavi
 * @brief  ATM Application
 * @details This ATM application allows users to check their balance,
 *  withdraw money, and deposit money.
 * @version 0.1
 * @date 2025-03-14
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
/**
 * @brief  ATM Application prototype
 *
 */
void atmApp();
/**
 * @brief Main function of the ATM application
 * @return int
 */
int main()
{
    atmApp();
    return 0;
}
/**
 * @brief    ATM Application function
 * @details  This function provides a simple ATM interface for users to  check their balance,
 * withdraw money, and deposit money. The application runs in a loop until the user chooses to exit.
 */
void atmApp()
{
    int balance = 1000;    // Initial account balance
    int withdrawal = 0;    // Amount to withdraw
    int depositAmount = 0; // Amount to deposit
    int choice;            // User's menu choice

    do
    {
    
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
        case 1: // Balance Inquiry
            cout << "Your current balance is: " << balance << " units." << endl;
            break;

        case 2: // Withdraw Money
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

        case 3: // Deposit Money
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

        case 4: // Exit
            cout << "Thank you for using the ATM app. Goodbye!" << endl;
            break;

        default: // Invalid Choice
            cout << "Invalid choice. Please select a valid option (1-4)." << endl;
            break;
        }
        cout << endl;
        
    } while (choice != 4); // Loop exits when user selects '4'
    system("cls");
}
