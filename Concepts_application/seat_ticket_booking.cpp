/**
 * @file seat_ticket_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a movie ticket booking system
 *   with seat numbers. The user can view available seats
 *   and book a specific seat.
 * @date 09-03-2026
 */

#include <iostream>
using namespace std;

bool seats[10] = {false};   // 10 seats: false = available, true = booked

/**
 * @brief Displays seat availability.
 */
void showSeats() {
    cout << "\nSeat Status:\n";
    
    for(int i = 0; i < 10; i++) {
        cout << "Seat " << i + 1 << " : ";
        
        if(seats[i] == false)
            cout << "Available";
        else
            cout << "Booked";
            
        cout << endl;
    }
}

/**
 * @brief Books a specific seat.
 * @param seatNumber Seat number selected by user
 */
void bookSeat(int seatNumber) {

    if(seatNumber < 1 || seatNumber > 10) {
        cout << "Invalid seat number!" << endl;
    }
    else if(seats[seatNumber - 1] == true) {
        cout << "Seat already booked!" << endl;
    }
    else {
        seats[seatNumber - 1] = true;
        cout << "Seat " << seatNumber << " booked successfully!" << endl;
    }
}

/**
 * @brief Main function for ticket booking menu.
 */
int main() {

    int choice, seatNumber;

    do {
        cout << "\n===== Seat Ticket Booking System =====" << endl;
        cout << "1. Show Seat Status" << endl;
        cout << "2. Book Seat" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                showSeats();
                break;

            case 2:
                cout << "Enter seat number (1-10): ";
                cin >> seatNumber;
                bookSeat(seatNumber);
                break;

            case 3:
                cout << "Thank you for booking!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}