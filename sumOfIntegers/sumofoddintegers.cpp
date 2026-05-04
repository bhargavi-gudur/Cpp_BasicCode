/**
 * @file sumofoddintegers.cpp
 * @author Gandla bhargavi
 *
 * @brief This program calculates the sum of odd integers from 1 to a given positive integer.
 *  The user is prompted to enter a positive integer, and the program will display
 *  the sum of odd integers up to that number.
 *  The program continues to prompt the user until they choose to exit by entering 0.
 *
 * @version 0.1
 * @date 2026-05-04
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

/** @brief A class to calculate the sum of odd integers up to a given number
 * The class has a constructor that initializes the number, a method to calculate
 *  the sum of odd integers, and a method to display the result.
 */
class sumofoddintegers
{
private:
    int number;

public:
    // Constructor to initialize the number for which we want to calculate the sum of odd integers.

    sumofoddintegers(int num) : number(num)
    {
    }
    /** @brief Calculates the sum of odd integers from 1 to the given number.
     *  It iterates through all integers up to the number, checks if they are odd,
     *  and adds them to the sum if they are.
     *
     * @return The sum of odd integers from 1 to the given number.
     */
    int sumofodd_integers()
    {
        int sum = 0;
        for (int i = 1; i <= number; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
                cout << "i: " << i << " sum: " << sum << endl;
            }
        }
        return sum;
    }
    /**
     * @brief  Displays the sum of odd integers up to the given number.
     *  If the number is less than 1, it displays an error message.
     *
     */
    void display()
    {
        if (number >= 1)
        {
            cout << "The sum of odd integers from 1 to " << number << " is: " << sumofodd_integers() << endl;
        }
        else
        {

            cout << "invalid number ! enter a positive integer." << endl;
        }
    }
    // Destructor
    ~sumofoddintegers()
    {
    }
};
/** @brief The main function to run the program
 *  It prompts the user for a positive integer and calculates the sum of
 *  odd integers up to that number.
 *  The program continues to prompt the user until they choose to exit by entering 0.
 */
int main()
{
    int odd_num = 0;

    while (true)
    {
        cout << "Enter a positive integer (or 0 to exit): ";
        cin >> odd_num;

        // Check for the exit condition first
        if (odd_num == 0)
        {
            cout << "Exiting program..." << endl;
            break;
        }

        sumofoddintegers obj(odd_num);
        obj.display();
    }

    return 0;
}