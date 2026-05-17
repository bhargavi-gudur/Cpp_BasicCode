
/**
 * @file num_oddEven.cpp
 * @author gandla bhargavi
 * @brief  This program defines a class `Number_evenORodd` that takes a vector
 *  of integers as input and determines whether each number is odd or even.
 *
 *  The main function prompts the user to enter numbers until they enter 0, which stops the input.
 *  It then creates an instance of the `Number_evenORodd` class, passing  the vector of numbers
 *  to it for processing.
 *
 * @version 0.1
 * @date 2026-05-17
 *
 */
#include <iostream>
#include <vector>
// this namespace i used to avoid writing std:: library before every cin, cout, vector etc.

using std::cin;
using std::cout;
using std::endl;
using std::vector;

/***
 *@brief A class to determine if numbers in a vector are odd or even.
 ***/
class Number_evenORodd
{
private:
public:
    // Constructor that takes a vector of integers and determines if each number is odd or even.
    Number_evenORodd(vector<int> &number)
    {
        for (auto num_odd_even : number)
        {
            if (num_odd_even % 2 == 0)
            {
                cout << " the given number is even " << num_odd_even << endl;
            }
            else
            {
                cout << " the given number is odd " << num_odd_even << endl;
            }
        }
    }

    ~Number_evenORodd() {}
};

/***
 * @brief The main function to run the program.
 * It prompts the user to enter numbers until they enter 0, which stops the input.
 * It then creates an instance of the Number_evenORodd class, passing the vector of numbers to it.
 **/
int main()
{
    vector<int> vec;
    int value;
    cout << "Enter numbers (0 to stop):" << endl;
    while (true)
    {
        cin >> value;
        if (value == 0)
            break; // stop when user enters 0
        vec.push_back(value);
    }
    Number_evenORodd obj_Number_evenORodd(vec);
    return 0;
}

/* @note:  time complexity: O(n) where n is the number of elements in the vector,
 * as we need to iterate through each element once to determine if it's odd or even.
 * space complexity: O(n) where n is the number of elements in the vector,
 * as we need to store the input numbers in a vector before processing them.
 */