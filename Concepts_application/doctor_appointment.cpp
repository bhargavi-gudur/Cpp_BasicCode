/**
 * @file doctor_appointment.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a doctor appointment system
 *   using C++ templates with custom type name 'doctorfee'.
 * @date 02-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Template function using custom type name 'doctorfee'
 */
template <typename doctorfee>
doctorfee calculateFee(doctorfee fee) {
    return fee;
}

/**
 * @brief Displays appointment types
 */
void showAppointmentTypes() {
    cout << "\n1. Online Consultation - 300 Rs\n";
    cout << "2. Offline Visit       - 500 Rs\n";
}

/**
 * @brief Handles payment
 */
void makePayment(float amount) {

    int method;

    cout << "\n1. Cash\n2. UPI\n3. Card\n";
    cout << "Enter method: ";
    cin >> method;

    if(method >= 1 && method <= 3) {
        cout << "Payment Successful!\n";
        cout << "Amount Paid: " << amount << " Rs\n";
    } else {
        cout << "Invalid payment!\n";
    }
}

/**
 * @brief Books appointment
 */
void bookAppointment() {

    int choice;
    float fee = 0;

    showAppointmentTypes();

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            fee = calculateFee<float>(300);
            cout << "Online Appointment Selected\n";
            break;

        case 2:
            fee = calculateFee<float>(500);
            cout << "Offline Appointment Selected\n";
            break;

        default:
            cout << "Invalid choice!\n";
            return;
    }

    cout << "Consultation Fee: " << fee << " Rs\n";

    makePayment(fee);

    cout << "Appointment Booked Successfully!\n";
}

/**
 * @brief Main function
 */
int main() {

    bookAppointment();
    return 0;
}