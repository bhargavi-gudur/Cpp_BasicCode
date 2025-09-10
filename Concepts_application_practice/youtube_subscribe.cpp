/**
 * @file youtube_subscribe.cpp
 * @author Gandla Bhargavi
 * @brief 
 *   This program simulates a YouTube Subscribe/Unsubscribe feature
 *   using a simple menu system in C++.
 * @date 10-09-2025
 */

#include <iostream>
using namespace std;

/**
 * @brief Toggles subscription status.
 * @param subscribed Current subscription status (true = subscribed, false = not)
 * @param choice User's action (1 = Subscribe, 2 = Unsubscribe)
 * @return Updated subscription status
 */
bool handleSubscribe(bool subscribed, int choice) {
    if (choice == 1) {
        if (subscribed)
            cout << "✅ You are already subscribed!\n";
        else {
            subscribed = true;
            cout << "🎉 Thank you for subscribing!\n";
        }
    } else if (choice == 2) {
        if (!subscribed)
            cout << "❌ You are not subscribed yet!\n";
        else {
            subscribed = false;
            cout << "😢 You unsubscribed!\n";
        }
    }
    return subscribed;
}

int main() {
    bool subscribed = false; // initial state
    int choice;

    do {
        cout << "\n--- YouTube Menu ---\n";
        cout << "1. Subscribe\n";
        cout << "2. Unsubscribe\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            case 2:
                subscribed = handleSubscribe(subscribed, choice);
                break;
            case 3:
                cout << "👋 Goodbye! Keep supporting!\n";
                break;
            default:
                cout << "⚠️ Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}