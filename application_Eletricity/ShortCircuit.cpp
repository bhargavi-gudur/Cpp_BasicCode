/**
 * @file ShortCircuit.cpp
 * @brief Identifies possible electrical overcurrent conditions.
 * @date 08/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Checks whether current exceeds the safety limit.
 * @param current Measured current in amperes.
 * @param limit Maximum permitted current in amperes.
 * @return True if current exceeds the limit.
 */
bool detectOvercurrent(double current, double limit) {
    return current > limit;
}

/**
 * @brief Calculates electrical power.
 * @param voltage Supply voltage in volts.
 * @param current Current in amperes.
 * @return Power in watts.
 */
double calculatePower(double voltage, double current) {
    return voltage * current;
}

/**
 * @brief Main function of the application.
 * @return 0 on successful execution.
 */
int main() {
    double voltage, current, limit;

    cout << "===== SHORT CIRCUIT DETECTION SYSTEM =====\n";
    cout << "Date: 08/11/2026\n\n";

    cout << "Enter supply voltage (V): ";
    if (!(cin >> voltage)) return 1;

    cout << "Enter measured current (A): ";
    if (!(cin >> current)) return 1;

    cout << "Enter maximum current limit (A): ";
    if (!(cin >> limit)) return 1;

    if (voltage < 0 || current < 0 || limit <= 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double power = calculatePower(voltage, current);

    cout << fixed << setprecision(2);

    cout << "\n===== ELECTRICAL SAFETY REPORT =====\n";
    cout << "Supply Voltage : " << voltage << " V\n";
    cout << "Current        : " << current << " A\n";
    cout << "Power          : " << power << " W\n";

    if (detectOvercurrent(current, limit)) {
        cout << "WARNING: OVERCURRENT DETECTED!\n";
    } else {
        cout << "STATUS: Current is within the set limit.\n";
    }

    return 0;
}