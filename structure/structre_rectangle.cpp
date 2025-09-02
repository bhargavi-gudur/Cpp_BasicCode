/**
 * @file structre_rectangle.cpp
 * @author Gandla Bhargavi
 * @brief  This program demonstrates the use of structures in C++.
 * It defines a rectangle structure and shows how to pass it to functions by reference and return it from a function.
 * @version 0.1
 * @date 2025-03-30
 * 
 */

#include <iostream>
using namespace std;
/**
 * @brief   This structure represents a rectangle with length and breadth.
 * 
 */
struct rectangle
{
    int length;
    int breadth;
};
/**
 * @brief   This function takes a pointer to a rectangle structure and modifies its values.
 * 
 * @param p Pointer to a rectangle structure.
 */
void fun(struct rectangle *p)
{
    *p = {150, 15};
    cout << "_________________________________________" << endl;
    cout << "function -> " << p->length << ", " << p->breadth << endl;
    cout << "address of   function " << p << endl;
    cout << "_________________________________________" << endl;
}
/**
 * @brief   This function demonstrates the use of structures in C++.
 * 
 */
void structure()
{
    struct rectangle r = {10, 5};
    cout << "_________________________________________" << endl;
    cout << "structre function -> " << r.length << ", " << r.breadth << endl;
    cout << "address of  structre function " << &r << endl;

    cout << " --------------after--------------" << endl;
    fun(&r);
    cout << "structre function -> " << r.length << ", " << r.breadth << endl;
    cout << "address of  structre function " << &r << endl;
    cout << "_________________________________________" << endl;
}
/**
 * @brief   This function returns a pointer to a dynamically allocated rectangle structure.
 * 
 * @return struct rectangle* Pointer to a dynamically allocated rectangle structure.
 */
struct rectangle *fun1()
{
    struct rectangle *ptr1 = new rectangle;
    ptr1->length = 890;
    ptr1->breadth = 90;
    return ptr1;
}
/**
 * @brief   The main function demonstrates the use of structures and function pointers.
 * 
 * @return int Returns 0 on successful execution.
 */
int main()
{
    structure();
    struct rectangle *ptr1 = fun1();
    cout << "function pointer-> " << ptr1->length << ", " << ptr1->breadth << endl;
    delete ptr1;
    return 0;
}
