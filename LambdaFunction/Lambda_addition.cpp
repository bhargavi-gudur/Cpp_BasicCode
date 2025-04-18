/**
 * @file Lambda_addition.cpp
 * @author Gandla Bhargavi
 * @brief This program demonstrates the use of a lambda function to perform addition.
 * @version 0.1
 * @date 2025-03-31
 *
 */
#include <iostream>
using namespace std;
/**
 * @brief  This function demonstrates the use of a lambda function to perform addition.
 * 
 */
void add()
{
    auto add = [](int a, int b)
    { return a + b; };
    cout << add(3, 4) << endl;
}
/**
 * @brief  The main function calls the add function to demonstrate the use of a lambda function.
 * 
 * @return int 
 */
int main()
{
    add();
    return 0;
}
