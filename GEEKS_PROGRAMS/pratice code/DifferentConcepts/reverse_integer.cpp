/**
 *@file reverse_integer.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates how to reverse an integer using both while and for loops.
 * It initializes an integer, reverses it by extracting digits, and prints the reversed number.
 * @version 0.1
 * @date 2025-06-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

using namespace std;
// Function prototypes
void reverseofIntegers();
void for_reverseofIntegers();

/**
 * @brief The main function serves as the entry point of the program.
 * It calls two functions to demonstrate reversing an integer using both while and for loops.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main()
{
    cout << "---------------------------------" << endl;
    cout << "while loop:" << endl;
    reverseofIntegers();
    cout<<"---------------------------------"<<endl;
    cout << "for loop" << endl;
    for_reverseofIntegers();
    cout << "---------------------------------" << endl;
    return 0;
}

/**
 * @brief Reverses an integer using a while loop.
 * 
 */
void reverseofIntegers()
{
    int value = 876;
    int reverse = 0;
    while (value > 0)
    {
        reverse = reverse * 10 + value % 10;
        value = value / 10;
        cout<<"inside loop"<<endl;
        cout << "value : " << value << "\treverse number : " << reverse << endl;
    }
    cout << "outside loop" << endl;
    cout << "value : " << value << "\treverse number : " << reverse << endl;
}

/**
 * @brief Reverses an integer using a for loop.
 * 
 */
void for_reverseofIntegers()
{
    int value = 876;
    int reverse = 0;
    for (; value > 0; value /= 10)
    {
        reverse = reverse * 10 + value % 10;
        value = value / 10;
        cout << "inside loop" << endl;
        cout << "value : " << value << "\treverse number : " << reverse << endl;
    }
    cout << "outside loop" << endl;
    cout << "value : " << value << "\treverse number : " << reverse << endl;
}
