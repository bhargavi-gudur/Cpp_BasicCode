/**
 * @file temp_fahrenheit_cel.cpp
 * @author Gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-02-20
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
void temp_fahrenheit_cel(); // function prototype
/**
 * @brief  main function
 *
 * @return int
 */

int main()
{
    temp_fahrenheit_cel();
    return 0;
}
/**
 * @brief   function to convert temperature from
 *  fahrenheit to celsius.
 *
 */
void temp_fahrenheit_cel()
{
    float fahrenheit, celsius;
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    std::cout << "Temperature in Celsius: " << celsius << std::endl;
}