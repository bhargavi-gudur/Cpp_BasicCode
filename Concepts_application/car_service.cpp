/**
 * @file car_service.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a car service booking system.
 *   It allows users to choose service type and calculates cost.
 *   Uses OOP concepts (class & object).
 * @date 12-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Car Service
 */
class CarService {
private:
    string customerName;
    string carModel;
    int serviceChoice;

public:

    // Get customer details
    void getDetails() {
        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Car Model: ";
        cin >> carModel;
    }

    // Show service menu
    void showServices() {
        cout << "\nAvailable Services:\n";
        cout << "1. Oil Change - 1000 Rs\n";
        cout << "2. Car Wash - 500 Rs\n";
        cout << "3. Full Service - 3000 Rs\n";
        cout << "4. Engine Check - 1500 Rs\n";
    }

    // Select service
    void selectService() {
        cout << "Enter service choice: ";
        cin >> serviceChoice;
    }

    // Calculate bill
    int calculateBill() {
        switch(serviceChoice) {
            case 1: return 1000;
            case 2: return 500;
            case 3: return 3000;
            case 4: return 1500;
            default: return 0;
        }
    }

    // Display final details
    void displayBill() {
        int total = calculateBill();

        if(total == 0) {
            cout << "Invalid service selected!\n";
            return;
        }

        cout << "\n===== Service Bill =====\n";
        cout << "Customer: " << customerName << endl;
        cout << "Car Model: " << carModel << endl;
        cout << "Total Cost: " << total << " Rs\n";
        cout << "Date: 10-04-2026\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    CarService c;
    int choice;

    cout << "===== Car Service System =====\n";

    do {
        cout << "\n1. Book Service\n";
        cout << "2. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                c.getDetails();
                c.showServices();
                c.selectService();
                c.displayBill();
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