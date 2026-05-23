/**
 * @file bitwise_register_loop.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program demonstrates how to build a register value (HRX)
 *   using bitwise operators (&, |, <<) with a for loop.
 *   Example: HRX = 0101 (binary) = 5 (decimal)
 * @date 22-08-2025
 */

#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int HRX = 0; // 32-bit register initialized to 0

    // Binary pattern we want (0101 -> bits 0 and 2 set)
    int pattern[4] = {1, 0, 1, 0}; // 4-bit example: LSB -> MSB

    // Loop through each bit
    for (int i = 0; i < 4; i++) {
        if (pattern[i] == 1) {  // if this bit should be enabled
            HRX |= (1 << i);   // set bit i
        }
    }

    cout << "HRX (decimal): " << HRX << endl;
    cout << "HRX (binary 32-bit): " << bitset<32>(HRX) << endl;

    return 0;
}