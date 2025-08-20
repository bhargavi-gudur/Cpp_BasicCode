/**
 * @file datetime_loop.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program repeatedly displays the current date, time, and day of the week
 *   in a loop for demonstration purposes.
 * @date 14-08-2025
 */

#include <iostream>
#include <ctime>
#include <thread> // for sleep
#include <chrono> // for timing
using namespace std;

/**
 * @brief Displays today's date, time, and day of the week.
 */
void showDateTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "Date: " << ltm->tm_mday << "-" << (1 + ltm->tm_mon) << "-" << (1900 + ltm->tm_year)
         << " | Time: " << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec
         << " | Day: " << days[ltm->tm_wday] << endl;
}

int main() {
    for (int i = 0; i < 5; i++) { // loop 5 times
        showDateTime();
        this_thread::sleep_for(chrono::seconds(1)); // wait 1 second
    }
    return 0;
}