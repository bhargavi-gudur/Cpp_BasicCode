/**
 * @file electric_bike_recharge.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an electric bike recharge system.
 *   The user enters battery percentage, and the program
 *   calculates recharge units and cost. It also checks
 *   if recharge is needed or not.
 * @date 27-03-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates recharge details
 * @param battery Current battery percentage
 */
void rechargeBike(int battery) {

    if(battery < 0 || battery > 100) {
        cout << "Invalid battery percentage!\n";
        return;
    }

    if(battery == 100) {
        cout << "Battery is already full. No recharge needed.\n";
        return;
    }

    int unitsNeeded = 100 - battery;
    float cost = unitsNeeded * 2.5;   // Rs 2.5 per unit

    cout << "Recharge Needed: " << unitsNeeded << "%\n";
    cout << "Estimated Cost: " << cost << " Rs\n";
}

/**
 * @brief Main function
 */
int main() {

    int battery;

    cout << "Electric Bike Recharge System\n";
    cout << "Enter current battery percentage: ";
    cin >> battery;

    rechargeBike(battery);

    return 0;
}