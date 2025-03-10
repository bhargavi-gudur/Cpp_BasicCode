/**
 * @file cyclicSwap.cpp
 * @author Gandla Bhargavi
 * @brief a C++ program that demonstrates cyclic swapping of three numbers
 * using pointers.
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using namespace std;

/* declaration function */
void CyclicSwapping(int *a, int *b, int *c);
void displayinfo();

/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    displayinfo(); // calling function;
    return 0;
}

/**
 * @brief cyclic swapping of three numbers using pointers.
 *
 * @param a
 * @param b
 * @param c
 */
void CyclicSwapping(int *a, int *b, int *c) /* defintion function*/
{
    int temp;
    cout << "cyclic swapping:" << endl;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
/**
 * @brief display the information
 *
 */
void displayinfo() /* defintion function*/
{
    int a, b, c;
    cout << "enter the values of a,b,c :" << endl;
    cin >> a >> b >> c;
    cout << " before swapping the values: " << endl;
    cout << " a:" << a << " b:" << b << " c:" << c << endl;
    CyclicSwapping(&a, &b, &c);
    cout << " before swapping the values: " << endl;
    cout << " a:" << a << " b:" << b << " c:" << c << endl;
}