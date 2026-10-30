/**
 * @file ElectricitySaving.cpp
 * @brief Calculates daily, monthly and yearly electricity savings.
 * @date 30/10/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates electricity saved per day.
 * @param power Appliance power in watts.
 * @param hours Hours of usage reduced per day.
 * @return Energy saved in kWh.
 */
double calculateSaving(double power, double hours) {
    return (power * hours) / 1000.0;
}

/**
 * @brief Calculates money saved.
 * @param units Energy saved in kWh.
 * @param rate Cost per unit.
 * @return Money saved in rupees.
 */
double calculateMoney(double units, double rate) {
    return units * rate;
}

/**
 * @brief Main function.
 * @return 0 on successful execution.
 */
int main() {
    double power, hours, rate;

    cout << "===== ELECTRICITY SAVING CALCULATOR =====\n";

    cout << "Enter appliance power (Watts): ";
    if (!(cin >> power)) return 1;

    cout << "Enter reduced usage hours per day: ";
    if (!(cin >> hours)) return 1;

    cout << "Enter electricity rate per unit: ";
    if (!(cin >> rate)) return 1;

    if (power < 0 || hours < 0 || hours > 24 || rate < 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double daily = calculateSaving(power, hours);
    double monthly = daily * 30;
    double yearly = daily * 365;

    double monthlyMoney = calculateMoney(monthly, rate);
    double yearlyMoney = calculateMoney(yearly, rate);

    cout << fixed << setprecision(2);

    cout << "\n===== SAVING REPORT =====\n";
    cout << "Daily Saving   : " << daily << " kWh\n";
    cout << "Monthly Saving : " << monthly << " kWh\n";
    cout << "Yearly Saving  : " << yearly << " kWh\n";
    cout << "Monthly Money  : Rs. " << monthlyMoney << "\n";
    cout << "Yearly Money   : Rs. " << yearlyMoney << "\n";

    return 0;
}