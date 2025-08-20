/**
 * @file temperature_sensor.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program simulates temperature readings from a sensor.
 *   Features:
 *     - Generates or accepts temperature readings
 *     - Classifies temperature as Low, Normal, or High
 *     - Allows multiple readings using a menu-based system
 *   This is a beginner-friendly C++ project for practicing
 *   functions, conditionals, and loops.
 * @date 12-08-2025
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/**
 * @brief Classifies the temperature reading into Low, Normal, or High.
 * 
 * @param temp Temperature value in Celsius
 * @return string Classification result
 */
string classifyTemperature(float temp) {
    if (temp < 20) return "Low";
    else if (temp <= 30) return "Normal";
    else return "High";
}

/**
 * @brief Simulates reading a temperature from a sensor.
 * 
 * Generates a random temperature between 15°C and 40°C.
 * @return float Temperature value
 */
float getSensorTemperature() {
    return 15 + (rand() % 260) / 10.0; // random float between 15.0 and 40.0
}

/**
 * @brief Logs one temperature reading and classification.
 * 
 * Steps:
 *  1. Generate or read a temperature
 *  2. Classify the reading
 *  3. Display result to user
 */
void logTemperature() {
    float temp = getSensorTemperature();
    cout << "Temperature: " << temp << " °C" << endl;
    cout << "Status: " << classifyTemperature(temp) << endl;
}

/**
 * @brief Main function - controls menu for temperature sensor logger.
 */
int main() {
    srand(time(0)); // Seed random number generator
    int choice;
    do {
        cout << "\n--- Temperature Sensor Menu ---\n";
        cout << "1. Read Temperature\n";
        cout << "2. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: logTemperature(); break;
            case 2: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 2);

    return 0;
}