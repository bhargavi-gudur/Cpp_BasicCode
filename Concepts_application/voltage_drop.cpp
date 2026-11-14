/**
 * @file voltage_drop.cpp
 * @brief Calculates voltage drop in a two-wire DC circuit.
 * @date 14/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

const double COPPER_RESISTIVITY = 0.0175;

/**
 * @brief Calculates voltage drop across a copper wire pair.
 * @param length One-way wire length in metres.
 * @param current Current in amperes.
 * @param area Wire cross-sectional area in mm^2.
 * @return Voltage drop in volts.
 */
double calculateVoltageDrop(double length, double current,
                            double area) {
    return (2 * length * current * COPPER_RESISTIVITY) / area;
}

int main() {
    double supply, length, current, area;

    cout << "WIRE VOLTAGE DROP CALCULATOR\n";

    cout << "Enter supply voltage (V): ";
    cin >> supply;

    cout << "Enter one-way wire length (m): ";
    cin >> length;

    cout << "Enter current (A): ";
    cin >> current;

    cout << "Enter wire area (mm^2): ";
    cin >> area;

    if (supply <= 0 || length <= 0 ||
        current < 0 || area <= 0) {
        cout << "Invalid input.\n";
        return 1;
    }

    double drop = calculateVoltageDrop(length, current, area);
    double loadVoltage = supply - drop;
    double percentage = (drop / supply) * 100;

    cout << fixed << setprecision(2);
    cout << "\nVoltage Drop: " << drop << " V\n";
    cout << "Load Voltage: " << loadVoltage << " V\n";
    cout << "Voltage Drop Percentage: " << percentage << "%\n";

    return 0;
}