/**
 * @file reverse_count_Number.cpp
 * @author gandla bhargavi
 *
 * @brief  This program defines a class `reverse_number` that provides functionality to
 *  reverse a given integer and count the number of digits in it.
 * The class has two member functions: `reverseNum()` to reverse the number and `countTheNum()`
 *  to count the digits.
 * The program handles negative numbers by converting them to positive before processing.
 *
 * @version 0.2
 * @date 2026-01-05
 * @modified by gandla bhargavi: added handling for negative numbers and improved the structure of the class.
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/** @brief A class to reverse a number and count its digits */
class reverse_number
{
private:
    int number;
    int reverse_num = 0;
    int num_count = 0;

public:
    reverse_number(int num, int revNum = 0, int count = 0) : number(num), reverse_num(revNum), num_count(count) {}
    /**
     * @brief  Reverses the given number and counts the digits in it.
     *  Handles negative numbers by converting them to positive before processing.
     *
     */
    void reverseNum()
    {
        if (number < 0)
        { // Special case for 0
            number = (-1) * (number);
            cout << "The given number :" << number << endl;
        }

        while (number > 0)
        {
            int last_digit = number % 10;
            cout << last_digit;
            reverse_num = (reverse_num * 10) + last_digit;
            number /= 10;
        }
        cout << endl;
        cout << "reverse_num:" << reverse_num << endl;
    }
    /**
     * @brief Counts the number of digits in the given number.
     * Handles negative numbers by converting them to positive before processing.
     */
    void countTheNum()
    {
        ;
        if (number < 0)
        { // Special case for 0
            number = (-1) * (number);
            cout << "The given number :" << number << endl;
        }

        while (number > 0)
        {
            number /= 10;
            num_count++;
        }
        cout << "the given number  count : " << num_count << endl;
    }
};
/**
 * @brief   Main function to execute the reverse and count operations on a user-provided number.
 * The user is prompted to enter an integer, which is then processed by the `reverse_number`
 *  class to reverse the number and count its digits. The results are displayed to the user.
 *
 */
int main()
{
    int number;
    cout << "enter the number : " << endl;
    cin >> number;
    cout
        << "********** reverse the number ************" << endl;
    reverse_number objreverse(number, 0, 0);

    objreverse.reverseNum();

    cout << "********** the number of element using  count********" << endl;
    reverse_number objcount(number, 0, 0);
    objcount.countTheNum();

    cout << "******************************************************" << endl;
    return 0;
}
