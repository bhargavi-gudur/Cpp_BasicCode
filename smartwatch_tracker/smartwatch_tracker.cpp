/**
 * @file smartwatch_tracker.cpp
 * @author Gandla Bhargavi
 * @brief  A simple smartwatch tracker that logs daily water intake, footsteps,
 *  and height, and generates a report.
 *
 * @version 0.2
 * @date 2026-04-30
 * @modified by Gandla Bhargavi: created a class SmartwatchTracker to log water intake,
 * footsteps, and height, and generate a report.
 *
 * @copyright Copyright (c) 2026
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

// Using declarations for standard library components to avoid std:: prefix
using std::cin;
using std::cout;
using std::endl;
using std::rand;
using std::srand;

/** @brief A class to track smartwatch data including water intake, footsteps, and height. */
class SmartwatchTracker
{
    float waterLiters;
    float heightCm;

public:
/**
 * @brief Construct a new Smartwatch Tracker object
 * 
 * @param water 
 * @param height 
 */
    SmartwatchTracker(int water = 0, int height = 0) : waterLiters(water), heightCm(height)
    {
        // Get water and height from user
        cout << "Enter water intake (in liters): ";
        cin >> waterLiters;

        cout << "Enter your height (in cm): ";
        cin >> heightCm;
    }
    /**
     * @brief Log smartwatch data including water intake, footsteps, and height.
     */
    void logSmartwatchData()
    {
        // Generate random step count
        srand(time(0));
        int steps = rand() % 12001 + 3000; // 3000 to 15000

        // Display report
        cout << "\n--- Daily Smartwatch Report ---\n";
        cout << "Water Intake: " << waterLiters << " L\n";
        cout << "Footsteps:    " << steps << "\n";
        cout << "Height:       " << heightCm << " cm\n";
    }
    /**
     * @brief Destroy the SmartwatchTracker object.
     */
    ~SmartwatchTracker() {}
};

/**
 * @brief Main function to create a SmartwatchTracker instance and log data.
 * @return int
 */
int main() {
    SmartwatchTracker tracker(0, 0);
    tracker.logSmartwatchData();
    return 0;
}