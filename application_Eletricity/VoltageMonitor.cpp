/**
 * @file VoltageMonitor.cpp
 * @brief Monitors electrical voltage and identifies voltage variations.
 * @date 10/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Checks the voltage condition.
 * @param voltage Measured voltage in volts.
 * @param minimum Minimum permitted voltage.
 * @param maximum Maximum permitted voltage.
 * @return Voltage status.
 */
int checkVoltage(double voltage, double minimum, double maximum) {
    if (voltage < minimum)
        return 1;
    else if (voltage > maximum)
        return 2;
    else
        return 3;
}

/**
 * @brief Main function of the voltage monitoring application.
 * @return 0 on successful execution.
 */
int main() {
    double voltage, minimum, maximum;

    cout << "===== VOLTAGE MONITORING SYSTEM =====\n";
    cout << "Date: 10/11/2026\n\n";

    cout << "Enter measured voltage (V): ";
    if (!(cin >> voltage)) return 1;

    cout << "Enter minimum voltage limit (V): ";
    if (!(cin >> minimum)) return 1;

    cout << "Enter maximum voltage limit (V): ";
    if (!(cin >> maximum)) return 1;

    if (voltage < 0 || minimum < 0 || maximum <= minimum) {
        cout << "Invalid input!\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    cout << "\n===== VOLTAGE REPORT =====\n";
    cout << "Measured Voltage : " << voltage << " V\n";
    cout << "Minimum Limit   : " << minimum << " V\n";
    cout << "Maximum Limit   : " << maximum << " V\n";

    int status = checkVoltage(voltage, minimum, maximum);

    if (status == 1)
        cout << "WARNING: LOW VOLTAGE DETECTED!\n";
    else if (status == 2)
        cout << "WARNING: HIGH VOLTAGE DETECTED!\n";
    else
        cout << "STATUS: Voltage is within the permitted range.\n";

    return 0;
}