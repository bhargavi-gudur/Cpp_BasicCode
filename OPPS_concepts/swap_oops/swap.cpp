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

class swap_numbers
{
private:
    int a, b;

public:
    swap_numbers(int swap_a, int swap_b) : a(swap_a), b(swap_b) {}
    void swap_num();

    ~swap_numbers() {}
};
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
int main()
{
    swap_numbers obj_swap_numbers(5, 7);

    obj_swap_numbers.swap_num();
    return 0;
}