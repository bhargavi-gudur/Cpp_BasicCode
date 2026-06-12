/**
 * @file adc_sensor.cpp
 * @author Gandla Bhargavi
 * @brief Simulates ADC readings of a temperature sensor.
 * @version 0.2
 * @date 26-08-2025
 * @modified: by Gandla Bhargavi
 * @modified: date 12-06-2026
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

/**
 * @brief  Class to simulate an ADC sensor that reads values from a temperature sensor.
 * 
 */
class ADCSensor {
    public:
        ADCSensor() {
            // Seed the random number generator
           std::srand(static_cast<unsigned int>(time(0)));
        }

        // Simulate reading from the ADC sensor
        int readADC() {
            // Simulate a 10-bit ADC (0-1023)
            return rand() % 1024;
        }
        void adc_sensor_function
        {
            std::srand(std::time(0));

            for (int i = 0; i < 5; i++)
            {
                int adcValue = std::rand() % 1024;            // 10-bit ADC (0–1023)
                float voltage = (adcValue * 5.0) / 1023; // convert to voltage
                std::cout << "ADC Value: " << adcValue
                     << " -> Voltage: " << voltage << " V" << std::endl;
            }
        }

};
/** @brief Main function to demonstrate the ADC sensor functionality.
 * @return 0 on successful execution.
 */
int main() {
    ADCSensor sensor;
    std::cout << "Simulated ADC Readings from Temperature Sensor:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        int adcValue = sensor.readADC();
        std::cout << "Reading " << i + 1 << ": " << adcValue << std::endl;
    }
    std::cout<<"Simulated ADC Readings with Voltage Conversion:" << std::endl;
    sensor.adc_sensor_function();
  
    return 0;
}