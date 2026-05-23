/**
 * @file datetime_today.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program displays the current date, time, and day of the week.
 *   It uses the C++ <ctime> library to fetch system time and formats it.
 * @date 13-08-2025
 */

#include <iostream>
#include <ctime>
using namespace std;

/**
 * @brief Displays today's date, time, and day of the week.
 */
void showDateTime() {
    time_t now = time(0); // get current time in seconds
    tm *ltm = localtime(&now); // convert to local time structure

    // Array for day names
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "Today's Date: " 
         << (ltm->tm_mday) << "-" 
         << (1 + ltm->tm_mon) << "-" 
         << (1900 + ltm->tm_year) << endl;

    cout << "Current Time: " 
         << (ltm->tm_hour) << ":" 
         << (ltm->tm_min) << ":" 
         << (ltm->tm_sec) << endl;

    cout << "Day of the Week: " << days[ltm->tm_wday] << endl;
}

int main() {
    showDateTime();
    return 0;
}