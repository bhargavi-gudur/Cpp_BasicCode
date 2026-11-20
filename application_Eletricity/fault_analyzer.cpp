/**
 * @file fault_analyzer.cpp
 * @brief Analyzes electrical parameters to identify abnormalities.
 * @date 20/11/2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Analyzes voltage, current, and frequency readings.
 * @param voltage Voltage reading in volts.
 * @param current Current reading in amperes.
 * @param frequency Frequency reading in hertz.
 */
void analyzeFault(double voltage, double current, double frequency) {
    bool faultDetected = false;

    cout << "\n--- FAULT ANALYSIS REPORT ---\n";

    if (voltage < 210) {
        cout << "[WARNING] Undervoltage detected!\n";
        faultDetected = true;
    }
    else if (voltage > 240) {
        cout << "[WARNING] Overvoltage detected!\n";
        faultDetected = true;
    }

    if (current > 10) {
        cout << "[WARNING] Overcurrent condition detected!\n";
        faultDetected = true;
    }

    if (frequency < 49) {
        cout << "[WARNING] Low frequency detected!\n";
        faultDetected = true;
    }
    else if (frequency > 51) {
        cout << "[WARNING] High frequency detected!\n";
        faultDetected = true;
    }

    if (!faultDetected) {
        cout << "Electrical parameters are within defined limits.\n";
        cout << "System Status: NORMAL\n";
    }
    else {
        cout << "System Status: ABNORMAL\n";
        cout << "Inspection is recommended.\n";
    }
}

int main() {
    double voltage, current, frequency;

    cout << "ELECTRICITY FAULT PATTERN ANALYZER\n";

    cout << "Enter voltage (V): ";
    cin >> voltage;

    cout << "Enter current (A): ";
    cin >> current;

    cout << "Enter frequency (Hz): ";
    cin >> frequency;

    if (voltage <= 0 || current < 0 || frequency <= 0) {
        cout << "Invalid electrical readings.\n";
        return 1;
    }

    analyzeFault(voltage, current, frequency);

    return 0;
}