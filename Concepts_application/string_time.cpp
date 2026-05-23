/**
 * @file string_time.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program gets the current system date and time
 *   and returns it as a string (useful for logging).
 * @date 30-08-2025
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/**
 * @brief Get current system date and time as string
 * @return string Formatted date and time (DD-MM-YYYY HH:MM:SS)
 */
string getDateTime() {
    time_t now = time(0);           // get current time
    tm *ltm = localtime(&now);      // convert to local time

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", ltm);

    return string(buffer);
}

int main() {
    string currentTime = getDateTime();
    cout << "Current Time: " << currentTime << endl;
    return 0;
}