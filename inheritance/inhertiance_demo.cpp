/**
 * @file inhertiance_demo.cpp
 * @author gandla bhargavi
 * @brief  A simple demonstration of inheritance in C++
 *  This program defines a base class `InheritanceParent` with 
 * a method to display the square of a value.        
 * @version 0.1
 * @date 2026-05-12
 * 
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief   Base class for demonstrating inheritance
 * 
 */
class InheritanceParent
{
private:
    int x;

public:
    InheritanceParent(int x_value) : x(x_value) {}

    void square_display()
    {
        cout << "Square of x in parent: " << (x * x) << endl;
    }

    ~InheritanceParent()
    {
        cout << "InheritanceParent destructor" << endl;
    }
};
/**
 * @brief   
 * Derived class that inherits from InheritanceParent and adds its own functionality
 *   
 * 
 */
class InheritanceChild : public InheritanceParent
{
private:
    int child_value;

public:
    // Constructor takes input and passes to parent
    InheritanceChild(int val) : InheritanceParent(val), child_value(val) {}

    void add_display()
    {
        cout << "Double of child_value in child: " << (child_value * 2) << endl;
    }

    ~InheritanceChild()
    {
        cout << "InheritanceChild destructor" << endl;
    }
};

/**
 * @brief  Main function to demonstrate inheritance
 * This function prompts the user for input, creates objects of both 
 * the parent and child classes, and calls their respective methods to display results. 
 * 
 * @return int 
 */
int main()
{
    int value;
    cout << "Enter the value for x: ";
    cin >> value;

    InheritanceParent objParent(value);
    objParent.square_display();

    InheritanceChild objChild(value);
    objChild.square_display(); // inherited method
    objChild.add_display();    // child-specific method

    return 0;
}
