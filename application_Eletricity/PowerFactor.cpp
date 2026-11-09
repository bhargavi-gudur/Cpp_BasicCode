/**
 * @file PowerFactor.cpp
 * @brief Calculates electrical power factor.
 * @date 09/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates apparent power.
 * @param voltage Supply voltage in volts.
 * @param current Current in amperes.
 * @return Apparent power in VA.
 */
double calculateApparentPower(double voltage, double current) {
    return voltage * current;
}

/**
 * @brief Calculates power factor.
 * @param realPower Real power in watts.
 * @param apparentPower Apparent power in VA.
 * @return Power factor.
 */
double calculatePowerFactor(double realPower, double apparentPower) {
    return realPower / apparentPower;
}

/**
 * @brief Main function of the application.
 * @return 0 on successful execution.
 */
int main() {
    double voltage, current, realPower;

    cout << "===== POWER FACTOR CALCULATOR =====\n";
    cout << "Date: 09/11/2026\n\n";

    cout << "Enter voltage (V): ";
    if (!(cin >> voltage)) return 1;

    cout << "Enter current (A): ";
    if (!(cin >> current)) return 1;

    cout << "Enter real power (W): ";
    if (!(cin >> realPower)) return 1;

    if (voltage <= 0 || current <= 0 || realPower < 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double apparentPower =
        calculateApparentPower(voltage, current);

    if (realPower > apparentPower) {
        cout << "Invalid power values!\n";
        return 1;
    }

    double pf = calculatePowerFactor(realPower, apparentPower);

    cout << fixed << setprecision(2);

    cout << "\n===== POWER FACTOR REPORT =====\n";
    cout << "Apparent Power : " << apparentPower << " VA\n";
    cout << "Real Power     : " << realPower << " W\n";
    cout << "Power Factor   : " << pf << "\n";

    if (pf >= 0.95)
        cout << "Status: Good Power Factor\n";
    else
        cout << "Status: Power Factor Needs Improvement\n";

    return 0;
}