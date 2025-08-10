/**
 * @file smartwatch_tracker.cpp
 * @brief Smartwatch Data Logger - tracks water    * intake, auto-generates step count, and records * height.
* @Author Gandla Bhargavi
 * @date 10-08-2025
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void logSmartwatchData() {
    float waterLiters;
    float heightCm;

    // Get water and height from user
    cout << "Enter water intake (in liters): ";
    cin >> waterLiters;

    cout << "Enter your height (in cm): ";
    cin >> heightCm;

    // Generate random step count
    srand(time(0));
    int steps = rand() % 12001 + 3000; // 3000 to 15000

    // Display report
    cout << "\n--- Daily Smartwatch Report ---\n";
    cout << "Water Intake: " << waterLiters << " L\n";
    cout << "Footsteps:    " << steps << "\n";
    cout << "Height:       " << heightCm << " cm\n";
}

int main() {
    logSmartwatchData();
    return 0;
}