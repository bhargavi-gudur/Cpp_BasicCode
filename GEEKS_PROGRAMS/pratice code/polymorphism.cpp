/**
 * @file polymorphism.cpp
 * @author Gandla Bhargavi
 * @brief Demonstrates runtime polymorphism using virtual functions in C++
 * @version 0.1
 * @date 2025-07-14
 * 
 * @details This program shows how a base class pointer can call the overridden function
 *          in the derived class when using virtual functions. It highlights the importance
 *          of declaring functions as virtual in the base class for achieving dynamic dispatch.
 * 
 * Output:
 * Derived show()
 */

#include <iostream>
using namespace std;

/**
 * @brief Base class with a virtual function.
 */
class Base {
public:
    /**
     * @brief Virtual function to be overridden in the derived class.
     */
    virtual void show() {
        cout << "Base show()" << endl;
    }
};

/**
 * @brief Derived class that overrides Base::show().
 */
class Derived : public Base {
public:
    /**
     * @brief Overrides the show() function to provide specific implementation.
     */
    void show() override {
        cout << "Derived show()" << endl;
    }
};

/**
 * @brief Main function demonstrating runtime polymorphism.
 * @return int
 */
int main() {
    Base* b = new Derived();  // Base class pointer to Derived object
    b->show();  // Calls Derived's show() due to virtual function

    delete b;   // Freeing dynamically allocated memory
    return 0;
}