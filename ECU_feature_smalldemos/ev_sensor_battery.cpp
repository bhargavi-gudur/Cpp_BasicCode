/**
 * @file ev_sensor_battery.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program demonstrates inheritance using
 *   Electric Vehicle (EV) Sensors.
 *   Different sensor classes inherit from
 *   a base Sensor class.
 *   Demonstrates OOP and STL concepts in C++.
 * @date 27-05-2026
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Base class for Sensor
 */
class Sensor {

protected:
    vector<float> readings;

public:

    /**
     * @brief Input sensor readings
     */
    void inputReadings() {

        int n;
        float value;

        cout << "Enter number of readings: ";
        cin >> n;

        for(int i = 0; i < n; i++) {

            cout << "Enter reading: ";
            cin >> value;

            readings.push_back(value);
        }
    }
};

/**
 * @brief Derived class for Battery Temperature Sensor
 */
class BatteryTempSensor : public Sensor {

public:

    /**
     * @brief Check battery temperature
     */
    void checkTemperature() {

        cout << "\n===== Battery Temperature Status =====\n";

        for(float value : readings) {

            if(value > 45) {

                cout << value
                     << " -> High Temperature Warning ⚠️\n";
            }
            else {

                cout << value
                     << " -> Normal Temperature ✅\n";
            }
        }
    }
};

/**
 * @brief Derived class for Voltage Sensor
 */
class VoltageSensor : public Sensor {

public:

    /**
     * @brief Check voltage status
     */
    void checkVoltage() {

        cout << "\n===== Voltage Status =====\n";

        for(float value : readings) {

            if(value < 300) {

                cout << value
                     << " -> Low Voltage Warning ⚠️\n";
            }
            else {

                cout << value
                     << " -> Voltage Normal ✅\n";
            }
        }
    }
};

/**
 * @brief Main function
 */
int main() {

    BatteryTempSensor battery;
    VoltageSensor voltage;

    cout << "===== Battery Temperature Sensor =====\n";

    battery.inputReadings();

    battery.checkTemperature();

    cout << "\n===== Voltage Sensor =====\n";

    voltage.inputReadings();

    voltage.checkVoltage();

    return 0;
}