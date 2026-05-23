/**
 * @file nursery_booking.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a nursery plant booking system.
 *   It displays 20 indoor plants and allows users to book
 *   plants using online/offline mode. Uses class & array.
 * @date 06-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Plant
 */
class Plant {
public:
    string name;
    int price;
};

/**
 * @brief Class for Booking
 */
class Nursery {
private:
    Plant plants[20];

public:

    // Initialize plant list
    void initPlants() {
        string names[20] = {
            "Aloe Vera","Snake Plant","Money Plant","Peace Lily","Spider Plant",
            "Tulsi","Bamboo Plant","Jade Plant","Areca Palm","Fern",
            "Rubber Plant","ZZ Plant","Croton","Anthurium","Dracaena",
            "Cactus","Orchid","Calathea","Philodendron","Aglaonema"
        };

        for(int i = 0; i < 20; i++) {
            plants[i].name = names[i];
            plants[i].price = 100 + (i * 10); // different prices
        }
    }

    // Show plants
    void showPlants() {
        cout << "\n===== Indoor Plants List =====\n";
        for(int i = 0; i < 20; i++) {
            cout << i+1 << ". " << plants[i].name 
                 << " - " << plants[i].price << " Rs\n";
        }
    }

    // Booking function
    void bookPlant() {

        int choice, qty, type;
        int total = 0;

        cout << "\n1. Online\n2. Offline\n";
        cout << "Enter booking type: ";
        cin >> type;

        showPlants();

        cout << "Enter plant number: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        if(choice < 1 || choice > 20) {
            cout << "Invalid plant!\n";
            return;
        }

        total = plants[choice-1].price * qty;

        cout << "\nPlant: " << plants[choice-1].name << endl;
        cout << "Total Cost: " << total << " Rs\n";

        if(type == 1) {
            cout << "Payment done online.\n";
        } else {
            cout << "Pay at nursery (offline).\n";
        }

        cout << "Booking Successful!\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    Nursery n;
    int choice;

    cout << "===== Nursery Booking System =====\n";
    cout << "Date: 06-04-2026\n";

    n.initPlants();

    do {
        cout << "\n1. Show Plants\n";
        cout << "2. Book Plant\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                n.showPlants();
                break;

            case 2:
                n.bookPlant();
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