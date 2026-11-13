/**
 * @file generator_fuel.cpp
 * @brief Calculates generator fuel consumption and cost.
 * @date 13/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates total fuel consumption.
 * @param rate Fuel consumption in litres per hour.
 * @param hours Generator running time in hours.
 * @return Total fuel consumed in litres.
 */
double calculateFuel(double rate, double hours) {
    return rate * hours;
}

/**
 * @brief Calculates total fuel cost.
 * @param fuel Total fuel consumed in litres.
 * @param price Fuel price per litre.
 * @return Total fuel cost.
 */
double calculateCost(double fuel, double price) {
    return fuel * price;
}

int main() {
    double rate, hours, price;

    cout << "GENERATOR FUEL COST CALCULATOR\n";

    cout << "Enter fuel consumption (litres/hour): ";
    cin >> rate;

    cout << "Enter running time (hours): ";
    cin >> hours;

    cout << "Enter fuel price per litre: ";
    cin >> price;

    if (rate <= 0 || hours <= 0 || price <= 0) {
        cout << "Invalid input. Values must be positive.\n";
        return 1;
    }

    double fuel = calculateFuel(rate, hours);
    double cost = calculateCost(fuel, price);

    cout << fixed << setprecision(2);
    cout << "\nTotal Fuel Consumed: " << fuel << " litres\n";
    cout << "Total Fuel Cost: Rs. " << cost << '\n';

    return 0;
}