/**
 * @file ticket_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a basic ticket booking system.
 *   The user can view available tickets, book tickets,
 *   and check remaining seats.
 * @date 27-02-2026
 */

#include <iostream>
using namespace std;

int totalTickets = 50;   // Total tickets available

/**
 * @brief Displays available tickets.
 */
void showAvailable() {
    cout << "Available Tickets: " << totalTickets << endl;
}

/**
 * @brief Books tickets for the user.
 * @param number Number of tickets to book
 */
void bookTicket(int number) {
    if (number <= 0) {
        cout << "Invalid number of tickets!" << endl;
    }
    else if (number > totalTickets) {
        cout << "Sorry! Not enough tickets available." << endl;
    }
    else {
        totalTickets -= number;
        cout << "Booking successful!" << endl;
        cout << number << " ticket(s) booked." << endl;
    }
}

/**
 * @brief Main function for menu-driven ticket booking.
 */
int main() {
    int choice, tickets;

    do {
        cout << "\n===== Ticket Booking System =====" << endl;
        cout << "1. Show Available Tickets" << endl;
        cout << "2. Book Tickets" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showAvailable();
                break;

            case 2:
                cout << "Enter number of tickets to book: ";
                cin >> tickets;
                bookTicket(tickets);
                break;

            case 3:
                cout << "Thank you! Visit again." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 3);

    return 0;
}