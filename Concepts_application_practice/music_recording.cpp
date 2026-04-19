/**
 * @file music_recording.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a music recording purchase system.
 *   It uses map to store music categories and costs.
 *   Supports online and offline purchase.
 * @date 19-04-2026
 */

#include <iostream>
#include <map>
using namespace std;

/**
 * @brief Class for Music Store
 */
class MusicStore {
private:
    map<int, pair<string, int>> musicMap; // id → (type, cost)

public:

    /**
     * @brief Initialize music categories
     */
    void initMusic() {
        musicMap[1] = {"Classical", 1000};
        musicMap[2] = {"Romantic", 800};
        musicMap[3] = {"Devotional", 600};
        musicMap[4] = {"Instrumental", 900};
    }

    /**
     * @brief Display music list
     */
    void showMusic() {
        cout << "\nAvailable Music Recordings:\n";
        for(auto m : musicMap) {
            cout << m.first << ". "
                 << m.second.first << " - "
                 << m.second.second << " Rs\n";
        }
    }

    /**
     * @brief Purchase music
     */
    void purchase() {

        int choice, type;

        cout << "\n1. Online Purchase\n2. Offline Purchase\n";
        cout << "Enter choice: ";
        cin >> type;

        showMusic();

        cout << "Select music: ";
        cin >> choice;

        if(musicMap.find(choice) == musicMap.end()) {
            cout << "Invalid selection!\n";
            return;
        }

        cout << "Selected: " << musicMap[choice].first << endl;
        cout << "Cost: " << musicMap[choice].second << " Rs\n";

        if(type == 1) {
            cout << "Payment Successful (Online)\n";
        }
        else if(type == 2) {
            cout << "Pay at counter (Offline)\n";
        }
        else {
            cout << "Invalid payment type!\n";
        }
    }
};

/**
 * @brief Main function
 */
int main() {

    MusicStore ms;
    int choice;

    ms.initMusic();

    cout << "===== Music Recording Store =====\n";
    cout << "Date: 19-04-2026\n";

    do {
        cout << "\n1. Show Music\n";
        cout << "2. Purchase\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                ms.showMusic();
                break;

            case 2:
                ms.purchase();
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