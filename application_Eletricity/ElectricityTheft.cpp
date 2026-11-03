/**
 * @file ElectricityTheft.cpp
 * @brief Detects abnormal differences in electricity meter readings.
 * @date 03/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates the difference between meter readings.
 * @param mainMeter Main meter units.
 * @param consumerMeter Consumer meter units.
 * @return Difference in electricity units.
 */
double calculateDifference(double mainMeter, double consumerMeter) {
    return mainMeter - consumerMeter;
}

/**
 * @brief Checks for a suspicious difference.
 * @param difference Difference between meter readings.
 * @param limit Allowed difference.
 * @return True if the difference exceeds the limit.
 */
bool detectTheft(double difference, double limit) {
    return difference > limit;
}

/**
 * @brief Main function of the application.
 * @return 0 on successful execution.
 */
int main() {
    double mainMeter, consumerMeter, limit;

    cout << "===== ELECTRICITY THEFT DETECTION =====\n";
    cout << "Date: 03/11/2026\n\n";

    cout << "Enter main meter units: ";
    if (!(cin >> mainMeter)) return 1;

    cout << "Enter consumer meter units: ";
    if (!(cin >> consumerMeter)) return 1;

    cout << "Enter allowed difference: ";
    if (!(cin >> limit)) return 1;

    if (mainMeter < 0 || consumerMeter < 0 || limit < 0) {
        cout << "Invalid input!\n";
        return 1;
    }

    double difference =
        calculateDifference(mainMeter, consumerMeter);

    cout << fixed << setprecision(2);

    cout << "\n===== DETECTION REPORT =====\n";
    cout << "Main Meter Units     : " << mainMeter << "\n";
    cout << "Consumer Meter Units : " << consumerMeter << "\n";
    cout << "Difference           : " << difference << "\n";

    if (difference < 0) {
        cout << "ALERT: Meter readings are inconsistent.\n";
    }
    else if (detectTheft(difference, limit)) {
        cout << "ALERT: Suspicious energy difference detected!\n";
    }
    else {
        cout << "STATUS: No abnormal difference detected.\n";
    }

    return 0;
}