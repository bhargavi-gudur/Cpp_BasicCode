/**
 * @file stock_buy_sell.cpp
 * @author Gandla Bhargavi
 * @brief
 *   This program simulates stock buying and selling system.
 *   Users can buy stocks, sell stocks,
 *   and check available stock quantities.
 *   Demonstrates OOP concepts using vector and map.
 * @date 16-05-2026
 */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

/**
 * @brief Class for Stock Trading System
 */
class StockMarket {

private:

    // Vector to store stock names
    vector<string> stockList;

    // Map to store stock quantities
    map<string, int> stockQuantity;

public:

    /**
     * @brief Initialize stock data
     */
    void initStocks() {

        stockList.push_back("TCS");
        stockList.push_back("Infosys");
        stockList.push_back("Wipro");

        stockQuantity["TCS"] = 100;
        stockQuantity["Infosys"] = 150;
        stockQuantity["Wipro"] = 200;
    }

    /**
     * @brief Display stock details
     */
    void showStocks() {

        cout << "\nAvailable Stocks:\n";

        for(int i = 0; i < stockList.size(); i++) {

            string stock = stockList[i];

            cout << i + 1 << ". "
                 << stock
                 << " - Quantity: "
                 << stockQuantity[stock]
                 << endl;
        }
    }

    /**
     * @brief Buy stock
     */
    void buyStock() {

        int choice, qty;

        showStocks();

        cout << "Select stock number to buy: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        if(choice >= 1 && choice <= stockList.size()) {

            string stock = stockList[choice - 1];

            if(stockQuantity[stock] >= qty) {

                stockQuantity[stock] -= qty;

                cout << "Stock Purchased Successfully\n";
            }
            else {
                cout << "Insufficient Stock Available!\n";
            }
        }
        else {
            cout << "Invalid Stock Selection!\n";
        }
    }

    /**
     * @brief Sell stock
     */
    void sellStock() {

        int choice, qty;

        showStocks();

        cout << "Select stock number to sell: ";
        cin >> choice;

        cout << "Enter quantity: ";
        cin >> qty;

        if(choice >= 1 && choice <= stockList.size()) {

            string stock = stockList[choice - 1];

            stockQuantity[stock] += qty;

            cout << "Stock Sold Successfully\n";
        }
        else {
            cout << "Invalid Stock Selection!\n";
        }
    }

    /**
     * @brief Menu system
     */
    void menu() {

        int choice;

        do {

            cout << "\n===== Stock Trading System =====\n";

            cout << "1. Show Stocks\n";
            cout << "2. Buy Stock\n";
            cout << "3. Sell Stock\n";
            cout << "4. Exit\n";

            cout << "Enter choice: ";
            cin >> choice;

            switch(choice) {

                case 1:
                    showStocks();
                    break;

                case 2:
                    buyStock();
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

    StockMarket s;

    s.initStocks();

    s.menu();

    return 0;
}