/**
 * @file electric_bill.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an electric bill payment system.
 *   User can pay bill using registered details (assignment no,
 *   house no, mobile no, or Aadhar).
 *   Supports online and offline payment.
 * @date 16-04-2026
 */

#include <iostream>
#include <ctime>
using namespace std;

/**
 * @brief Class for Customer
 */
class Customer {
public:
    int assignmentNo;
    int houseNo;
    long mobileNo;
    long aadharNo;
    int billAmount;
};

/**
 * @brief Class for Electricity System
 */
class Electricity {
private:
    Customer c;

public:

    // Initialize customer data
    void initCustomer() {
        c.assignmentNo = 101;
        c.houseNo = 202;
        c.mobileNo = 9876543210;
        c.aadharNo = 123456789012;
        c.billAmount = 1500;
    }

    // Verify customer
    bool verify() {
        int choice;
        long input;

        cout << "\nVerify using:\n";
        cout << "1. Assignment Number\n";
        cout << "2. House Number\n";
        cout << "3. Mobile Number\n";
        cout << "4. Aadhar Number\n";
        cout << "Enter choice: ";
        cin >> choice;

        cout << "Enter value: ";
        cin >> input;

        if(choice == 1 && input == c.assignmentNo) return true;
        if(choice == 2 && input == c.houseNo) return true;
        if(choice == 3 && input == c.mobileNo) return true;
        if(choice == 4 && input == c.aadharNo) return true;

        return false;
    }

    // Payment system
    void payBill() {

        if(!verify()) {
            cout << "Verification Failed!\n";
            return;
        }

        int type;
        cout << "\n1. Online Payment\n2. Offline Payment\n";
        cout << "Enter choice: ";
        cin >> type;

        cout << "Bill Amount: " << c.billAmount << " Rs\n";

        if(type == 1) {
            cout << "Payment Successful (Online)\n";
        }
        else if(type == 2) {
            cout << "Pay at office (Offline)\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

        showDate();
    }

    // Show current date
    void showDate() {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        cout << "Date: "
             << ltm->tm_mday << "-"
             << 1 + ltm->tm_mon << "-"
             << 1900 + ltm->tm_year << endl;
    }
};

/**
 * @brief Main function
 */
int main() {

    Electricity e;
    int choice;

    e.initCustomer();

    cout << "===== Electric Bill Payment System =====\n";

    do {
        cout << "\n1. Pay Bill\n";
        cout << "2. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                e.payBill();
                break;

            case 2:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 2);

    return 0;
}