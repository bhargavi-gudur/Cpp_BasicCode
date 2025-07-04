/**
 * @file oddEvenClsObj.cpp
 * @author Gandla Bhargavi
 * @brief This program demonstrates the use of classes and objects
 * in C++ to check for odd and even numbers at intervals.
 * @version 0.1
 * @date 2025-07-04
 *
 */

#include <iostream>
using namespace std;

/**
 * @brief Class to check odd and even numbers at intervals
 */
class check_oddEvenAtIntervals
{
private:
    int number;

public:
    check_oddEvenAtIntervals(int num) : number(num) {}
    void oddEvenAtIntervals_method()
    {
        if (number <= 0)
        {
            cout << "user entered invalid number ' " << number << "' please,enter greater than zero. " << endl;
        }
        else
        {
            for (int i = 1; i <= number; i++)
            {

                if (i % 2 == 0)
                {
                    cout << "even number: " << i << endl;
                }
                else
                {
                    cout << "odd number:" << i << endl;
                }
                cout << string(30, '_') << endl;
            }
        }
    }
    ~check_oddEvenAtIntervals() {}
};

/**
 * @brief Main function to create an object of check_oddEvenAtIntervals class
 * and call the method to check odd and even numbers at intervals.
 *
 * @return int
 */
int main()
{
    cout << "-----------------odd and even numbers at intervals-----------------" << endl;
    cout << "enter the number to check odd and even numbers at intervals:" << endl;
    int num;
    cin >> num;
    check_oddEvenAtIntervals objcheck_oddEvenAtIntervals(num);
    objcheck_oddEvenAtIntervals.oddEvenAtIntervals_method();
    return 0;
}