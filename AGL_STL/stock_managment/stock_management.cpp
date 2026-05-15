/**
 * @file stock_management.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates a stock management system.
 *   Users can add stock, sell stock, and check availability.
 *   Demonstrates OOP concepts in C++.
 * @date 14-05-2026
 */

#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief Class for Product
 */
class Product {
public:
    string name;
    int quantity;
};

/**
 * @brief Class for Stock Management
 */
class StockManager {

private:
    vector<Product> products;

public:

    /**
     * @brief Initialize stock items
     */
    void initStock() {

        products.push_back({"Laptop", 10});
        products.push_back({"Mobile", 15});
        products.push_back({"Headphones", 20});
    }

    /**
     * @brief Display available stock
     */
    void showStock() {

        cout << "\nAvailable Stock:\n";

        for(int i = 0; i < products.size(); i++) {

            cout << i + 1 << ". "
                 << products[i].name
                 << " - Quantity: "
                 << products[i].quantity
                 << endl;
        }
    }

    /**
     * @brief Add stock quantity
     */
    void addStock() {

        int choice, qty;

        showStock();

        cout << "Select product number: ";
        cin >> choice;

        cout << "Enter quantity to add: ";
        cin >> qty;

        if(choice >= 1 && choice <= products.size()) {

            products[choice - 1].quantity += qty;

            cout << "Stock Added Successfully\n";
        }
        else {
            cout << "Invalid Product!\n";
        }
    }

    /**
     * @brief Sell stock quantity
     */
    void sellStock() {

        int choice, qty;

        showStock();

        cout << "Select product number: ";
        cin >> choice;

        cout << "Enter quantity to sell: ";
        cin >> qty;

        if(choice >= 1 && choice <= products.size()) {

            if(products[choice - 1].quantity >= qty) {

                products[choice - 1].quantity -= qty;

                cout << "Product Sold Successfully\n";
            }
            else {
                cout << "Insufficient Stock!\n";
            }
        }
        else {
            cout << "Invalid Product!\n";
        }
    }

    /**
     * @brief Menu system
     */
    void menu() {

        int choice;

        do {

            cout << "\n===== Stock Management System =====\n";

            cout << "1. Show Stock\n";
            cout << "2. Add Stock\n";
            cout << "3. Sell Stock\n";
            cout << "4. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {

                case 1:
                    showStock();
                    break;

                case 2:
                    addStock();
                    break;

                case 3:
                    sellStock();
                    break;

                case 4:
                    cout << "Thank you!\n";
                    break;

                default:
                    cout << "Invalid choice!\n";
            }

        } while(choice != 4);
    }
};

/**
 * @brief Main function
 */
int main() {

    StockManager s;

    s.initStock();

    s.menu();

    return 0;
}