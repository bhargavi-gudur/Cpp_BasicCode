
/**
 * @file switchCase.cpp
 * @author Gandla Bhargavi
 * @brief  program to perform arithmatic operations using switch case .
 * @version 0.1
 * @date 2025-03-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void arithOperSwitch();
/**
 * @brief  main function to call arithOperSwitch function
 * 
 * @return int 
 */
int main()
{
    arithOperSwitch();
    return 0;
}
/**
 * @brief function to perform arithmatic operations using switch case
 * 
 */
void arithOperSwitch()
{
    int num1, num2, temp = 0;
    char operator1;
    cout << "enter the arthimatic operator and enter num1 and num2 :" << endl;
    cin >> num1 >> operator1 >> num2;
    switch (operator1)
    {
    case '+':
        cout << "addition: " << num1 << operator1 << num2;
        temp = num1 + num2;
        cout << "is :" << temp << endl;
        break;

    case '-':
        cout << "sub: " << num1 << operator1 << num2;
        temp = num1 - num2;
        cout << " is :" << temp << endl;
        break;

    case '*':
        cout << "sub: " << num1 << operator1 << num2;
        temp = num1 * num2;
        cout << " is " << temp << endl;
        break;

    case '/':
        cout << "division: " << num1 << operator1 << num2;
        temp = float(num1) / float(num2);
        cout << " is: " << temp << endl;
        break;
    case '%':
        cout << "modolo: " << num1 << operator1 << num2;
        temp = (num1) % (num2);
        cout << " is: " << temp << endl;
        break;

    default:
        cout << "enter value is invalid operator " << endl;
        cout << num1 << operator1 << num2;
    }
}