/**
 * @file Attendance.cpp
 * @author Gandla
 * @brief Marks student attendance (Present/Absent) and displays it with current date.
 *
 * Input : Student name + P/A
 * Output: Attendance record with status and date
 *
 * @date 2025-10-28
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @brief Attendance class holds student's name and status.
 */
class Attendance {
private:
    string name;
    char status; // P = Present, A = Absent

public:
    // Taking attendance input from user
    void input() {
        cout << "Enter student name : ";
        getline(cin, name);

        cout << "Enter attendance (P/A): ";
        cin >> status;
    }

    // Display attendance result
    void show() {
        cout << "\n--- Attendance Record ---\n";
        cout << "Name     : " << name << endl;
        cout << "Status   : " << ((status == 'P' || status == 'p') ? "Present" : "Absent") << endl;
        cout << "Date     : 28-10-2025" << endl;
    }
};
/**
* @brief  main function calling input function 
* and display function.
*/
int main() {
    Attendance student;
    student.input(); // calling input function
    student.show();  // calling display function

    return 0;
}