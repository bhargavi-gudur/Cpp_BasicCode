

    /**
 * @file ShoppingCartFile.cpp
 * @author Gandla Bhargavi
 * @brief Program to add shopping cart items, save them to a file, and display them.
 *
 * @version 0.2
 * @date 2025-10-03
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class ShoppingCart {
private:
    vector<string> items;  // store item names

public:
    /**
     * @brief Adds an item to the cart.
     * @param item The item name to add.
     */
    void addItem(const string& item) {
        items.push_back(item);
        cout << item << " added to cart.\n";
    }

    /**
     * @brief Saves the current cart to a file.
     * @param filename Name of the file where the cart will be stored.
     *
     * Opens the file in write mode and writes each item on a new line.
     */
    void saveToFile(const string& filename) {
        ofstream out(filename);
        if (!out) {
            cout << "Error: Could not open file for writing.\n";
            return;
        }
        for (const string &item : items) {
            out << item << endl;
        }
        out.close();
        cout << "\nCart saved to file: " << filename << endl;
    }

    /**
     * @brief Loads and displays the cart from a file.
     * @param filename Name of the file to read from.
     *
     * Opens the file in read mode and prints each item with a number.
     */
    void loadFromFile(const string& filename) {
        ifstream in(filename);
        if (!in) {
            cout << "Error: Could not open file for reading.\n";
            return;
        }
        cout << "\n--- Your Cart from File ---\n";
        string item;
        int count = 1;
        while (getline(in, item)) {
            cout << count++ << ". " << item << endl;
        }
        in.close();
    }
};

/**
 * @brief Main function that drives the program.
 *
 * Lets the user enter items until they type "done",
 * then saves the items to a file and displays them back.
 */
int main() {
    ShoppingCart cart;
    string item;

    cout << "Enter items to add to cart (type 'done' to finish):\n";
    while (true) {
        cout << "Item: ";
        getline(cin, item);
        if (item == "done" || item == "DONE") break;
        if (!item.empty()) cart.addItem(item);
    }

    string filename = "cart.txt";
    cart.saveToFile(filename);   // write items to file
    cart.loadFromFile(filename); // read and show items from file

    return 0;
}