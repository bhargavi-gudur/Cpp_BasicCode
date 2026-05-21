/**
 * @file brake_speed_limit.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates vehicle speed monitoring.
 *   It checks speed limit and applies brake warning
 *   when speed exceeds the allowed limit.
 *   Demonstrates OOP concepts in C++.
 * @date 21-05-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Vehicle System
 */
class Vehicle {

private:
    int speed;
    int speedLimit;

public:

    /**
     * @brief Initialize speed values
     */
    void init() {

        cout << "Enter current vehicle speed: ";
        cin >> speed;

        cout << "Enter speed limit: ";
        cin >> speedLimit;
    }

    /**
     * @brief Check vehicle speed
     */
    void checkSpeed() {

        cout << "\nCurrent Speed: "
             << speed << " km/h\n";

        cout << "Speed Limit: "
             << speedLimit << " km/h\n";

        if(speed > speedLimit) {

            cout << "⚠️ Speed Limit Exceeded!\n";

            applyBrake();
        }
        else {

            cout << "Vehicle speed is under control.\n";
        }
    }

    /**
     * @brief Apply brake system
     */
    void applyBrake() {

        cout << "Brake Applied 🚗\n";

        speed = speedLimit;

        cout << "Vehicle speed reduced to "
             << speed << " km/h\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    Vehicle v;

    cout << "===== Brake & Speed Monitoring System =====\n";

    v.init();

    v.checkSpeed();

    return 0;
}