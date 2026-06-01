/**
 * @file bitwise.cpp
 * @author Gandla Bhargavi
 * @brief  this programm is to perform bitwise operator and
 *  bitwise shift operator using class in C++.
 * 
 * @version 0.2
 * @date 2024-10-05
 * @modified: by Gandla Bhargavi on 2026-05-30
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief a class to perform bitwise operator and bitwise shift operator.
 */
class bitwiseOperator
{
private:
    int opert;

public:
    bitwiseOperator(int operator_all) : opert(operator_all)
    {
        cout << "*************************" << endl;
        cout << "checking the bitwise operator work : " << endl;
        opert &= opert;
        cout << "andoperator:" << opert << endl;
        opert |= opert;
        cout << "or operator:" << opert << endl;
        opert &= (~opert);
        cout << "NAND operator:" << opert << endl;
        opert = ~opert;
        cout << "NOT operator:" << opert << endl;
        opert ^= opert;
        cout << "XOR operator:" << opert << endl;
        cout << "****************************" << endl;
    }
    ~bitwiseOperator() {}
};

/**
 * @brief   a class to perform bitwise shift operator.
 * 
 */
class bitWiseShiftOperator
{
private:
    int value;

public:
    bitWiseShiftOperator(int v) : value(v)
    {
        cout << "checking the bitwise operator work : " << endl;
        leftshift_fun(value);
        rigthshift_fun(value);
    }
    void leftshift_fun(int &v)
    {
        int leftshift;
        leftshift = value << 1;
        cout << "left shift operator:" << leftshift << endl;
    }
    void rigthshift_fun(int &v)
    {
        int rightshift;
        rightshift = value >> 1;
        cout << "right shift operator:" << rightshift << endl;
    }
    ~bitWiseShiftOperator() {}
};

/**
 * @brief The main function to demonstrate bitwise operations.
 *
 * @return int
 */
int main()
{
    int value{0};
    cout<<"enter the value to perform bitwise operations (and ,or,not ,xor, nand):" << endl;
    cin>>value;
    int operator_all{0};
    cout<<"enter the value to perform bitwise shift operation :" << endl;
    cin>>operator_all;

    bitwiseOperator objbitwiseOperator(operator_all);
    bitWiseShiftOperator objbitWiseShiftOperator(value);
    return 0;
}
