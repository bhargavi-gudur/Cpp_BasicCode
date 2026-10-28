/**
 * @file HouseholdElectricity.cpp
 * @brief Calculates household electricity consumption and cost.
 * @date 28/10/2026
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**
 * @brief Calculates electricity consumption.
 * @param power Appliance power in watts.
 * @param hours Daily usage time in hours.
 * @param days Number of days used.
 * @return Energy consumption in kWh.
 */
double calculateUnits(double power, double hours, int days) {
    return (power * hours * days) / 1000.0;
}

/**
 * @brief Calculates electricity cost.
 * @param units Electricity consumption in kWh.
 * @param rate Cost per unit.
 * @return Total electricity cost.
 */
double calculateBill(double units, double rate) {
    return units * rate;
}

/**
 * @brief Main function of the application.
 * @return 0 on successful execution.
 */
int main() {
    int n, days;
    double rate, totalUnits = 0.0;

    cout << "HOUSEHOLD ELECTRICITY USAGE CALCULATOR\n";
    cout << "Date: 28/10/2026\n\n";

    cout << "Enter number of appliances: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid number of appliances.\n";
        return 1;
    }

    cout << "Enter number of usage days: ";
    if (!(cin >> days) || days <= 0) {
        cout << "Invalid number of days.\n";
        return 1;
    }

    cout << "Enter electricity rate per unit (Rs.): ";
    if (!(cin >> rate) || rate < 0) {
        cout << "Invalid electricity rate.\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    for (int i = 1; i <= n; i++) {
        string appliance;
        double power, hours;

        cout << "\nAppliance " << i << '\n';

        cout << "Enter appliance name (one word): ";
        cin >> appliance;

        cout << "Enter power rating (watts): ";
        if (!(cin >> power) || power < 0) {
            cout << "Invalid power rating.\n";
            return 1;
        }

        cout << "Enter daily usage (hours): ";
        if (!(cin >> hours) || hours < 0 || hours > 24) {
            cout << "Usage must be between 0 and 24 hours.\n";
            return 1;
        }

        double units = calculateUnits(power, hours, days);
        totalUnits += units;

        cout << "Energy used by " << appliance
             << ": " << units << " kWh\n";
    }

    double bill = calculateBill(totalUnits, rate);

    cout << "\n========== ELECTRICITY BILL ==========\n";
    cout << "Usage period     : " << days << " days\n";
    cout << "Total units used : " << totalUnits << " kWh\n";
    cout << "Rate per unit    : Rs. " << rate << '\n';
    cout << "Estimated bill   : Rs. " << bill << '\n';
    cout << "======================================\n";

    return 0;
}