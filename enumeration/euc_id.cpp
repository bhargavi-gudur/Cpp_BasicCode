/**
 * @file euc_id.cpp
 * @author Gandla Bhargavi
 * @brief  This code defines an enumeration for ECU (Electronic Control Unit) 
 * identifiers and implements a simple class hierarchy to represent different
 *  types of ECUs in a vehicle. Each ECU class has a method to check its status, 
 * demonstrating polymorphism in C++. The main function creates instances of each 
 * ECU type and checks their status.
 * @version 0.1
 * @date 2026-06-09
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include <memory> // for smart pointers


using namespace std;

// ECU identifiers
enum ecu_id
{
    air_bag = 0x12,
    wind_sensor = 0x13,
    tire_pressure = 0x15
};

// Base class for ECU
class ECU
{
protected:
    ecu_id id;
    string name;

public:
    ECU(ecu_id id, const string &name) : id(id), name(name) {}
    virtual void checkStatus() = 0; // pure virtual (OOP polymorphism)
    virtual ~ECU() {}
};

// Derived class for Airbag ECU
class AirBagECU : public ECU
{
public:
    AirBagECU() : ECU(air_bag, "Airbag ECU") {}
    void checkStatus() override
    {
        cout << name << " [0x" << hex << id << "] : Fault detected!" << endl;
    }
};

// Derived class for Wind Sensor ECU
class WindSensorECU : public ECU
{
public:
    WindSensorECU() : ECU(wind_sensor, "Wind Sensor ECU") {}
    void checkStatus() override
    {
        cout << name << " [0x" << hex << id << "] : System running normally." << endl;
    }
};

// Derived class for Tire Pressure ECU
class TirePressureECU : public ECU
{
public:
    TirePressureECU() : ECU(tire_pressure, "Tire Pressure ECU") {}
    void checkStatus() override
    {
        cout << name << " [0x" << hex << id << "] : Pressure stable." << endl;
    }
};

int main()
{
    // STL vector of smart pointers to ECU objects
    vector<unique_ptr<ECU>> modules;

    // Add ECUs
    modules.push_back(make_unique<AirBagECU>());
    modules.push_back(make_unique<WindSensorECU>());
    modules.push_back(make_unique<TirePressureECU>());

    // Iterate and check status
    for (auto &m : modules)
    {
        m->checkStatus(); // polymorphic call
    }

    return 0;
}
