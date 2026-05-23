/**
 * @file apsrtc_full_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   APSRTC style bus booking system with seat layout,
 *   gender-based seating, online/offline booking,
 *   and payment system.
 * @date 04-04-2026
 */

#include <iostream>
using namespace std;

char seats[10]; // E = Empty, M = Male, F = Female

/**
 * @brief Initialize seats
 */
void initSeats() {
    for(int i = 0; i < 10; i++)
        seats[i] = 'E';
}

/**
 * @brief Show seat layout
 */
void showSeats() {
    cout << "\nSeat Layout:\n";
    for(int i = 0; i < 10; i++) {
        cout << i+1 << "(" << seats[i] << ") ";
    }
    cout << endl;
}

/**
 * @brief Payment system
 */
void makePayment(int amount) {

    int method;
    cout << "\nPayment Methods:\n";
    cout << "1. Cash\n2. UPI\n3. Card\n";
    cout << "Enter method: ";
    cin >> method;

    if(method >= 1 && method <= 3)
        cout << "Payment Successful! Amount: " << amount << " Rs\n";
    else
        cout << "Invalid payment method!\n";
}

/**
 * @brief Book seat with gender rules
 */
void bookSeat() {

    int seatNo, type;
    char gender;

    cout << "\n1. Online\n2. Offline\n";
    cout << "Enter booking type: ";
    cin >> type;

    cout << "Enter seat number (1-10): ";
    cin >> seatNo;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    int i = seatNo - 1;

    if(seats[i] != 'E') {
        cout << "Seat already booked!\n";
        return;
    }

    // First seat → anyone
    if(i == 0) {
        seats[i] = gender;
    }
    else {
        // Same gender OR previous empty
        if(seats[i-1] == gender || seats[i-1] == 'E')
            seats[i] = gender;

        // Special: male first → female allowed
        else if(seats[i-1] == 'M' && gender == 'F')
            seats[i] = gender;

        else {
            cout << "Seat not allowed based on gender rule!\n";
            return;
        }
    }

    cout << "Seat " << seatNo << " booked successfully!\n";

    // Payment only for online
    if(type == 1) {
        makePayment(200); // fixed ticket price
    } else {
        cout << "Pay at counter (Offline).\n";
    }
}

/**
 * @brief Main function
 */
int main() {

    int choice;
    initSeats();

    do {
        cout << "\n===== APSRTC Booking System =====\n";
        cout << "1. Show Seats\n";
        cout << "2. Book Seat\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                showSeats();
                break;

            case 2:
                bookSeat();
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