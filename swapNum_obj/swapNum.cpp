/**
 * @file swapNum.cpp
 * @author Gandla Bhargavi
 * @brief
 * @version 0.1
 * @date 2024-11-01
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief
 *
 */
class swapnum
{
private:
    vector<int> num1;
    vector<int> num2;

public:
    swapnum();
    void swapnum_method();
    ~swapnum(){}
};
/**
 * @brief Construct a new swapnum::swapnum object
 *
 */
swapnum::swapnum()
{ // Initialize vectors with example values
    num1 = {1, 2, 3};
    num2 = {4, 5, 6};
}
/**
 * @brief
 *
 */
void swapnum::swapnum_method()
{
    // Print before swap
    cout << "Before swap:" << endl;
    cout << "num1: ";
    for (int n : num1)
        cout << n << " ";
    cout << endl;
    cout << "num2: ";
    for (int n : num2)
        cout << n << " ";
    cout << endl;
    // Swap contents of num1 and num2
    num1.swap(num2);
    // Print after swap
    cout << "After swap:" << endl;
    cout << "num1: ";
    for (int n : num1)
        cout << n << " ";
    cout << endl;
    cout << "num2: ";
    for (int n : num2)
        cout << n << " ";
    cout << endl;
}
/**
 * @brief
 *
 * @return int
 */
int main()
{
    swapnum objswapnum;
    objswapnum.swapnum_method();

    return 0;
}