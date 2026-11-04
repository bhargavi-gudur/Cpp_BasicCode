/**
 * @file LoadManagement.cpp
 * @brief Calculates and monitors household electrical load.
 * @date 04/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates total electrical load.
 * @param power Array containing appliance power ratings.
 * @param n Number of appliances.
 * @return Total load in watts.
 */
double calculateLoad(double power[], int n) {
    double total = 0;

    for (int i = 0; i < n; i++) {
        total += power[i];
    }

    return total;
}

/**
 * @brief Checks whether the electrical load exceeds the limit.
 * @param load Total electrical load in watts.
 * @param limit Maximum permitted load in watts.
 * @return True if the load exceeds the limit.
 */
bool checkLoad(double load, double limit) {
    return load > limit;
}

/**
 * @brief Main function of the application.
 * @return 0 on successful execution.
 */
int main() {
    int n;
    double limit;

    cout << "===== ELECTRICITY LOAD MANAGEMENT =====\n";
    cout << "Date: 04/11/2026\n\n";

    cout << "Enter number of appliances: ";
    if (!(cin >> n) || n <= 0 || n > 100) {
        cout << "Invalid number of appliances!\n";
        return 1;
    }
s u 
    double power[100];

    for (int i = 0; i < n; i++) {
        cout << "Enter power of appliance "
             << i + 1 << " (Watts): ";

        if (!(cin >> power[i]) || power[i] < 0) {
            cout << "Invalid power rating!\n";
            return 1;
        }
    }

    cout << "Enter maximum load limit (Watts): ";
    if (!(cin >> limit) || limit < 0) {
        cout << "Invalid load limit!\n";
        return 1;
    }

    double totalLoad = calculateLoad(power, n);

    cout << fixed << setprecision(2);

    cout << "\n===== LOAD REPORT =====\n";
    cout << "Total Electrical Load: "
         << totalLoad << " W\n";

    cout << "Maximum Load Limit   : "
         << limit << " W\n";

    if (checkLoad(totalLoad, limit)) {
        cout << "WARNING: Electrical overload detected!\n";
    } else {
        cout << "STATUS: Electrical load is within the limit.\n";
    }

    return 0;
}