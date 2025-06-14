/**
 * @file factorialNumber.cpp
 * @author Gandla Bhargavi
 * @brief  This program calculates the factorial of a 
 * given number using a class and object-oriented programming approach.
 * It prompts the user to enter a number, computes its factorial, 
 * and displays the result.
 * @version 0.1
 * @date 2025-06-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
/**
 * @brief Class to calculate the factorial of a number.
 * 
 * This class takes an integer as input and calculates its factorial
 * using a constructor. The factorial is computed iteratively in the constructor.
 */
class factorial
{
private:
    int num;
    int fact;

public:
    factorial(int n) : num(n)
    {
        // num =n;
        fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
    }
    int getfactorial()
    {
        return fact;
    }
};
/**
 * @brief Main function to demonstrate factorial calculation.
 * 
 * This function prompts the user to enter a number, creates an instance
 * of the factorial class, and displays the computed factorial.
 */
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    factorial objfactorial(n);
    cout << "Factorial of " << n << " is: " << objfactorial.getfactorial() << endl;
    return 0;
}

/**
 * @note : change factorial approach from geek to geeks approach
 * 
 * 
 */