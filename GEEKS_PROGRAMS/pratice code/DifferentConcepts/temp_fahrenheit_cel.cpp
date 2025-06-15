/**
 * @file temp_fahrenheit_cel.cpp
 * @author Gandla bhargavi
 * @brief This program converts a temperature from Fahrenheit to Celsius.
 * It prompts the user to enter a temperature in Fahrenheit, 
 * performs the conversion, and displays the result.
 * @version 0.1
 * @date 2025-02-15
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/**
 * @brief   function to convert temperature from
 *  fahrenheit to celsius.
 *
 */
class fahrenheit_to_celsius
{
public:
    void temp_fahrenheit_cel()
    {
        float fahrenheit, celsius;
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << celsius << endl;
    }
};
/**
 * @brief  main function calls the temp_fahrenheit_cel function
 * to perform the temperature conversion.
 *
 * @return int
 */

int main()
{
    fahrenheit_to_celsius objfahrenheit_to_celsius;
    objfahrenheit_to_celsius.temp_fahrenheit_cel();
    return 0;
}
