/**
 * @file uart_sim.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   Simulates UART TX and RX operations.
 * @date 27-08-2025
 */

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char> UART_Buffer;

    // TX (Transmit)
    string msg = "Hello UART";
    for (char c : msg) UART_Buffer.push(c);

    // RX (Receive)
    cout << "UART Received: ";
    while (!UART_Buffer.empty()) {
        cout << UART_Buffer.front();
        UART_Buffer.pop();
    }
    cout << endl;

    return 0;
}