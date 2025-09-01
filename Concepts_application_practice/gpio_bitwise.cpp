/**
 * @file gpio_bitwise.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   Simulates enabling/disabling GPIO pins in a 32-bit register 
 *   using bitwise operators.
 * @date 24-08-2025
 */

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int GPIO = 0; // 32-bit GPIO register

    // Enable pin 3
    GPIO |= (1 << 3);

    // Disable pin 3
    GPIO &= ~(1 << 3);

    // Toggle pin 5
    GPIO ^= (1 << 5);

    // Check pin 5 status
    if (GPIO & (1 << 5)) cout << "Pin 5 = HIGH\n";
    else cout << "Pin 5 = LOW\n";

    cout << "GPIO Register: " << bitset<32>(GPIO) << endl;
    return 0;
}