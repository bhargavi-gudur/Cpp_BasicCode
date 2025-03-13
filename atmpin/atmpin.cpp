/**
 * @file    atmpin.cpp
 * @author  gandlaBhargavi
 * @brief   program to check the pin of atm card.
 * @version 0.1
 * @date    2025-03-11
 * @bhargavi-gudur
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

extern "C" void atmpin();
int userpin;
class atmNumber
{
private:
    int atmpin;

public:
    atmNumber(int userNum) : atmpin(userNum)
    {
    }
    void displayATM()
    {
        int chance = 3;
        atmpin = 9876;
        while (chance > 0)
        {
            if (atmpin == userpin)
            {
                cout << "pin is correct" << endl;
                break;
            }
            else
            {
                chance--;
                cout << "pin is incorrect" << endl;
                if (chance > 0)
                {
                    cout << "chances left: " << chance << endl;
                    cout << "try again" << endl;
                }
                else
                {
                    cout << "your card is blocked" << endl;
                }
            }
        }
    }
    ~atmNumber()
    {
        cout << "destructor is called ." << endl;
    }
};

/**
 * @brief   main function to check the pin of atm card.
 *
 * @return int
 */
int main()
{
    cout << "welcome to atm" << endl;
    cout << "---------------------------------" << endl;
    cout << "procedure concept" << endl;
    atmpin();
    cout << "---------------------------------" << endl;
    cout << "oop concepts" << endl;
    int userNum;
    cout << "enter the user number : " << endl;
    cin >> userNum;
    atmNumber atm(userNum);
    atm.displayATM();
    cout << "---------------------------------" << endl;

    return 0;
}
/**
 * @brief   function to check the pin of atm card.
 *
 */
void atmpin()
{
    int pin = 6978;
    int chance = 3;
    do
    {
        cout << " enter the pin : " << endl;
        cin >> userpin;
        if (pin == userpin)
        {
            cout << "pin is correct" << endl;
            break;
        }
        else
        {
            cout << "pin is incorrect" << endl;
            cout << "chances left : " << chance << endl;
            cout << "try again" << endl;
        }
    } while (chance--);
    if (chance < 0)
    {
        cout << "your card is blocked" << endl;
    }
}