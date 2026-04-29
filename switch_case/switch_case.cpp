/**
 * @file switch_case.cpp
 * @author Gandla Bhargavi
 * @brief A simple demonstration of switch-case statements in C++ to perform 
 * various arithmetic operations based on user input.
 * 
 * @bhargavi-gudur: modified the code opps concept and added the switch case statement 
 * to perform the operations.
 * 
 * @version 0.2
 * @date 2026-04-29
 *
 */
#include <iostream>
#include<vector>

// Using declarations for standard library components
using std::cin;
using std::cout;
using std::endl;
using std::vector;
/**
 * @brief  The arithmetic_operations class encapsulates two integers and an operation choice,
 *  and provides a method to perform the selected arithmetic operation using a switch-case statement.
 * 
 */
class arithmetic_operations
{
    private:
    int num1, num2;
    int operation;
    public:
        arithmetic_operations(int n1, int n2, int op) : num1(n1), num2(n2), operation(op) {
            cout<<"Arithmetic Operations Class Initialized: "<<endl;
            cout<<"1. X-OR\n2. Addition\n3. Subtraction\n4. Modulus\n5. Division\n6. Multiplication\n";

        }

        void switchcase()
        {
            int result=0;
            switch (operation)
            {
            case 1:
                result = num1 ^ num2;
                cout << "x-or: " << result;
                break;
            case 2:
                result = num1 + num2;
                cout << "Addition: " << result;
                break;
            case 3:
                result = num1 - num2;
                cout << "subtraction: " << result;
                break;
            case 4:
                result = num1 % num2;
                cout << "modulus: " << result;
                break;
            case 5:
                result = num1 / num2;
                cout << "division: " << result;
                break;
            case 6:
                result = num1 * num2;
                cout << "multiplication: " << result;
                break;
            default:
                cout << "Invalid choice\n";
            }
        }
        ~arithmetic_operations() {}
};
/**
 * @brief The main function prompts the user for two integers and an operation choice,
 * then creates an instance of the arithmetic_operations class and calls the switchcase method.
 * @return int
 */
int main()
{
    int m_num1, m_num2, m_operation;
    cout << "Enter two integers num1 and num2:" << endl;
    cin >> m_num1 >> m_num2;
    cout << "Enter your operation of artimatic operation (1-6):" << endl;
    cin >> m_operation;
    arithmetic_operations obj_arithmetic_operations(m_num1, m_num2, m_operation);
    obj_arithmetic_operations.switchcase();
    return 0;
}

