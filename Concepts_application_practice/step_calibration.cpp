/**
 * @file step_calibration.cpp
 * @author Gandla Bhargavi
 * @brief Program to calculate walking distance from steps and stride length.
 * @version 0.1
 * @date 2025-09-16
 */

#include <iostream>
using namespace std;

/**
 * @brief Calculates distance walked.
 * 
 * @param steps Number of steps taken.
 * @param strideLength Length of one step (in meters).
 * @return double Distance walked in meters.
 */
double calculateDistance(int steps, double strideLength) {
    return steps * strideLength;
}

/**
 * @brief Main function: reads steps and stride length, then prints distance.
 */
int main() {
    int steps;
    double strideLength;

    cout << "Enter number of steps: ";
    cin >> steps;

    cout << "Enter stride length in meters: ";
    cin >> strideLength;

    double distance = calculateDistance(steps, strideLength);

    cout << "You walked approximately " << distance << " meters." << endl;
    cout << "Which is about " << distance / 1000 << " kilometers." << endl;

    return 0;
}