/**
 * @file string_menu.cpp
 * @author Gandla Bhargavi
 * @brief Menu-based string operations program in C++.
 * 
 * Performs various string operations using a loop-based menu:
 * 1. Reverse
 * 2. Toggle case
 * 3. Convert to uppercase
 * 4. Exit
 * 
 * @version 0.1
 * @date 2025-08-06
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter a string: ";
    getline(cin, str);

    do {
        cout << "\n--- String Operations Menu ---\n";
        cout << "1. Reverse String\n";
        cout << "2. Toggle Case\n";
        cout << "3. Convert to Uppercase\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << "Reversed: " << temp << endl;
                break;
            }
            case 2: {
                string temp = str;
                for (char &ch : temp)
                    ch = islower(ch) ? toupper(ch) : tolower(ch);
                cout << "Toggled: " << temp << endl;
                break;
            }
            case 3: {
                string temp = str;
                for (char &ch : temp)
                    ch = toupper(ch);
                cout << "Uppercase: " << temp << endl;
                break;
            }
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}