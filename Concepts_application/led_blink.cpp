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

// For convenience

using std::cin;
using std::cout;
using std::endl;
using std::chrono::milliseconds;


/**
 * @brief  Function to simulate LED blinking.
 * 
 */
void blink_led() {
for (int i = 0; i < 5; i++) {
  cout << "LED ON\n";
  std::this_thread::sleep_for(std::chrono::milliseconds(500)); // delay
  cout << "LED OFF\n";
  std::this_thread::sleep_for(std::chrono::milliseconds(500));
}


/**
 * @brief  Main function to execute the LED blink simulation.
 * 
 * 
 * @return int 
 */

int main() {
  blink_led();
    return 0;
}