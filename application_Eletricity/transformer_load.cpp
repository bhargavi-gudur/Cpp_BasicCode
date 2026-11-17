/**
 * @file transformer_load.cpp
 * @brief Calculates transformer capacity and allowable loading.
 * @date 17/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates transformer capacity in kVA.
 * @param voltage Secondary voltage in volts.
 * @param current Rated secondary current in amperes.
 * @return Transformer capacity in kVA.
 */
double calculateCapacity(double voltage, double current) {
    return (voltage * current) / 1000.0;
}

/**
 * @brief Calculates load capacity at a selected loading percentage.
 * @param capacity Transformer capacity in kVA.
 * @param percentage Desired loading percentage.
 * @return Allowable load in kVA.
 */
double calculateLoad(double capacity, double percentage) {
    return capacity * percentage / 100.0;
}

int main() {
    double voltage, current, percentage;

    cout << "TRANSFORMER LOAD CAPACITY CALCULATOR\n";

    cout << "Enter secondary voltage (V): ";
    cin >> voltage;

    cout << "Enter rated secondary current (A): ";
    cin >> current;

    cout << "Enter desired loading percentage: ";
    cin >> percentage;

    if (voltage <= 0 || current <= 0 ||
        percentage <= 0 || percentage > 100) {
        cout << "Invalid input.\n";
        return 1;
    }

    double capacity = calculateCapacity(voltage, current);
    double load = calculateLoad(capacity, percentage);

    cout << fixed << setprecision(2);

    cout << "\nTransformer Capacity: "
         << capacity << " kVA\n";

    cout << "Estimated Load Capacity: "
         << load << " kVA\n";

    return 0;
}