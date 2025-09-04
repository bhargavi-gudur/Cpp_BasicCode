/**
 * @file swap_tempate.cpp
 * @author GandlaBhargavi
 * @brief  This program demonstrates the use of templates in C++
 *  to swap values of different data types.
 * It includes a function to calculate the sum of odd numbers 
 * up to a given number and a template function to swap values.
 * @version 0.1
 * @date 2025-06-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>

using std ::cin;
using std::cout;
using std::endl;

// Function prototypes
void sumOfOddNum();
void swap();
template <class datatype>
// Function to swap values of two variables using arithmetic operations
void swapValues(datatype &a, datatype &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
/**
 * @brief  Main function to execute the program.
 * 
 * @return int 
 */
int main()
{
    sumOfOddNum();
    swap();
    return 0;
}

/**
 * @brief  Function to calculate the sum of odd numbers
 * up to a given number.
 * 
 * This function prompts the user to enter a positive number
 * and calculates the sum of all odd numbers from 1 to that number.
 * It also prints the intermediate sums.
 */
void sumOfOddNum()
{
    int sum = 0, num, temp = 1;
    cout << "enter the num in Between odd digits sum :" << endl;
    cin >> num;
    if (num <= 0)
    {
        cout << "Please enter a positive number!" << endl;
        return;
    }
    while (temp <= num)
    {
        sum += temp;
        temp += 2;
        cout << temp << " is: " << sum << endl;
    }
    cout << "sum of odd number from 1 to " << temp << " is: " << sum << endl;
}
/**
 * @brief  Function to swap two numbers.
 *  This function demonstrates the use of a template function
 * to swap values of different data types.
 */
void swap()
{

    int a = 9, b = 24;
    cout << a << "-" << b << endl;
    swapValues(a, b);
    cout << a << "-" << b << endl;

    char x = 'c', y = 'z';
    cout << x << "-" << y << endl;
    swapValues(x, y);
    cout << x << "-" << y << endl;
}