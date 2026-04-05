/**
 * @file zoo_park_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a Zoo Park ticket booking system.
 *   It uses structures (data structure) to manage different
 *   visitor types like children, parents, school groups, and adults.
 *   It calculates total ticket cost based on category.
 * @date 05-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Structure to store visitor details
 */
struct Visitor {
    int children;
    int adults;
    int parents;
    int schoolGroup;
};

/**
 * @brief Calculates total ticket cost
 */
int calculateCost(Visitor v) {

    int total = 0;

    total += v.children * 50;      // children ticket
    total += v.adults * 100;       // adult ticket
    total += v.parents * 80;       // parents ticket
    total += v.schoolGroup * 30;   // school group ticket

    return total;
}

/**
 * @brief Displays ticket prices
 */
void showPrices() {
    cout << "\nTicket Prices:\n";
    cout << "Children      : 50 Rs\n";
    cout << "Adults        : 100 Rs\n";
    cout << "Parents       : 80 Rs\n";
    cout << "School Group  : 30 Rs per student\n";
}

/**
 * @brief Main function
 */
int main() {

    Visitor v;
    int total;

    cout << "===== Zoo Park Booking System =====\n";

    showPrices();

    cout << "\nEnter number of children: ";
    cin >> v.children;

    cout << "Enter number of adults: ";
    cin >> v.adults;

    cout << "Enter number of parents: ";
    cin >> v.parents;

    cout << "Enter number of school group students: ";
    cin >> v.schoolGroup;

    total = calculateCost(v);

    cout << "\n===== Bill =====\n";
    cout << "Total Amount: " << total << " Rs\n";

    return 0;
}