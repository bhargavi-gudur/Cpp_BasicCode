/**
 * @file bus_ticket_template.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a bus ticket booking system.
 *   It supports online/offline booking and seat allocation
 *   based on gender rules using templates.
 * @date 03-04-2026
 */

#include <iostream>
using namespace std;

char seats[5] = {'E','E','E','E','E'}; // E = Empty, M = Male, F = Female

/**
 * @brief Template function to assign seat
 */
template <typename seatType>
void bookSeat(seatType gender) {

    for(int i = 0; i < 5; i++) {

        if(seats[i] == 'E') {

            // If first booking
            if(i == 0) {
                seats[i] = gender;
                cout << "Seat " << i+1 << " booked.\n";
                return;
            }

            // Check previous seat condition
            if(seats[i-1] == gender || seats[i-1] == 'E') {
                seats[i] = gender;
                cout << "Seat " << i+1 << " booked.\n";
                return;
            }

            // Special condition: if first is male, female can sit next
            if(seats[i-1] == 'M' && gender == 'F') {
                seats[i] = gender;
                cout << "Seat " << i+1 << " booked.\n";
                return;
            }
        }
    }

    cout << "No suitable seat available!\n";
}

/**
 * @brief Display seat status
 */
void showSeats() {
    cout << "\nSeat Status:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Seat " << i+1 << " : " << seats[i] << endl;
    }
}

/**
 * @brief Booking type
 */
void bookingType() {

    int type;
    char gender;

    cout << "\n1. Online\n2. Offline\n";
    cout << "Enter booking type: ";
    cin >> type;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    if(gender == 'M' || gender == 'F') {
        bookSeat<char>(gender);   // Template usage
    } else {
        cout << "Invalid gender!\n";
    }
}

/**
 * @brief Main function
 */
int main() {

    int choice;

    do {
        cout << "\n===== Bus Ticket Booking =====\n";
        cout << "1. Show Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                showSeats();
                break;

            case 2:
                bookingType();
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