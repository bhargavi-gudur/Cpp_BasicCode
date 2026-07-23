/**
 * @file atm_machine.cpp
 * @author Gandla Bhargavi
 * @brief Simplified ATM using STL
 * @version 0.2
 * @date 21-04-2026
 */

#include <iostream>
#include <map>

/** @brief Class representing a simplified ATM machine. */
class ATM
{
private:
    int balance = 5000;
    bool cardInserted = false;
    bool cardRead = false;
    std::map<int, int> notes{{2000, 0}, {500, 0}, {100, 0}}; // denomination → count

public:
    void insertCard()
    {
        cardInserted = true;
        std::cout << "Card Inserted\n";
    }
    void readCard()
    {
        if (!cardInserted)
            std::cout << "Insert card!\n";
        else
        {
            cardRead = true;
            std::cout << "Card Read\n";
        }
    }
    void checkBalance()
    {
        if (cardReady())
            std::cout << "Balance: " << balance << " Rs\n";
    }

    void withdraw()
    {
        using namespace std;
        if (!cardReady())
            return;
        int amt;
        cout << "Enter amount: ";
        cin >> amt;
        if (amt > balance)
            return cout << "Insufficient balance!\n", void();
        if (amt % 100)
            return cout << "Enter multiples of 100!\n", void();
        balance -= amt;
        cout << "Cash:\n";
        for (auto &p : notes)
        {
            p.second = amt / p.first;
            amt %= p.first;
            if (p.second)
                cout << p.first << " x " << p.second << "\n";
        }
        cout << "Transaction Successful\n";
    }

    void menu()
    {
        using namespace std;
        int ch = 0;
        for (ch>0;;)
        {
            cout << "\n=== ATM Menu ===\n1.Insert Card\n2.Read Card\n3.Balance\n4.Withdraw\n5.Exit\nChoice: ";
            cin >> ch;
            if (ch == 1)
                insertCard();
            else if (ch == 2)
                readCard();
            else if (ch == 3)
                checkBalance();
            else if (ch == 4)
                withdraw();
            else if (ch == 5)
                break;
            else
                cout << "Invalid!\n";
        }
    }

private:
    bool cardReady()
    {
        if (!cardInserted || !cardRead)
        {
            std::cout << "Card not ready!\n";
            return false;
        }
        return true;
    }
};
/** @brief Main function to run the ATM simulation. */
int main()
{
    std::cout << "Welcome to the ATM!\n";
    ATM atm;
    atm.menu();
}
