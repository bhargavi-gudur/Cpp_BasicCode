/**
 * @file ElectricityCalculator.cpp
 * @brief Calculates electricity consumption and the estimated bill.
 * @author Student
 * @version 1.0
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates electrical power.
 * @param voltage Supply voltage in volts.
 * @param current Current consumed in amperes.
 * @return Power in watts.
 */
double calculatePower(double voltage, double current) {
    return voltage * current;
}

/**
 * @brief Calculates energy consumption.
 * @param power Power in watts.
 * @param hours Operating time in hours.
 * @return Energy consumed in kilowatt-hours.
 */
double calculateEnergy(double power, double hours) {
    return (power * hours) / 1000.0;
}

/**
 * @brief Calculates the estimated electricity bill.
 * @param energy Energy consumed in kWh.
 * @param rate Electricity tariff per kWh.
 * @return Estimated electricity cost.
 */
double calculateBill(double energy, double rate) {
    return energy * rate;
}

/**
 * @brief Main function of the electricity calculator.
 * @return 0 if the program executes successfully.
 */
int main() {
    double voltage, current, hours, rate;

    cout << "===== ELECTRICITY CALCULATOR =====\n";

    cout << "Enter voltage (V): ";
    cin >> voltage;

    cout << "Enter current (A): ";
    cin >> current;

    cout << "Enter usage time (hours): ";
    cin >> hours;

    cout << "Enter electricity tariff per kWh: ";
    cin >> rate;

    if (!cin || voltage < 0 || current < 0 ||
        hours < 0 || rate < 0) {
        cout << "Invalid input. Enter non-negative numbers.\n";
        return 1;
    }

    double power = calculatePower(voltage, current);
    double energy = calculateEnergy(power, hours);
    double bill = calculateBill(energy, rate);

    cout << fixed << setprecision(2);

    cout << "\n===== ELECTRICITY BILL =====\n";
    cout << "Voltage          : " << voltage << " V\n";
    cout << "Current          : " << current << " A\n";
    cout << "Power            : " << power << " W\n";
    cout << "Usage Time       : " << hours << " hours\n";
    cout << "Energy Consumed  : " << energy << " kWh\n";
    cout << "Tariff           : " << rate << " per kWh\n";
    cout << "Estimated Bill   : " << bill << "\n";

    return 0;
}