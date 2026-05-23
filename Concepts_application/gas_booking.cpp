/**
 * @file gas_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a gas cylinder booking system.
 *   A person with two cylinders can book only after 25 days
 *   from the last delivery, and a person with a single cylinder
 *   can book only after 24 days from the last delivery.
 * @date 26-03-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Checks booking eligibility
 * @param type Cylinder type (1 = single, 2 = double)
 * @param days Days after last delivery
 */
void checkBooking(int type, int days) {

    if(type == 1) {
        if(days >= 24)
            cout << "Booking Allowed for Single Cylinder.\n";
        else
            cout << "Booking NOT Allowed. Try after " << (24 - days) << " day(s).\n";
    }
    else if(type == 2) {
        if(days >= 25)
            cout << "Booking Allowed for Double Cylinder.\n";
        else
            cout << "Booking NOT Allowed. Try after " << (25 - days) << " day(s).\n";
    }
    else {
        cout << "Invalid cylinder type!\n";
    }
}

/**
 * @brief Main function
 */
int main() {

    int type, days;

    cout << "Gas Booking System\n";
    cout << "1. Single Cylinder\n2. Double Cylinder\n";

    cout << "Enter cylinder type: ";
    cin >> type;

    cout << "Enter days after last delivery: ";
    cin >> days;

    checkBooking(type, days);

    return 0;
}