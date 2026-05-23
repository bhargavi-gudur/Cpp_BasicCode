/**
 * @file clothing_store.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates an online clothing store.
 *   Users can view items, buy clothes, and see total bill.
 *   Uses OOP concepts and basic data structures.
 * @date 15-04-2026
 */

#include <iostream>
using namespace std;

/**
 * @brief Class for Clothing Item
 */
class Item {
public:
    string name;
    int price;
};

/**
 * @brief Class for Store
 */
class Store {
private:
    Item items[5];
    int total = 0;

public:

    // Initialize items
    void initItems() {
        items[0] = {"Shirt", 800};
        items[1] = {"Jeans", 1500};
        items[2] = {"T-Shirt", 500};
        items[3] = {"Jacket", 2000};
        items[4] = {"Kurta", 1200};
    }

    // Show items
    void showItems() {
        cout << "\nAvailable Clothes:\n";
        for(int i = 0; i < 5; i++) {
            cout << i+1 << ". " << items[i].name
                 << " - " << items[i].price << " Rs\n";
        }
    }

    // Buy item
    void buyItem() {
        int choice;

        showItems();
        cout << "Select item number: ";
        cin >> choice;

        if(choice < 1 || choice > 5) {
            cout << "Invalid choice!\n";
            return;
        }

        total += items[choice-1].price;

        cout << items[choice-1].name << " added to cart!\n";
    }

    // Show bill
    void showBill() {
        cout << "\n===== Bill =====\n";
        cout << "Total Amount: " << total << " Rs\n";
        cout << "Thank you for shopping!\n";
    }
};

/**
 * @brief Main function
 */
int main() {

    Store s;
    int choice;

    s.initItems();

    cout << "===== Online Clothing Store =====\n";

    do {
        cout << "\n1. View Items\n";
        cout << "2. Buy Item\n";
        cout << "3. View Bill\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                s.showItems();
                break;

            case 2:
                s.buyItem();
                break;

            case 3:
                s.showBill();
                break;

            case 4:
                cout << "Thank you!\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 4);

    return 0;
}