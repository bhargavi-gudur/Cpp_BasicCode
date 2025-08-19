/**
 * @file swap_class_obj.cpp
 * @author  Gandla Bhargavi
 * @brief  This program demonstrates the concept of swapping
 *  two numbers using a class and object in
 * @version 0.1
 * @date 2025-07-06
 *
 */

#include <iostream>
using namespace std;
/**
 * @brief  This class is used to swap two numbers using a class and object.
 *  It contains a constructor to initialize the numbers,
 *  a method to swap the numbers, and a destructor. 
 */
class swap_numbers
{
private:
    int a, b;

public:
    swap_numbers(int swap_a, int swap_b) : a(swap_a), b(swap_b) {}
    void swap_num();

    ~swap_numbers() {}
};
/**
 * @brief  This method swaps the two numbers using arithmetic operations.
 *  It prints the values of the numbers before and after swapping.
 */
void swap_numbers::swap_num()
{
    cout << "before swapping" << endl;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "after swapping" << endl;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
}
/**
 * @brief  The main function creates an object of the swap_numbers class
 *  and calls the swap_num method to swap the numbers.
 * @return int
 */
int main()
{
    swap_numbers obj_swap_numbers(5, 7);

    obj_swap_numbers.swap_num();
    return 0;
}