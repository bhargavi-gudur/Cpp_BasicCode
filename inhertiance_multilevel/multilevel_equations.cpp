// multilevel inheritance  using protected access specifier
/**
 * @file multilevel_equations.cpp
 * @author Gandla Bhargavi
 * 
 * @brief This program demonstrates multilevel inheritance in C++.
 *  It defines three classes: add, factorial, and square.
 *  The add class performs addition of two numbers, the factorial
 *  class calculates the factorial of a number, and the square class calculates the square of a number.
 *  The main function prompts the user for input and displays the results.
 *
 * @version 0.1
 * @date 2026-05-05
 *
 * @copyright Copyright (c) 2026
 *
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/**
 * @brief  The add class performs addition of two numbers and displays the result.
 *
 */
class add
{
protected:
    int a, b;

public:
    add(int v1, int v2) : a(v1), b(v2)
    {
        cout << "Result of addition: " << (a + b) << endl;
    }
};

// First derived class
class factorial : protected add
{
protected:
    int num;

public:
    factorial(int v1, int v2, int fact_number) : add(v1, v2), num(fact_number) {}

    void factorial_display()
    {
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        cout << "Result of factorial: " << fact << endl;
    }
};

// Second derived class (multilevel)
class square : protected factorial
{
public:
    square(int v1, int v2, int fact_number) : factorial(v1, v2, fact_number) {}
    using factorial::factorial_display;
    void square_display()
    {
        cout << "Square of num: " << (num * num) << endl;
    }
};

/**
 * @brief  The main function prompts the user for input values,
 * creates an object of the square class, and calls the display functions
 * to show the results of addition, factorial, and square calculations.
 *
 * @return int
 */
int main()
{
    int v1, v2, num;
    cout << "Enter value1, value2, and number: ";
    cin >> v1 >> v2 >> num;

    square obj_inheritance(v1, v2, num);

    obj_inheritance.factorial_display(); // from factorial
    obj_inheritance.square_display();    // from square

    return 0;
}