/**
 * @file largestnumber.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2026-04-29
 *
 * @copyright Copyright (c) 2026
 *
 */

#include <iostream>
// #include<vector>

using std::cin;
using std::cout;
using std::endl;
// using std::vector;
/**
 * @brief  This program defines a class `Largest_number` that takes three
 * integers as input and determines the largest among them.
 *
 *  The class has a constructor that prompts the user to enter the values
 * of the three numbers, and a member function `find_largest_num()`
 * that compares the numbers and prints the largest one to the console.
 *
 */
class Largest_number
{
    int num1, num2, num3;

public:
    /**
     * @brief Construct a new Largest_number object that initializes the three numbers
     *  and prompts the user for input.
     *
     * @param n1
     * @param n2
     * @param n3
     */
    Largest_number(int n1 = 0, int n2 = 0, int n3 = 0) : num1(n1), num2(n2), num3(n3)
    {
        cout << " enter the values of num1, num2 and num3:" << endl;
        cin >> num1 >> num2 >> num3;
    }
    /**
     * @brief  This member function compares the three numbers and prints the largest one to the console.
     *
     */
    void find_largest_num()
    {
        // check if num1 is the largest number
        if (num1 >= num2 && num1 >= num3)
            cout << "Largest number: " << num1;

        // check if num2 is the largest number
        else if (num2 >= num1 && num2 >= num3)
            cout << "Largest number: " << num2;

        // if neither num1 nor num2 are the largest, num3 is the largest
        else
            cout << "Largest number: " << num3;
    }
    /**
     * @brief Destroy the Largest_number object
     *
     */
    ~Largest_number() {}
};

int main()
{

    Largest_number objLargest_number(0, 0, 0);
    objLargest_number.find_largest_num();

    return 0;
}
