/**
 * @file battery_backup.cpp
 * @brief Estimates battery backup runtime.
 * @date 12/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates estimated battery backup time.
 * @param voltage Battery voltage in volts.
 * @param capacity Battery capacity in Ah.
 * @param efficiency Usable efficiency in percentage.
 * @param load Connected load in watts.
 * @return Estimated backup time in hours.
 */
double calculateBackup(double voltage, double capacity,
                       double efficiency, double load) {
    double usableEnergy = voltage * capacity * efficiency / 100.0;
    return usableEnergy / load;
}

int main() {
    double voltage, capacity, efficiency, load;

    cout << "BATTERY BACKUP RUNTIME ESTIMATOR\n";

    cout << "Enter battery voltage (V): ";
    cin >> voltage;

    cout << "Enter battery capacity (Ah): ";
    cin >> capacity;

    cout << "Enter battery efficiency (%): ";
    cin >> efficiency;

    cout << "Enter connected load (W): ";
    cin >> load;

    if (voltage <= 0 || capacity <= 0 ||
        efficiency <= 0 || efficiency > 100 || load <= 0) {
        cout << "Invalid input. Please enter positive values "
             << "and efficiency up to 100%.\n";
        return 1;
    }

    double backup = calculateBackup(
        voltage, capacity, efficiency, load
    );

    cout << fixed << setprecision(2);
    cout << "\nEstimated Backup Time: "
         << backup << " hours\n";

    return 0;
}