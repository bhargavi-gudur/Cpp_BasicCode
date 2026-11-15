/**
 * @file standby_power.cpp
 * @brief Calculates standby electricity consumption and cost.
 * @date 15/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates daily standby energy consumption.
 * @param power Standby power in watts.
 * @param hours Standby hours per day.
 * @return Daily energy consumption in kWh.
 */
double calculateDailyEnergy(double power, double hours) {
    return (power * hours) / 1000.0;
}

/**
 * @brief Calculates monthly electricity cost.
 * @param dailyEnergy Daily energy consumption in kWh.
 * @param days Number of days.
 * @param rate Electricity price per kWh.
 * @return Monthly electricity cost.
 */
double calculateMonthlyCost(double dailyEnergy,
                            int days, double rate) {
    return dailyEnergy * days * rate;
}

int main() {
    double power, hours, rate;
    int days;

    cout << "STANDBY POWER CALCULATOR\n";

    cout << "Enter standby power (W): ";
    cin >> power;

    cout << "Enter standby hours per day: ";
    cin >> hours;

    cout << "Enter number of days: ";
    cin >> days;

    cout << "Enter electricity rate per kWh (Rs.): ";
    cin >> rate;

    if (power < 0 || hours < 0 || hours > 24 ||
        days <= 0 || rate < 0) {
        cout << "Invalid input.\n";
        return 1;
    }

    double dailyEnergy = calculateDailyEnergy(power, hours);
    double monthlyEnergy = dailyEnergy * days;
    double cost = calculateMonthlyCost(dailyEnergy, days, rate);

    cout << fixed << setprecision(2);

    cout << "\nDaily Energy: " << dailyEnergy << " kWh\n";
    cout << "Total Energy: " << monthlyEnergy << " kWh\n";
    cout << "Total Electricity Cost: Rs. " << cost << '\n';

    return 0;
}