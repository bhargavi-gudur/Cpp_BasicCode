/**
 * @file meeting_scheduler.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a meeting scheduling system.
 *   Users can add and view meetings like a calendar.
 *   Uses OOP concepts and array data structure.
 * @date 13-04-2026
 */

#include <iostream>
#include <ctime>
using namespace std;

/**
 * @brief Class for Meeting
 */
class Meeting {
public:
    string title;
    string date;
    string time;
};

/**
 * @brief Class for Scheduler
 */
class Scheduler {
private:
    Meeting meetings[10];
    int count = 0;

public:

    // Add meeting
    void addMeeting() {

        if(count >= 10) {
            cout << "Meeting list is full!\n";
            return;
        }

        cout << "Enter Meeting Title: ";
        cin >> meetings[count].title;

        cout << "Enter Date (DD-MM-YYYY): ";
        cin >> meetings[count].date;

        cout << "Enter Time (HH:MM): ";
        cin >> meetings[count].time;

        count++;

        cout << "Meeting Scheduled Successfully!\n";
    }

    // Show meetings
    void showMeetings() {

        if(count == 0) {
            cout << "No meetings scheduled.\n";
            return;
        }

        cout << "\n===== Meeting List =====\n";

        for(int i = 0; i < count; i++) {
            cout << i+1 << ". "
                 << meetings[i].title << " | "
                 << meetings[i].date << " | "
                 << meetings[i].time << endl;
        }
    }
};

/**
 * @brief Main function
 */
int main() {

    Scheduler s;
    int choice;

    // Get system date
    time_t now = time(0);
    tm *ltm = localtime(&now);

    cout << "===== Meeting Scheduler =====\n";
    cout << "Today Date: "
         << ltm->tm_mday << "-"
         << 1 + ltm->tm_mon << "-"
         << 1900 + ltm->tm_year << endl;

    do {
        cout << "\n1. Add Meeting\n";
        cout << "2. View Meetings\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                s.addMeeting();
                break;

            case 2:
                s.showMeetings();
                break;

            case 3:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}