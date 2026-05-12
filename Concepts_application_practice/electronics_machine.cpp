/**
 * @file electronics_machine.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program demonstrates virtual function concept
 *   using electronic machines.
 *   Different machines perform operations differently.
 * @date 12-05-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Abstract base class
 */
class ElectronicsMachine {
public:

    /**
     * @brief Virtual function
     */
    virtual void startMachine() = 0;
};

/**
 * @brief Washing Machine class
 */
class WashingMachine : public ElectronicsMachine {
public:

    /**
     * @brief Override virtual function
     */
    void startMachine() override {
        cout << "Washing Machine Started 🧺\n";
    }
};

/**
 * @brief Refrigerator class
 */
class Refrigerator : public ElectronicsMachine {
public:

    /**
     * @brief Override virtual function
     */
    void startMachine() override {
        cout << "Refrigerator Cooling Started ❄️\n";
    }
};

/**
 * @brief Microwave Oven class
 */
class Microwave : public ElectronicsMachine {
public:

    /**
     * @brief Override virtual function
     */
    void startMachine() override {
        cout << "Microwave Heating Started 🔥\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    WashingMachine w;
    Refrigerator r;
    Microwave m;

    cout << "===== Electronics Machine System =====\n";

    w.startMachine();
    r.startMachine();
    m.startMachine();

    return 0;
}