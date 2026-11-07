/**
 * @file ApplianceRuntime.cpp
 * @brief Calculates appliance runtime and electricity consumption.
 * @date 07/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates energy consumption.
 * @param power Appliance power in watts.
 * @param hours Operating time in hours.
 * @return Energy consumed in kWh.
 */
double calculateEnergy(double power, double hours) {
    return (power * hours) / 1000.0;
}

/**
 * @brief Calculates electricity cost.
 * @param energy Energy consumed in kWh.
 * @param rate Electricity tariff per unit.
 * @return Total electricity cost.
 */
double calculateCost(double energy, double rate) {
    return energy * rate;
}

/**
 * @brief Main function of the application.
 * @return 0 on successful execution.
 */
int main() {
    double power, hours, rate, energy, cost;

    cout << "===== APPLIANCE RUNTIME CALCULATOR =====\n";
    cout << "Date: 07/11/2026\n\n";

    cout << "Enter appliance power (Watts): ";
    if (!(cin >> power)) return 1;

    cout << "Enter operating time (Hours): ";
    if (!(cin >> hours)) return 1;

    cout << "Enter electricity rate (Rs./unit): ";
    if (!(cin >> rate)) return 1;

    if (power < 0 || hours < 0 || rate < 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    energy = calculateEnergy(power, hours);
    cost = calculateCost(energy, rate);

    cout << fixed << setprecision(2);

    cout << "\n===== APPLIANCE REPORT =====\n";
    cout << "Power Rating       : " << power << " W\n";
    cout << "Operating Time     : " << hours << " Hours\n";
    cout << "Energy Consumption : " << energy << " kWh\n";
    cout << "Electricity Cost   : Rs. " << cost << "\n";

    return 0;
}