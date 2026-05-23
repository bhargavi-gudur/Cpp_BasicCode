/**
 * @file airbag_system.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an Airbag Control System.
 *   It checks vehicle speed and collision impact
 *   to decide whether airbags should deploy.
 *   Demonstrates OOP concepts in C++.
 * @date 23-05-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Airbag System
 */
class AirbagSystem {

private:
    int speed;
    int impactForce;
    bool seatBelt;

public:

    /**
     * @brief Input vehicle details
     */
    void inputData() {

        cout << "Enter Vehicle Speed (km/h): ";
        cin >> speed;

        cout << "Enter Collision Impact Force: ";
        cin >> impactForce;

        cout << "Seat Belt Worn? (1 = Yes, 0 = No): ";
        cin >> seatBelt;
    }

    /**
     * @brief Check airbag deployment
     */
    void checkAirbag() {

        cout << "\n===== Airbag Status =====\n";

        if(speed > 40 && impactForce > 50) {

            cout << "Collision Detected!\n";

            if(seatBelt) {

                cout << "Airbag Deployed Successfully 🛑\n";
            }
            else {

                cout << "Warning! Seat Belt Not Worn\n";
                cout << "Airbag Deployed with High Risk ⚠️\n";
            }
        }
        else {

            cout << "No Airbag Deployment Needed\n";
        }
    }
};

/**
 * @brief Main function
 */
int main() {

    AirbagSystem a;

    cout << "===== Vehicle Airbag Control System =====\n";

    a.inputData();

    a.checkAirbag();

    return 0;
}