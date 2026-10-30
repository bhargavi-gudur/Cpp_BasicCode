/**
 * @file SolarCalculator.cpp
 * @brief Calculates solar panel electricity generation and savings.
 * @date 31/10/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates daily solar energy generation.
 * @param capacity Solar panel capacity in watts.
 * @param sunlight Daily sunlight hours.
 * @return Daily energy in kWh.
 */
double calculateDailyEnergy(double capacity, double sunlight) {
    return (capacity * sunlight) / 1000.0;
}

/**
 * @brief Calculates monthly solar energy generation.
 * @param daily Daily energy generation in kWh.
 * @return Monthly energy in kWh.
 */
double calculateMonthlyEnergy(double daily) {
    return daily * 30;
}

/**
 * @brief Calculates electricity bill savings.
 * @param energy Energy generated in kWh.
 * @param rate Electricity tariff per unit.
 * @return Estimated savings in rupees.
 */
double calculateSavings(double energy, double rate) {
    return energy * rate;
}

/**
 * @brief Main function of the solar calculator.
 * @return 0 on successful execution.
 */
int main() {
    double capacity, sunlight, rate;

    cout << "===== SOLAR ELECTRICITY CALCULATOR =====\n";

    cout << "Enter solar panel capacity (Watts): ";
    if (!(cin >> capacity)) return 1;

    cout << "Enter daily sunlight hours: ";
    if (!(cin >> sunlight)) return 1;

    cout << "Enter electricity rate per unit: ";
    if (!(cin >> rate)) return 1;

    if (capacity < 0 || sunlight < 0 ||
        sunlight > 24 || rate < 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double daily = calculateDailyEnergy(capacity, sunlight);
    double monthly = calculateMonthlyEnergy(daily);
    double savings = calculateSavings(monthly, rate);

    cout << fixed << setprecision(2);

    cout << "\n===== SOLAR ENERGY REPORT =====\n";
    cout << "Daily Generation   : " << daily << " kWh\n";
    cout << "Monthly Generation : " << monthly << " kWh\n";
    cout << "Estimated Savings  : Rs. " << savings << "\n";

    return 0;
}