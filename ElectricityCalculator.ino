/**
 * @file ElectricityCalculator.ino
 * @brief Electricity consumption and bill calculator using Arduino Uno.
 *
 * Measures voltage and current, calculates estimated power,
 * accumulates energy consumption in kWh, and estimates electricity cost.
 *
 * @author Student
 * @version 1.0
 */

#include <Arduino.h>
#include <math.h>

/** @brief Analog pin for voltage sensor. */
const int VOLTAGE_PIN = A0;

/** @brief Analog pin for current sensor. */
const int CURRENT_PIN = A1;

/** @brief ADC reference voltage in volts. */
const float ADC_REFERENCE = 5.0;

/** @brief Maximum ADC count for Arduino Uno. */
const float ADC_MAX = 1023.0;

/** @brief Voltage sensor calibration factor (example only). */
const float VOLTAGE_FACTOR = 100.0;

/** @brief Current sensor sensitivity in volts per ampere. */
const float CURRENT_SENSITIVITY = 0.185;

/** @brief Current sensor output at zero current. */
const float CURRENT_OFFSET = 2.5;

/** @brief Electricity tariff in rupees per kWh. */
const float TARIFF = 8.0;

/** @brief Number of samples used for each measurement. */
const int SAMPLES = 500;

/** @brief Total energy consumed in kWh. */
float energy = 0.0;

/** @brief Time of previous energy calculation. */
unsigned long previousTime = 0;

/**
 * @brief Convert ADC reading to voltage.
 * @param reading Raw analog input value.
 * @return Voltage in volts.
 */
float adcToVoltage(int reading) {
    return reading * ADC_REFERENCE / ADC_MAX;
}

/**
 * @brief Measure the RMS voltage from the sensor.
 * @return Estimated RMS voltage in volts.
 */
float readVoltage() {
    float sum = 0.0;
    float sumSquares = 0.0;

    for (int i = 0; i < SAMPLES; i++) {
        float v = adcToVoltage(analogRead(VOLTAGE_PIN));
        sum += v;
        sumSquares += v * v;
    }

    float mean = sum / SAMPLES;
    float variance = (sumSquares / SAMPLES) - (mean * mean);

    if (variance < 0.0) {
        variance = 0.0;
    }

    return sqrt(variance) * VOLTAGE_FACTOR;
}

/**
 * @brief Measure the RMS current from the sensor.
 * @return Estimated RMS current in amperes.
 */
float readCurrent() {
    float sum = 0.0;
    float sumSquares = 0.0;

    for (int i = 0; i < SAMPLES; i++) {
        float v = adcToVoltage(analogRead(CURRENT_PIN));
        sum += v;
        sumSquares += v * v;
    }

    float mean = sum / SAMPLES;
    float variance = (sumSquares / SAMPLES) - (mean * mean);

    if (variance < 0.0) {
        variance = 0.0;
    }

    float sensorRms = sqrt(variance);

    return sensorRms / CURRENT_SENSITIVITY;
}

/**
 * @brief Initialize the Arduino and serial communication.
 */
void setup() {
    Serial.begin(9600);

    pinMode(VOLTAGE_PIN, INPUT);
    pinMode(CURRENT_PIN, INPUT);

    previousTime = millis();

    Serial.println("ELECTRICITY CALCULATOR");
    Serial.println("----------------------");
}

/**
 * @brief Read measurements and calculate electricity consumption.
 */
void loop() {
    unsigned long currentTime = millis();

    float voltage = readVoltage();
    float current = readCurrent();

    // Approximation for a resistive AC load with power factor near 1.
    float power = voltage * current;

    float elapsedHours =
        (currentTime - previousTime) / 3600000.0;

    previousTime = currentTime;

    // Calculate energy consumption in kWh.
    if (power > 0.0) {
        energy += (power * elapsedHours) / 1000.0;
    }

    // Estimate electricity bill.
    float cost = energy * TARIFF;

    Serial.print("Voltage: ");
    Serial.print(voltage, 2);
    Serial.println(" V");

    Serial.print("Current: ");
    Serial.print(current, 3);
    Serial.println(" A");

    Serial.print("Power: ");
    Serial.print(power, 2);
    Serial.println(" W");

    Serial.print("Energy: ");
    Serial.print(energy, 6);
    Serial.println(" kWh");

    Serial.print("Estimated Bill: Rs. ");
    Serial.println(cost, 2);

    Serial.println("----------------------");

    delay(1000);
}