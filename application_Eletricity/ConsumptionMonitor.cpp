/**
 * @file ConsumptionMonitor.cpp
 * @brief Monitors electricity consumption and calculates bills.
 * @date 05/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates daily electricity consumption.
 * @param power Appliance power in watts.
 * @param hours Daily usage in hours.
 * @return Energy consumed in kWh.
 */
double calculateDailyEnergy(double power, double hours) {
    return (power * hours) / 1000.0;
}

/**
 * @brief Calculates monthly electricity consumption.
 * @param dailyEnergy Daily energy consumption in kWh.
 * @param days Number of days.
 * @return Monthly energy consumption in kWh.
 */
double calculateMonthlyEnergy(double dailyEnergy, int days) {
    return dailyEnergy * days;
}

/**
 * @brief Calculates electricity bill.
 * @param units Total energy consumption in kWh.
 * @param rate Electricity tariff per unit.
 * @return Total electricity cost.
 */
double calculateBill(double units, double rate) {
    return units * rate;
}

/**
 * @brief Main function of the monitoring application.
 * @return 0 on successful execution.
 */
int main() {
    double power, hours, rate;
    int days;

    cout << "===== ELECTRICITY MONITORING SYSTEM =====\n";
    cout << "Date: 05/11/2026\n\n";

    cout << "Enter appliance power (Watts): ";
    if (!(cin >> power)) return 1;

    cout << "Enter daily usage (Hours): ";
    if (!(cin >> hours)) return 1;

    cout << "Enter number of days: ";
    if (!(cin >> days)) return 1;

    cout << "Enter electricity rate (Rs.): ";
    if (!(cin >> rate)) return 1;

    if (power < 0 || hours < 0 || hours > 24 ||
        days <= 0 || rate < 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double daily = calculateDailyEnergy(power, hours);
    double monthly = calculateMonthlyEnergy(daily, days);
    double bill = calculateBill(monthly, rate);

    cout << fixed << setprecision(2);

    cout << "\n===== ENERGY REPORT =====\n";
    cout << "Daily Consumption   : " << daily << " kWh\n";
    cout << "Total Consumption   : " << monthly << " kWh\n";
    cout << "Estimated Electricity Bill: Rs. " << bill << "\n";

    return 0;
}