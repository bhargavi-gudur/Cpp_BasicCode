/**
 * @file time_log.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program logs the current date and time into a file.
 *   Every run appends a new entry with system time.
 * @date 29-08-2025
 */

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

/**
 * @brief Get current system date and time as string
 */
string getDateTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", ltm);

    return string(buffer);
}

int main() {
    string logFile = "logfile.txt";

    // Open file in append mode
    ofstream file(logFile, ios::app);

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Get current datetime
    string dt = getDateTime();

    // Write log
    file << "Log entry at: " << dt << endl;
    cout << "Log saved: " << dt << endl;

    file.close();
    return 0;
}