#include <iostream>
using namespace std;

// Abstract class
class Bank
{
public:
    // Pure virtual functions for sum and division
    virtual void sum(double a, double b) = 0;
    virtual void division(double a, double b) = 0;

    // Virtual destructor
    virtual ~Bank() {}
};

// Derived class implementing the abstract functions
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
