/**
 * @file inheritance.cpp
 * @author Gandla Bhargavi
 * @brief Demonstrates accessing a protected virtual function 
 * through a derived class method.
 * @version 0.1
 * @date 2025-06-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/**
 * @brief Base class
 */
class Base
{
protected:
    virtual void display()
    {
        cout << "Base class display function called." << endl;
    }
};

/**
 * @brief Derived class inheriting from Base class
 */
class Derived : public Base
{
public:
    void display() override
    {
        cout << "Derived class display function called." << endl;
    }

    void invokeDisplay()
    {
        display(); // Valid: accessing protected member from within derived class
    }
};

/**
 * @brief Main function
 */
int main()
{
    Derived obj;
    obj.invokeDisplay(); // Safely accesses the protected display function

    return 0;
}
