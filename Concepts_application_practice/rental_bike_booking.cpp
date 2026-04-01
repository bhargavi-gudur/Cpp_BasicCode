/**
 * @file rental_bike_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a rental bike booking system.
 *   The user can select a bike, enter number of hours,
 *   and the program calculates total rental cost.
 * @date 01-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Displays available bikes with rent per hour
 */
void showBikes() {
    cout << "\nAvailable Bikes:\n";
    cout << "1. Electric Bike - 50 Rs/hour\n";
    cout << "2. Sports Bike   - 100 Rs/hour\n";
    cout << "3. Scooter       - 30 Rs/hour\n";
}

/**
 * @brief Calculates rental cost
 */
float calculateCost(int choice, int hours) {

    switch(choice) {
        case 1: return hours * 50;
        case 2: return hours * 100;
        case 3: return hours * 30;
        default: return 0;
    }
}

/**
 * @brief Handles booking process
 */
void bookBike() {

    int choice, hours;
    float total;

    showBikes();

    cout << "Enter bike choice: ";
    cin >> choice;

    cout << "Enter number of hours: ";
    cin >> hours;

    total = calculateCost(choice, hours);

    if(total > 0) {
        cout << "Booking Successful!\n";
        cout << "Total Cost: " << total << " Rs\n";
    } else {
        cout << "Invalid bike choice!\n";
    }
}

/**
 * @brief Main function
 */
int main() {

    int choice;

    do {

        cout << "\n===== Rental Bike Booking System =====\n";
        cout << "1. Show Bikes\n";
        cout << "2. Book Bike\n";
        cout << "3. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                showBikes();
                break;

            case 2:
                bookBike();
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