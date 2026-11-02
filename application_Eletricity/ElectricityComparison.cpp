/**
 * @file ElectricityComparison.cpp
 * @brief Compares electricity consumption between two months.
 * @date 02/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates the electricity bill.
 * @param units Electricity consumed in kWh.
 * @param rate Cost per unit.
 * @return Total bill amount.
 */
double calculateBill(double units, double rate) {
    return units * rate;
}

/**
 * @brief Calculates the difference in electricity consumption.
 * @param month1 First month's consumption.
 * @param month2 Second month's consumption.
 * @return Difference in units.
 */
double calculateDifference(double month1, double month2) {
    return month2 - month1;
}

/**
 * @brief Main function of the application.
 * @return 0 on successful execution.
 */
int main() {
    double month1, month2, rate;

    cout << "===== ELECTRICITY USAGE COMPARISON =====\n";
    cout << "Date: 02/11/2026\n\n";

    cout << "Enter first month units: ";
    if (!(cin >> month1)) return 1;

    cout << "Enter second month units: ";
    if (!(cin >> month2)) return 1;

    cout << "Enter electricity rate: ";
    if (!(cin >> rate)) return 1;

    if (month1 < 0 || month2 < 0 || rate < 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double bill1 = calculateBill(month1, rate);
    double bill2 = calculateBill(month2, rate);
    double difference = calculateDifference(month1, month2);

    cout << fixed << setprecision(2);

    cout << "\n===== COMPARISON REPORT =====\n";
    cout << "First Month Units  : " << month1 << " kWh\n";
    cout << "Second Month Units : " << month2 << " kWh\n";
    cout << "First Month Bill   : Rs. " << bill1 << "\n";
    cout << "Second Month Bill  : Rs. " << bill2 << "\n";

    if (difference > 0) {
        cout << "Usage Increased   : " << difference << " kWh\n";
    }
    else if (difference < 0) {
        cout << "Usage Decreased   : " << -difference << " kWh\n";
    }
    else {
        cout << "Usage Unchanged\n";
    }

    cout << "Bill Difference   : Rs. " << bill2 - bill1 << "\n";

    return 0;
}