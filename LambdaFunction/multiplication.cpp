/**
 * @file multiplication.cpp
 * @author GandlaBhargavi
 * @brief This program demonstrates the use of a lambda function to perform multiplication.
 * @details The program defines a lambda function that takes two integers as input and returns their product.
 * @version 0.1
 * @date 2025-03-31
 * 
 */

#include <iostream>
using namespace std;
/**
 * @brief  This function demonstrates the use of a lambda function to perform multiplication.
 * 
 */
void basicMul()
{
    int A, B;
    auto mul = [&A, &B](int a, int b)
    { return a * b; };
    cout << mul(6, 89);
}
/**
 * @brief  The main function that calls the basicMul function.
 * 
 * @return int 
 */
int main()
{
    basicMul();
    return 0;
}
