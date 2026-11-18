/**
 * @file power_factor_correction.cpp
 * @brief Estimates capacitor bank size for power factor correction.
 * @date 18/11/2026
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/**
 * @brief Calculates the required capacitor bank rating.
 * @param power Active power in kW.
 * @param initialPF Initial power factor.
 * @param targetPF Desired power factor.
 * @return Required capacitor rating in kVAR.
 */
double calculateCapacitor(double power,
                           double initialPF,
                           double targetPF) {
    double phi1 = acos(initialPF);
    double phi2 = acos(targetPF);

    return power * (tan(phi1) - tan(phi2));
}

int main() {
    double power, initialPF, targetPF;

    cout << "POWER FACTOR CORRECTION CALCULATOR\n";

    cout << "Enter active power (kW): ";
    cin >> power;

    cout << "Enter initial power factor: ";
    cin >> initialPF;

    cout << "Enter target power factor: ";
    cin >> targetPF;

    if (power <= 0 || initialPF <= 0 ||
        initialPF > 1 || targetPF <= 0 ||
        targetPF > 1 || targetPF < initialPF) {
        cout << "Invalid input. Target PF must be "
             << "greater than or equal to initial PF.\n";
        return 1;
    }

    double capacitor = calculateCapacitor(
        power, initialPF, targetPF
    );

    cout << fixed << setprecision(2);
    cout << "\nRequired Capacitor Bank: "
         << capacitor << " kVAR\n";

    return 0;
}