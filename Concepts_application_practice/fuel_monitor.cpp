/**
 * @file fuel_monitor.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a fuel monitoring system for petrol/diesel vehicles.
 *   - Checks fuel before engine start (app)
 *   - Alerts low fuel while driving
 *   - Supports refueling
 * @date 23-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Car Fuel System
 */
class Car {
private:
    string engineType;   // Petrol / Diesel
    float fuelLevel;     // current fuel in liters
    bool engineOn;

public:

    // Initialize car
    void init() {
        cout << "Enter Engine Type (Petrol/Diesel): ";
        cin >> engineType;

        cout << "Enter current fuel (liters): ";
        cin >> fuelLevel;

        engineOn = false;
    }

    /**
     * @brief Check fuel in mobile app (before starting)
     */
    void appCheck() {
        cout << "\n[Mobile App Check]\n";
        cout << "Fuel Level: " << fuelLevel << " L\n";

        if(fuelLevel < 5) {
            cout << "⚠️ Low Fuel! Please refuel before starting.\n";
        } else {
            cout << "Fuel sufficient to start the engine.\n";
        }
    }

    /**
     * @brief Start engine
     */
    void startEngine() {
        if(fuelLevel <= 0) {
            cout << "❌ No fuel! Cannot start engine.\n";
            return;
        }

        engineOn = true;
        cout << "Engine Started 🚗\n";
    }

    /**
     * @brief Driving simulation
     */
    void drive() {

        if(!engineOn) {
            cout << "Start engine first!\n";
            return;
        }

        fuelLevel -= 2; // fuel consumption

        cout << "Driving... Fuel left: " << fuelLevel << " L\n";

        if(fuelLevel <= 3 && fuelLevel > 0) {
            cout << "⚠️ Low Fuel Alert! Refuel soon.\n";
        }

        if(fuelLevel <= 0) {
            cout << "❌ Fuel finished! Engine stopped.\n";
            engineOn = false;
            fuelLevel = 0;
        }
    }

    /**
     * @brief Refuel
     */
    void refuel() {
        float amount;
        cout << "Enter fuel to add: ";
        cin >> amount;

        fuelLevel += amount;
        cout << "Refueled successfully. Current fuel: " << fuelLevel << " L\n";
    }

    /**
     * @brief Menu
     */
    void menu() {
        int choice;

        do {
            cout << "\n===== Car Fuel System =====\n";
            cout << "1. App Fuel Check\n";
            cout << "2. Start Engine\n";
            cout << "3. Drive\n";
            cout << "4. Refuel\n";
            cout << "5. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {
                case 1:
                    appCheck();
                    break;
                case 2:
                    startEngine();
                    break;
                case 3:
                    drive();
                    break;
                case 4:
                    refuel();
                    break;
                case 5:
                    cout << "Thank you!\n";
                    break;
                default:
                    cout << "Invalid choice!\n";
            }

        } while(choice != 5);
    }
};

/**
 * @brief Main function
 */
int main() {

    Car c;

    cout << "===== Fuel Monitoring System =====\n";

    c.init();
    c.menu();

    return 0;
}