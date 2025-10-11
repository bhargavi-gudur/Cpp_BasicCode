/**
 * @file bitwise.cpp
 * @author Gandla Bhargavi
 * @brief Demonstrates the use of bitwise operators in C++.
 * @version 0.1
 * @date 2024-10-05
 *
 */
#include <iostream>
using namespace std;

// Function prototypes
void bitwiseOperator();
void bitWiseShiftOperator();

/**
 * @brief Calls bitwiseOperator() and exits.
 *
 * @return int
 */
int main()
{
    bitwiseOperator();
    bitWiseShiftOperator();
    return 0;
}

/**
 * @brief Performs several bitwise operations (AND, OR, NAND, NOT, XOR)
 * and prints the results.
 *
 */
void bitwiseOperator()
{
    int andOpert = 9;
    int orOperat = 8;
    int NandOperat = 10;
    int NotOperat = 1;
    int XorOperat = 2;

    cout << "*************************" << endl;
    cout << "checking the bitwise operator work : " << endl;
    andOpert &= andOpert;
    cout << "andoperator:" << andOpert << endl;
    orOperat |= orOperat;
    cout << "or operator:" << orOperat << endl;
    NandOperat &= (~NandOperat);
    cout << "NAND operator:" << NandOperat << endl;
    NotOperat = ~NotOperat;
    cout << "NOT operator:" << NotOperat << endl;
    XorOperat ^= XorOperat;
    cout << "XOR operator:" << XorOperat << endl;
    cout << "****************************" << endl;
}
/**
 * @brief   Performs several bitwise shift operations (left shift , right shift)
 * and prints the results.
 *
 */
void bitWiseShiftOperator()
{
    int leftshift;
    int rightshift;
    int value = 6;
    cout << "checking the bitwise operator work : " << endl;

    leftshift = value << 1;
    cout << "left shift operator:" << leftshift << endl;
    rightshift = value >> 1;
    cout << "right shift operator:" << rightshift << endl;
    cout << "****************************" << endl;
}
