/**
 * @file ReferenceVar.cpp
 * @author gandla bhargavi
 * @brief  Reference is an alias to a variable.
 * this  program explains how to use reference variable.
 *
 * @version 0.1
 * @date 2025-03-03
 *
 */
#include <iostream>
using namespace std;

void reference();
/**
 * @brief  main function calling reference function.
 * 
 * @return int 
 */
int main()
{
    reference();
    return 0;
}
/**
 * @brief Reference is an alias to a variable.
 *
 */
void reference()
{
    int x = 10;

    // Reference Derived Type
    // ref is a reference to x.
    int &ref = x;
    cout << "BEFORE reference :" << endl;
    // Value of x is now changed to 20
    ref = 20;
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    // Value of x is now changed to 30
    cout << "AFTER reference :" << endl;
    x = 30;
    cout << "ref = " << ref << endl;
    cout << "x = " << x << endl;
}
/**
 * @brief this program took from greek to geeks.
 * i have modified to function as a pass by value.
 */