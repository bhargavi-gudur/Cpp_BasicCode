/**
 * @file movie_ticket_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a simple movie ticket booking system.
 *   The user can view available seats and book movie tickets.
 * @date 08-03-2026
 */

#include <iostream>
using namespace std;

int totalSeats = 30;   // Total seats available in the theatre

/**
 * @brief Displays the number of available seats.
 */
void showSeats() {
    cout << "Available Seats: " << totalSeats << endl;
}

/**
 * @brief Books movie tickets.
 * @param seats Number of seats to book
 */
void bookSeats(int seats) {
    if (seats <= 0) {
        cout << "Invalid number of seats!" << endl;
    }
    else if (seats > totalSeats) {
        cout << "Sorry! Not enough seats available." << endl;
    }
    else {
        totalSeats -= seats;
        cout << "Booking Successful!" << endl;
        cout << seats << " seat(s) booked." << endl;
    }
}

/**
 * @brief Displays movie information.
 */
void showMovie() {
    cout << "Now Showing: Avengers Movie" << endl;
    cout << "Ticket Price: 200 Rs per seat" << endl;
}

/**
 * @brief Main function with menu options.
 */
int main() {

    int choice, seats;

    showMovie();

    do {
        cout << "\n===== Movie Ticket Booking System =====" << endl;
        cout << "1. Show Available Seats" << endl;
        cout << "2. Book Tickets" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                showSeats();
                break;

            case 2:
                cout << "Enter number of seats to book: ";
                cin >> seats;
                bookSeats(seats);
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