/**
 * @file simpleCalculator.cpp
 * @author gandla bhargavi
 * @brief   A simple calculator class for performing basic arithmetic operations
 * using vectors to store multiple pairs of numbers and an operator.
 * 
 * @version 0.1
 * @date 2026-04-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <vector>

// Using declarations for convenience and readability
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/** @brief A simple calculator class for performing basic arithmetic operations */
class SimpleCalculator
{
    char operation;

public:
    SimpleCalculator(char op)
    {
        operation = op;
    }

    void calculate(int num1, int num2)
    {
        switch (operation)
        {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default:
            cout << "Error! Operator is not correct." << endl;
        }
    }
};
/** @brief Main function to execute the program */
int main()
{
    vector<int> numbers1, numbers2;
    int value1, value2;
    char op;

    cout << "Enter pairs of numbers (0 to stop):" << endl;
    while (true)
    {
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        cin >> value1;
        if (value1 == 0)
            break;
        cin >> value2;
        if (value2 == 0)
            break;

        numbers1.push_back(value1);
        numbers2.push_back(value2);
    }

    cout << "\n--- Simple Calculator Results ---\n";
    SimpleCalculator calc(op);
    for (size_t i = 0; i < numbers1.size(); i++)
    {
        calc.calculate(numbers1[i], numbers2[i]);
    }

    return 0;
}
