/**
 * @file automatic_climate_control.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an Automatic Climate
 *   Control System.
 *   It monitors cabin temperature readings and
 *   controls the AC or heater automatically.
 *   Demonstrates Inheritance, Polymorphism,
 *   and STL vector in C++.
 * @date 01-07-2026
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Base Sensor Class
 */
class Sensor {

protected:
    vector<float> cabinTemperatures;

public:

    /**
     * @brief Input cabin temperature readings
     */
    void inputReadings() {

        int n;
        float temperature;

        cout << "Enter number of cabin temperature readings: ";
        cin >> n;

        for(int i = 0; i < n; i++) {

            cout << "Enter cabin temperature (°C): ";
            cin >> temperature;

            cabinTemperatures.push_back(temperature);
        }
    }

    /**
     * @brief Pure virtual function
     */
    virtual void checkStatus() = 0;

    virtual ~Sensor() {}
};

/**
 * @brief Automatic Climate Control System
 */
class ClimateControl : public Sensor {

private:
    float desiredTemperature = 24.0;

public:

    /**
     * @brief Check cabin temperature and