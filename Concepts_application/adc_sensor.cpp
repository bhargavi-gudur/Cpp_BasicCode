/**
 * @file adc_sensor.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   Simulates ADC readings of a temperature sensor.
 * @date 26-08-2025
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    for (int i = 0; i < 5; i++) {
        int adcValue = rand() % 1024; // 10-bit ADC (0–1023)
        float voltage = (adcValue * 5.0) / 1023; // convert to voltage
        cout << "ADC Value: " << adcValue 
             << " -> Voltage: " << voltage << " V" << endl;
    }
    return 0;
}