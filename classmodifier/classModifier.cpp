/**
 * @file classModifier.cpp
 * @author gandla bhargavi
 * @brief area of circle using class and object ,
 *  access modifier to access the value.
 * @version 0.1
 * @date 2024-09-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<iostream>
using namespace std;

/**
 * @brief  area of circle class to access the radius and area of circle function
 * @class areaofcircle
 * @details  class is a user-defined data type that represents a blueprint for
 * creating objects.
 * It encapsulates data members (attributes) and member functions
 * (methods) that operate on the data.
 */
class areaofcircle{
    public:
    double radius;
     areaofcircle(double rad) : radius(rad) {}
    double areaofcircle_fun()
    {     
        return 3.14* radius*radius;
    }
    ~areaofcircle(){}
};
/**
 * @brief main function created objected and access area of circle class
 *
 * 
 * @return int 
 */
int main()
{
    areaofcircle objareaofcircle(9.8);
    cout<<"radius of circle "<<objareaofcircle.radius<<endl;
    cout<<"radius of circle "<<objareaofcircle.areaofcircle_fun()<<endl;
    return 0;
}
