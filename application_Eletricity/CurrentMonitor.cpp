/**
 * @file CurrentMonitor.cpp
 * @brief Monitors electrical current and detects abnormal conditions.
 * @date 11/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Checks the electrical current condition.
 * @param current Measured current in amperes.
 * @param minimum Minimum current limit.
 * @param maximum Maximum current limit.
 * @return Current status.
 */
int checkCurrent(double current, double minimum, double maximum) {
    if (current < minimum)
        return 1;
    else if (current > maximum)
        return 2;
    else
        return 3;
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
 * @brief Main function of the current monitoring system.
 * @return 0 on successful execution.
 */
int main() {
    double voltage, current, minimum, maximum;

    cout << "===== CURRENT MONITORING SYSTEM =====\n";
    cout << "Date: 11/11/2026\n\n";

    cout << "Enter supply voltage (V): ";
    if (!(cin >> voltage)) return 1;

    cout << "Enter measured current (A): ";
    if (!(cin >> current)) return 1;

    cout << "Enter minimum current limit (A): ";
    if (!(cin >> minimum)) return 1;

    cout << "Enter maximum current limit (A): ";
    if (!(cin >> maximum)) return 1;

    if (voltage < 0 || current < 0 || minimum < 0 ||
        maximum <= minimum) {
        cout << "Invalid input!\n";
        return 1;
    }

    double power = calculatePower(voltage, current);

    cout << fixed << setprecision(2);

    cout << "\n===== CURRENT REPORT =====\n";
    cout << "Supply Voltage : " << voltage << " V\n";
    cout << "Measured Current: " << current << " A\n";
    cout << "Electrical Power: " << power << " W\n";

    int status = checkCurrent(current, minimum, maximum);

    if (status == 1)
        cout << "WARNING: LOW CURRENT DETECTED!\n";
    else if (status == 2)
        cout << "WARNING: OVERCURRENT DETECTED!\n";
    else
        cout << "STATUS: Current is within the permitted range.\n";

    return 0;
}