/**
 * @file BillReminder.cpp
 * @brief Calculates electricity bills and checks payment due dates.
 * @date 06/11/2026
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief Calculates the electricity bill.
 * @param units Electricity consumed in kWh.
 * @param rate Cost per unit.
 * @return Total bill amount.
 */
double calculateBill(double units, double rate) {
    return units * rate;
}

/**
 * @brief Checks the payment status.
 * @param dueDate Electricity bill due date.
 * @param paymentDate Actual payment date.
 * @return Payment status.
 */
int checkPayment(int dueDate, int paymentDate) {
    if (paymentDate < dueDate)
        return 1;
    else if (paymentDate == dueDate)
        return 2;
    else
        return 3;
}

/**
 * @brief Main function.
 * @return 0 on successful execution.
 */
int main() {
    double units, rate, bill;
    int dueDate, paymentDate;

    cout << "===== ELECTRICITY BILL REMINDER =====\n";
    cout << "Date: 06/11/2026\n\n";

    cout << "Enter electricity units consumed: ";
    if (!(cin >> units)) return 1;

    cout << "Enter rate per unit (Rs.): ";
    if (!(cin >> rate)) return 1;

    cout << "Enter due date (day of month): ";
    if (!(cin >> dueDate)) return 1;

    cout << "Enter payment date (day of month): ";
    if (!(cin >> paymentDate)) return 1;

    if (units < 0 || rate < 0 ||
        dueDate < 1 || dueDate > 31 ||
        paymentDate < 1 || paymentDate > 31) {
        cout << "Invalid input!\n";
        return 1;
    }

    bill = calculateBill(units, rate);

    cout << fixed << setprecision(2);

    cout << "\n===== BILL DETAILS =====\n";
    cout << "Units Consumed : " << units << " kWh\n";
    cout << "Total Bill     : Rs. " << bill << "\n";

    int status = checkPayment(dueDate, paymentDate);

    if (status == 1)
        cout << "Status: Payment made before due date.\n";
    else if (status == 2)
        cout << "Status: Payment made on due date.\n";
    else
        cout << "Status: Payment made after due date.\n";

    return 0;
}