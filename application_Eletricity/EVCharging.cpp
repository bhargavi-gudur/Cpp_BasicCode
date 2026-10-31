/**
 * @file EVCharging.cpp
 * @brief Calculates electric vehicle charging cost and time.
 * @date 01/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculate required charging energy.
 * @param capacity Battery capacity in kWh.
 * @param percentage Charging percentage required.
 * @return Energy required in kWh.
 */
double calculateEnergy(double capacity, double percentage) {
    return capacity * percentage / 100.0;
}

/**
 * @brief Calculate charging cost.
 * @param energy Energy required in kWh.
 * @param rate Electricity rate per unit.
 * @return Total charging cost.
 */
double calculateCost(double energy, double rate) {
    return energy * rate;
}

/**
 * @brief Calculate ideal charging time.
 * @param energy Energy required in kWh.
 * @param power Charger power in kW.
 * @return Charging time in hours.
 */
double calculateTime(double energy, double power) {
    return energy / power;
}

/**
 * @brief Main function of the EV charging calculator.
 * @return 0 on successful execution.
 */
int main() {
    double capacity, percentage, rate, chargerPower;

    cout << "===== EV CHARGING CALCULATOR =====\n";
    cout << "Date: 01/11/2026\n\n";

    cout << "Enter battery capacity (kWh): ";
    if (!(cin >> capacity)) return 1;

    cout << "Enter charging percentage (%): ";
    if (!(cin >> percentage)) return 1;

    cout << "Enter electricity rate (Rs./kWh): ";
    if (!(cin >> rate)) return 1;

    cout << "Enter charger power (kW): ";
    if (!(cin >> chargerPower)) return 1;

    if (capacity <= 0 || percentage < 0 ||
        percentage > 100 || rate < 0 || chargerPower <= 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double energy = calculateEnergy(capacity, percentage);
    double cost = calculateCost(energy, rate);
    double time = calculateTime(energy, chargerPower);

    cout << fixed << setprecision(2);

    cout << "\n===== CHARGING REPORT =====\n";
    cout << "Energy Required : " << energy << " kWh\n";
    cout << "Charging Cost  : Rs. " << cost << "\n";
    cout << "Charging Time  : " << time << " hours\n";

    return 0;
}