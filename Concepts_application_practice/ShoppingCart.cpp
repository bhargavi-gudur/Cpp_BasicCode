/**
 * @file ShoppingCart.cpp
 * @author Gandla Bhargavi
 * @brief Small program to add items to a shopping cart and display them.
 *
 * @version 0.1
 * @date 2025-10-03
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ShoppingCart {
private:
    vector<string> items;  // store item names
public:
    void addItem(const string& item) {
        items.push_back(item);
        cout << item << " added to cart.\n";
    }

    void showCart() const {
        cout << "\n--- Your Cart ---\n";
        if (items.empty()) {
            cout << "Cart is empty.\n";
        } else {
            for (int i = 0; i < (int)items.size(); i++) {
                cout << i + 1 << ". " << items[i] << endl;
            }
        }
    }
};

int main() {
    ShoppingCart cart;
    cart.addItem("Apple");
    cart.addItem("Banana");
    cart.addItem("Milk");

    cart.showCart();
    return 0;
}