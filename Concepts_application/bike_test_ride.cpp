/**
 * @file bike_test_ride.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates booking a test ride for new electric bikes.
 *   It requires any one valid ID proof (Aadhar, Driving License,
 *   PAN Card, Passport) before booking.
 * @date 10-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Bike
 */
class Bike {
public:
    string name;
};

/**
 * @brief Class for Test Ride
 */
class TestRide {
private:
    Bike bikes[5];

public:

    // Initialize bike list
    void initBikes() {
        bikes[0].name = "TVS Electric";
        bikes[1].name = "River Indie";
        bikes[2].name = "Ola Electric";
        bikes[3].name = "Ultraviolette";
        bikes[4].name = "Hero Vida";
    }

    // Show bikes
    void showBikes() {
        cout << "\nAvailable Electric Bikes:\n";
        for(int i = 0; i < 5; i++) {
            cout << i+1 << ". " << bikes[i].name << endl;
        }
    }

    // ID verification
    bool verifyID() {
        int idChoice;

        cout << "\nSelect any one ID proof:\n";
        cout << "1. Aadhar Card\n";
        cout << "2. Driving License\n";
        cout << "3. PAN Card\n";
        cout << "4. Passport\n";
        cout << "Enter choice: ";
        cin >> idChoice;

        if(idChoice >= 1 && idChoice <= 4) {
            cout << "ID Verified Successfully!\n";
            return true;
        } else {
            cout << "Invalid ID proof!\n";
            return false;
        }
    }

    // Book test ride
    void bookRide() {

        int choice;

        if(!verifyID()) return;

        showBikes();

        cout << "Select bike number: ";
        cin >> choice;

        if(choice < 1 || choice > 5) {
            cout << "Invalid bike selection!\n";
            return;
        }

        cout << "\nTest Ride Booked Successfully!\n";
        cout << "Bike: " << bikes[choice-1].name << endl;
        cout << "Date: 10-04-2026\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    TestRide t;
    int option;

    t.initBikes();

    cout << "===== Electric Bike Test Ride System =====\n";

    do {
        cout << "\n1. Show Bikes\n";
        cout << "2. Book Test Ride\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> option;

        switch(option) {

            case 1:
                t.showBikes();
                break;

            case 2:
                t.bookRide();
                break;

            case 3:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(option != 3);

    return 0;
}