/**
 * @file led_blink.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   Simulates LED blinking using delay loops.
 * @date 25-08-2025
 */

#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        cout << "LED ON\n";
        this_thread::sleep_for(chrono::milliseconds(500)); // delay
        cout << "LED OFF\n";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    return 0;
}