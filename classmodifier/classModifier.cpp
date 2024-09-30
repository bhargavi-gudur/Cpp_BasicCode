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
 * @brief  area of circle class 
 * 
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
 * @return int 
 */
int main()
{
    areaofcircle objareaofcircle(9.8);
    cout<<"radius of circle "<<objareaofcircle.radius<<endl;
    cout<<"radius of circle "<<objareaofcircle.areaofcircle_fun()<<endl;
    return 0;
}
