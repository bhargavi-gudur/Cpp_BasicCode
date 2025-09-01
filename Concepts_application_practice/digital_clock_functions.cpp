/**
 * @file digital_clock_functions.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program displays a digital clock (HH:MM:SS) that updates every second.
 *   It is organized into functions for clarity and reusability.
 *   If left running, it can show time continuously (e.g., 31 days or more).
 * @date 31-08-2025
 */

#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

/**
 * @brief Get current time as a formatted string HH:MM:SS
 * @return string The current time
 */
string getCurrentTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char buffer[9];
    snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d",
             ltm->tm_hour, ltm->tm_min, ltm->tm_sec);

    return string(buffer);
}

/**
 * @brief Display the digital clock continuously
 * 
 * Runs in a loop, updating every second.
 * Can be left running for days (even 31 days continuously).
 */
void runDigitalClock() {
    while (true) {
        cout << "\rDigital Clock -> " << getCurrentTime() << flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
}

/**
 * @brief Main function - calls the digital clock
 */
int main() {
    runDigitalClock();  // function call
    return 0;
}