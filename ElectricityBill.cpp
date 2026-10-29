/**
 * @file ElectricityBill.cpp
 * @brief Calculates an electricity bill from units consumed.
 * @date 29/10/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates the electricity bill.
 * @param units Electricity consumed in kWh.
 * @param rate Cost per unit in rupees.
 * @return Total electricity cost.
 */
double calculateBill(double units, double rate) {
    return units * rate;
}

/**
 * @brief Main function of the electricity bill application.
 * @return 0 on successful execution.
 */
int main() {
    double previousReading, currentReading, rate;

    cout << "===== ELECTRICITY BILL CALCULATOR =====\n";
    cout << "Date: 29/10/2026\n\n";

    cout << "Enter previous meter reading: ";
    if (!(cin >> previousReading)) {
        cout << "Invalid input!\n";
        return 1;
    }

    cout << "Enter current meter reading: ";
    if (!(cin >> currentReading)) {
        cout << "Invalid input!\n";
        return 1;
    }

    cout << "Enter rate per unit (Rs.): ";
    if (!(cin >> rate)) {
        cout << "Invalid input!\n";
        return 1;
    }

    if (previousReading < 0 ||
        currentReading < previousReading || rate < 0) {
        cout << "Please enter valid readings and rate.\n";
        return 1;
    }

    double units = currentReading - previousReading;
    double bill = calculateBill(units, rate);

    cout << fixed << setprecision(2);
    cout << "\n===== BILL DETAILS =====\n";
    cout << "Previous Reading : " << previousReading << '\n';
    cout << "Current Reading  : " << currentReading << '\n';
    cout << "Units Consumed   : " << units << " kWh\n";
    cout << "Rate Per Unit    : Rs. " << rate << '\n';
    cout << "Total Bill       : Rs. " << bill << '\n';

    return 0;
}