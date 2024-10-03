/**
 * @file structure.cpp
 * @author  Gandla Bhargavi
 * @brief Demonstrates the use of structures in C++
 * @version 0.1
 * @date 2024-10-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
using namespace std;

/**
 * @brief Structure to represent the area of a circle
 *
 */
struct areaofcircle
{
    double radius;
    double area;
} circle;

/**
 * @brief Function to display the area and radius.
 *
 * @param a
 */
void areaofcircle_fun(areaofcircle &a)
{
    cout << "radius" << a.radius << endl;
    cout << "area" << a.area << endl;
}
/**
 * @brief Main function
 *
 * @return int
 */
int main()
{
    // areaofcircle circle;

    circle.radius = 2.3;
    circle.area = (3.14 * circle.radius * circle.radius);
    areaofcircle_fun(circle);
    return 0;
}
