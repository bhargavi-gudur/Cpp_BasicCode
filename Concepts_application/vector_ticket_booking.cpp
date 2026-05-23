/**
 * @file vector_ticket_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program demonstrates a simple seat booking system
 *   using the STL vector container. The vector stores booked
 *   seat numbers, and the program checks the vector to ensure
 *   that the same seat is not booked more than once.
 * @date 13-03-2026
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Main function to book a seat
 */
int main() {

    vector<int> bookedSeats;
    int seat;
    bool found = false;

    cout << "Enter seat number: ";
    cin >> seat;

    // Check if seat is already booked
    for(int s : bookedSeats) {
        if(s == seat) {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "Seat already booked!" << endl;
    }
    else {
        bookedSeats.push_back(seat);
        cout << "Seat booked successfully!" << endl;
    }

    return 0;
}