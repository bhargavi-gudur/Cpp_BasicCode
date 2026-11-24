#include <iostream>
using namespace std;

int main()
{
    float voltage, current, hours;
    float power, energy, bill, rate;

    cout << "Electricity Calculator" << endl;

    cout << "Enter Voltage (V): ";
    cin >> voltage;

    cout << "Enter Current (A): ";
    cin >> current;

    cout << "Enter Usage Hours: ";
    cin >> hours;

    cout << "Enter Cost per Unit: ";
    cin >> rate;

    power = voltage * current;
    energy = (power * hours) / 1000;
    bill = energy * rate;

    cout << "\nElectrical Power: " << power << " Watts";
    cout << "\nEnergy Consumed: " << energy << " kWh";
    cout << "\nElectricity Bill: Rs. " << bill;

    return 0;
}