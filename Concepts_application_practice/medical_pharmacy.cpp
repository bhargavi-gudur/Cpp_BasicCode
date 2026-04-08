/**
 * @file medical_pharmacy.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a medical pharmacy system.
 *   It includes categories like Skin (Dermatology) and General medicines.
 *   It generates a simple prescription bill.
 * @date 08-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Medicine
 */
class Medicine {
public:
    string name;
    int price;
};

/**
 * @brief Class for Pharmacy
 */
class Pharmacy {
private:
    Medicine skin[3], general[3];

public:

    // Initialize medicines
    void initMedicines() {
        skin[0] = {"Face Cream", 150};
        skin[1] = {"Acne Gel", 120};
        skin[2] = {"Sunscreen", 200};

        general[0] = {"Paracetamol", 50};
        general[1] = {"Cough Syrup", 80};
        general[2] = {"Vitamin Tablets", 100};
    }

    // Show medicines
    void showMedicines() {

        cout << "\n--- Skin (Dermatology) ---\n";
        for(int i = 0; i < 3; i++)
            cout << i+1 << ". " << skin[i].name << " - " << skin[i].price << " Rs\n";

        cout << "\n--- General Medicines ---\n";
        for(int i = 0; i < 3; i++)
            cout << i+1 << ". " << general[i].name << " - " << general[i].price << " Rs\n";
    }

    // Booking / Prescription
    void prescription() {

        int type, choice, qty, total = 0;

        cout << "\n1. Skin\n2. General\n";
        cout << "Select category: ";
        cin >> type;

        if(type == 1) {
            cout << "Enter medicine number: ";
            cin >> choice;
            cout << "Enter quantity: ";
            cin >> qty;

            total = skin[choice-1].price * qty;
            cout << "\nMedicine: " << skin[choice-1].name << endl;
        }
        else if(type == 2) {
            cout << "Enter medicine number: ";
            cin >> choice;
            cout << "Enter quantity: ";
            cin >> qty;

            total = general[choice-1].price * qty;
            cout << "\nMedicine: " << general[choice-1].name << endl;
        }
        else {
            cout << "Invalid category!\n";
            return;
        }

        cout << "Total Cost: " << total << " Rs\n";
        cout << "Prescription Generated Successfully!\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    Pharmacy p;
    int choice;

    cout << "===== Medical Pharmacy System =====\n";
    cout << "Date: 08-04-2026\n";

    p.initMedicines();

    do {
        cout << "\n1. Show Medicines\n";
        cout << "2. Prescription\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                p.showMedicines();
                break;

            case 2:
                p.prescription();
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