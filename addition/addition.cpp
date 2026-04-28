/**
 * @file addition.cpp
 * @author Gandla Bhargavi
 * @brief  a simple program to perform addition of two numbers using a class in C++.
 * @version 0.2
 * @date 2024-09-29
 * @modified: by Gandla Bhargavi on 2024-10-01
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/** @brief class for performing addition  */
class addition
{
    int result; // store the sum
    int x, y;   // store original values

public:
    // Constructor performs addition
    addition(int value1, int value2)
    {
        x = value1;
        y = value2;
        result = x + y;
    }
    // Function to display the result
    void display()
    {
        cout << "the addition of two number is :" << endl;
        cout << "x: " << x << "y: " << y << endl;
        cout << "result: " << result << endl;
    }
    // Destructor
    ~addition()
    {
        cout << "destructor is called" << endl;
    }
};

/**
 * @brief    main function we are calling the addition function .
 * @return int
 */

int main()
{
    int Xvalue = 0,
        int Yvalue = 0;
    int result = 0;

    cout << "enter the value of x and y" << endl;
    cin >> Xvalue >> Yvalue;

    addition add(Xvalue, Yvalue);
    add.display();
    return 0;
}
