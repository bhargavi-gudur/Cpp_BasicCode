/**
 * @file bitwise.cpp
 * @author Gandla Bhargavi
 * @brief Demonstrates the use of bitwise operators in C++.
 * @version 0.1
 * @date 2024-10-05
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;

void bitwiseOperator();

/**
 * @brief Calls bitwiseOperator() and exits.
 *
 * @return int
 */
int main()
{
    bitwiseOperator();
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
}
