/**
 *@file structure_areaRectangle.cpp
 * @author gandla bhargavi
 * @brief This program is to calculate the area of rectangle using structure
 * @version 0.1
 * @date 2025-03-09
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
void rectangle_fun();

/**
 * @brief structure is a user defined data type which is used to store the different type of data types
 * in a single unit.
 *
 */
struct rectangle
{
    int lenght;
    float breadth;
    // float width;

} r{13, 5.6f}; // definition of the stucture
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    rectangle_fun();
    return 0;
}
/**
 * @brief  This function is used to calculate the area of rectangle
 *  using structure .
 *
 */
void rectangle_fun()
{
    // struct rectangle r; //declaration
    // struct rectangle r{10,5.6f};
    float area;
    area = float(r.lenght) * r.breadth;
    cout << "area of rectangle: " << area <<endl;
    cout<<"size of structure: "<<sizeof(r)<<endl;
    cout<<"size of structure: "<<sizeof(rectangle)<<endl;
    cout<<"size of lenght structure: "<<sizeof(r.lenght)<<endl;
    cout<<"size of breadth structure: "<<sizeof(r.breadth)<<endl;
    
}