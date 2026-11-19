/**
 * @file solar_efficiency.cpp
 * @brief Calculates solar panel conversion efficiency.
 * @date 19/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates solar panel efficiency.
 * @param output Electrical output power in watts.
 * @param irradiance Solar irradiance in W/m^2.
 * @param area Panel area in square metres.
 * @return Efficiency as a percentage.
 */
double calculateEfficiency(double output, double irradiance,
                         double area) {
    return (output / (irradiance * area)) * 100.0;
}

int main() {
    double output, irradiance, area;

    cout << "SOLAR PANEL EFFICIENCY CALCULATOR\n";

    cout << "Enter output power (W): ";
    cin >> output;

    cout << "Enter solar irradiance (W/m^2): ";
    cin >> irradiance;

    cout << "Enter panel area (m^2): ";
    cin >> area;

    if (output < 0 || irradiance <= 0 || area <= 0 ||
        output > irradiance * area) {
        cout << "Invalid input.\n";
        return 1;
    }

    double efficiency =
        calculateEfficiency(output, irradiance, area);

    cout << fixed << setprecision(2);
    cout << "\nSolar Panel Efficiency: "
         << efficiency << "%\n";

    return 0;
}