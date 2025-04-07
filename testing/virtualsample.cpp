/**
 * @file virtualsample.cpp
 * @author Gandla Bhargavi
 * @brief   This program demonstrates the use of abstract classes and virtual functions in C++.
 *          It defines an abstract class Bank with pure virtual functions for sum and division.
 * @version 0.1
 * @date 2025-04-07
 *
 */
#include <iostream>
using namespace std;

/**
 * @brief   Abstract class Bank with pure virtual functions for sum and division.
 *
 */
class Bank
{
public:
    // Pure virtual functions for sum and division
    virtual void sum(double a, double b) = 0;
    virtual void division(double a, double b) = 0;

    // Virtual destructor
    virtual ~Bank() {}
};

/**
 * @brief  Concrete class Operations that implements the abstract class Bank.
 * 
 */
class Operations : public Bank
{
public:
    void sum(double a, double b) override
    {
        cout << "Sum: " << a + b << endl;
    }

    void division(double a, double b) override
    {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Error: Division by zero is undefined." << endl;
    }
};
/**
 * @brief  Main function to demonstrate the use of abstract classes and virtual functions.
 * 
 * @return int 
 */
int main()
{
    // Pointer to the abstract class
    Bank *bank = new Operations();

    double x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Perform operations
    bank->sum(x, y);
    bank->division(x, y);

    // Clean up
    delete bank;

    return 0;
}
