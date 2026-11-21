/**
 * @file smart_room_controller.cpp
 * @brief Controls electrical loads based on occupancy and room conditions.
 * @date 21/11/2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Determines electrical device operation based on room conditions.
 * @param occupied Room occupancy status.
 * @param dark Lighting condition.
 * @param temperature Room temperature in Celsius.
 */
void controlRoom(bool occupied, bool dark, double temperature) {
    cout << "\n--- SMART ROOM CONTROL REPORT ---\n";

    if (!occupied) {
        cout << "Room Status: Unoccupied\n";
        cout << "Lights: OFF\n";
        cout << "Fan: OFF\n";
        cout << "Cooling: OFF\n";
        cout << "Mode: ENERGY SAVING\n";
    }
    else {
        cout << "Room Status: Occupied\n";

        if (dark)
            cout << "Lights: ON\n";
        else
            cout << "Lights: OFF (Daylight Available)\n";

        if (temperature >= 30)
            cout << "Cooling: ON\n";
        else
            cout << "Cooling: OFF\n";

        if (temperature >= 25)
            cout << "Fan: ON\n";
        else
            cout << "Fan: OFF\n";

        cout << "Mode: COMFORT MODE\n";
    }
}

int main() {
    int occupancy, light;
    double temperature;

    cout << "SMART ROOM POWER CONTROLLER\n";

    cout << "Is room occupied? (1=Yes, 0=No): ";
    cin >> occupancy;

    cout << "Is room dark? (1=Yes, 0=No): ";
    cin >> light;

    cout << "Enter room temperature (C): ";
    cin >> temperature;

    if ((occupancy != 0 && occupancy != 1) ||
        (light != 0 && light != 1) ||
        temperature < -50 || temperature > 100) {
        cout << "Invalid input.\n";
        return 1;
    }

    controlRoom(occupancy, light, temperature);

    return 0;
}