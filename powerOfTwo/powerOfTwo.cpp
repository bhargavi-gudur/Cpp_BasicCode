/**
 *@file powerOfTwo.cpp
 * @author Gandla Bhargavi
 * @brief program to check the given number is power of two or not.
 * @version 0.1
 * @date 2025-02-23
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using namespace std;

void bit_poweroftwo();
bool loop_poweroftwo();

/**
 *@brief main function to check the given number is power of two or not.
 *
 * @return int
 */
int main()
{

    bit_poweroftwo();
    loop_poweroftwo();
    return 0;
}
/**
 *@brief bit_poweroftwo function to check the given number is power of two or not.
 *
 */
void bit_poweroftwo()
{
    int value = 23;
    //(n>0)&&(n&(n−1))==0


    if ((value > 0) && ((value & (value - 1)) == 0))
        cout << "power two " << endl;
    else
        cout << "not power of two" << endl;

}
/**
 *@brief loop_poweroftwo function to check the given number is power of two or not.
 *
 * @return true
 * @return false
 */
bool loop_poweroftwo()
{
    int value = 23;
    if (value <= 0)
    {
        cout << "it not 2 power number" << endl;
        return false;
    }
    while (value % 2 == 0)
    {
        value /= 2;
    }
    if (value == 1)
    {
        std::cout << "It is a power of 2\n";
    }
    else
    {
        std::cout << "It is NOT a power of 2\n";
    }
    return true;
}

