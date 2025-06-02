/**
 * @file math_equ.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-02-20
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
void function(); // function prototype
/**
 * @brief  main function
 * 
 * @return int 
 */
int main()
{
    double x = 1 + 2 * 3;
    std::cout << " x: " << x << std::endl;
    function();

    return 0;
}
/**
 * @brief  function to calculate the value of z
 * 
 */
void function()
{
    float z;
    int x =35;
    int y = 12;
    z = (x + 10) / (3*y);
    std::cout << "z: " << z << std::endl;
}