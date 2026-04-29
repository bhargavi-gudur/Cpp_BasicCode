/**
 * @file simpleCalculator.cpp
 * @author Gandla Bhargavi
 * @brief A simple calculator that performs arithmetic operations on numbers
 *        and displays ASCII/category info for characters.
 * @version 0.2
 * @date 2026-04-29
 */

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

/** @brief A simple calculator class for arithmetic and character operations */
class SimpleCalculator
{
    char operation;

public:
    SimpleCalculator(char op) : operation(op) {}

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
            cout << "Error! Invalid operator." << endl;
        }
    }

    void analyzeCharacter(char c)
    {
        cout << "Character: " << c << " | ASCII: " << static_cast<int>(c) << " | ";
        if (isalpha(c))
            cout << "Type: Alphabet" << endl;
        else if (isdigit(c))
            cout << "Type: Digit" << endl;
        else
            cout << "Type: Special Symbol" << endl;
    }
};

/** @brief Main function to execute the program */
int main()
{
    vector<int> numbers1, numbers2;
    vector<char> operators;
    char choice;

    cout << "Enter 'n' for number operations or 'c' for character analysis (0 to stop):" << endl;

    while (true)
    {
        cout << "\nChoice (n/c): ";
        cin >> choice;
        if (choice == '0')
            break;

        if (choice == 'n')
        {
            char op;
            int num1, num2;
            cout << "Enter operator (+, -, *, /): ";
            cin >> op;
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            SimpleCalculator calc(op);
            calc.calculate(num1, num2);
        }
        else if (choice == 'c')
        {
            char ch;
            cout << "Enter a character: ";
            cin >> ch;

            SimpleCalculator calc(' ');
            calc.analyzeCharacter(ch);
        }
        else
        {
            cout << "Invalid choice! Enter 'n' or 'c'." << endl;
        }
    }

    cout << "\n--- Program Ended ---" << endl;
    return 0;
}
