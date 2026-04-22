/**
 * @file solar_light.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a solar light system.
 *   - Charges during sunlight
 *   - Turns ON in darkness
 *   - Handles rain and heavy rain conditions
 *   - Uses battery or electric backup if needed
 * @date 21-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Solar Light System
 */
class SolarLight {
private:
    bool isDay;          // AM / PM
    bool isRain;         // rain condition
    bool heavyRain;      // heavy rain
    bool batteryCharged; // solar battery

public:

    /**
     * @brief Input environment conditions
     */
    void getConditions() {
        cout << "Is it Day time? (1=Yes, 0=No): ";
        cin >> isDay;

        cout << "Is it raining? (1=Yes, 0=No): ";
        cin >> isRain;

        cout << "Is it heavy rain? (1=Yes, 0=No): ";
        cin >> heavyRain;
    }

    /**
     * @brief Solar charging logic
     */
    void chargeBattery() {

        if(isDay && !heavyRain) {
            batteryCharged = true;
            cout << "Solar Charging ON ☀️\n";
        }
        else {
            batteryCharged = false;
            cout << "No Solar Charging ❌\n";
        }
    }

    /**
     * @brief Light control logic
     */
    void controlLight() {

        // Night condition
        if(!isDay) {

            // If battery available
            if(batteryCharged) {
                cout << "Light ON using Solar Battery 💡\n";
            }
            else {
                cout << "Battery Low → Switching to Electric Supply ⚡\n";
                cout << "Light ON (Electric)\n";
            }
        }

        // Day condition
        else {
            cout << "Day Time → Light OFF 🌞\n";
        }

        // Rain special case
        if(isRain && !isDay) {
            cout << "Rainy Night → Light ON 💡\n";
        }

        // Heavy rain case
        if(heavyRain) {
            cout << "Heavy Rain → No Charging\n";
        }
    }
};

/**
 * @brief Main function it is the entry point *were in this program accessing rhe function with *the help  created object.
 */
int main() {

    SolarLight s;

    cout << "===== Solar Light System =====\n";

    s.getConditions();     // take input
    s.chargeBattery();    // charging logic
    s.controlLight();     // light control

    return 0;
}