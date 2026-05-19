/**
 * @file water_level_vector.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program stores water levels using vector.
 *   User enters water levels and program
 *   finds maximum water level using range-based for loop.
 * @date 19-05-2026
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Class for Water Level System
 */
class WaterLevel {

private:
    vector<int> waterLevels;

public:

    /**
     * @brief Input water levels from user
     */
    void initLevels() {

        int n, value;

        cout << "Enter number of water levels: ";
        cin >> n;

        for(int i = 0; i < n; i++) {

            cout << "Enter water level: ";
            cin >> value;

            waterLevels.push_back(value);
        }
    }

    /**
     * @brief Display water levels
     */
    void showLevels() {

        cout << "\nWater Levels:\n";

        // Range-based for loop
        for(int level : waterLevels) {

            cout << level << " Liters\n";
        }
    }

    /**
     * @brief Find maximum water level
     */
    void findMaximum() {

        int maxLevel = waterLevels[0];

        // Range-based for loop
        for(int level : waterLevels) {

            if(level > maxLevel) {

                maxLevel = level;
            }
        }

        cout << "\nMaximum Water Level: "
             << maxLevel
             << " Liters\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    WaterLevel w;

    cout << "===== Water Level Monitoring System =====\n";

    w.initLevels();

    w.showLevels();

    w.findMaximum();

    return 0;
}