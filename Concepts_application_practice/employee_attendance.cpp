/**
 * @file employee_attendance_class.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program manages attendance of 50 employees.
 *   It uses class and object to store whether employees
 *   are working from home or office and counts office members.
 * @date 06-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Employee
 */
class Employee {
private:
    int id;
    char mode; // O = Office, H = Home

public:

    // Input function
    void getData(int i) {
        id = i;
        cout << "Employee ID: " << id << endl;
        cout << "Enter mode (O = Office, H = Home): ";
        cin >> mode;
    }

    // Check if employee is in office
    int isOffice() {
        if(mode == 'O' || mode == 'o')
            return 1;
        else
            return 0;
    }
};

/**
 * @brief Main function
 */
int main() {

    Employee emp[50];  // 50 objects
    int officeCount = 0;

    cout << "===== Employee Attendance System =====\n";
    cout << "Date: 06-04-2026\n";

    // Input
    for(int i = 0; i < 50; i++) {
        emp[i].getData(i + 1);
        officeCount += emp[i].isOffice();
    }

    // Output
    cout << "\n===== Report =====\n";
    cout << "Total Employees: 50\n";
    cout << "Work From Office: " << officeCount << endl;
    cout << "Work From Home: " << 50 - officeCount << endl;

    return 0;
}