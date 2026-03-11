/**
 * @file stl_ticket_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program demonstrates a seat ticket booking system
 *   using STL set to prevent double booking of seats.
 * @date 11-03-2026
 */

#include <iostream>
#include <set>
using namespace std;

set<int> bookedSeats;   // STL set to store booked seat numbers

/**
 * @brief Displays booked seats.
 */
void showBookedSeats() {

    if(bookedSeats.empty()) {
        cout << "No seats booked yet." << endl;
        return;
    }

    cout << "Booked Seats: ";
    for(int seat : bookedSeats) {
        cout << seat << " ";
    }
    cout << endl;
}

/**
 * @brief Books a seat using STL set.
 * @param seatNumber Seat number chosen by user
 */
void bookSeat(int seatNumber) {

    if(seatNumber < 1 || seatNumber > 10) {
        cout << "Invalid seat number!" << endl;
        return;
    }

    // Check if seat already exists in set
    if(bookedSeats.find(seatNumber) != bookedSeats.end()) {
        cout << "Seat already booked! Choose another seat." << endl;
    }
    else {
        bookedSeats.insert(seatNumber);
        cout << "Seat " << seatNumber << " booked successfully!" << endl;
    }
}

/**
 * @brief Main function with menu.
 */
int main() {

    int choice, seat;

    do {

        cout << "\n===== STL Ticket Booking System =====" << endl;
        cout << "1. Show Booked Seats" << endl;
        cout << "2. Book Seat" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                showBookedSeats();
                break;

            case 2:
                cout << "Enter seat number (1-10): ";
                cin >> seat;
                bookSeat(seat);
                break;

            case 3:
                cout << "Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while(choice != 3);

    return 0;
}