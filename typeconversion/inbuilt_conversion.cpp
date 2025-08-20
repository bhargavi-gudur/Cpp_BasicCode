/**
 * @file inbuilt_conversion.cpp
 * @author gandla bhargavi
 * @brief This program demonstrates various type conversions in C++,
 * including inbuilt type casting, static_cast, and range-based loops.
 * @version 0.1
 * @date 2025-08-20
 * 
 */

#include <iostream>
#include <array>

using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::static_pointer_cast;

array<int, 5> arrayvar = {2, 5, 6, 7, 8};
/**
 * @brief This function demonstrates inbuilt type casting
 * from char to int.
 * It takes a pointer to a char, casts it to an int,
 * @param c
 */
void inbuilttypecasting(char *c)
{
    int castedValue = (int)(*c);
    cout << "Inbuilt Type Casting: char '" << *c << "' to int: " << castedValue << endl;
}
/**
 * @brief This function demonstrates the use of static_cast
 *  to convert a char to an int, and then calls a nested function
 * to perform further operations on the casted value.
 *
 * @param castedValue
 */
void nestedFunction(int castedValue)
{
    cout << "Nested Function: Received casted value: " << castedValue << endl;
    cout << "Nested Function: Square of the value: " << castedValue * castedValue << endl;
}
/**
 * @brief This function demonstrates the use of static_cast 
 * to convert a char to an int, and then calls a nested function
 * to perform further operations on the casted value.
 *
 * @param c
 */
void operatorCast(char *c)
{

    int castedValue = static_cast<int>(*c);
    cout << "Static_cast Type Casting: char '" << *c << "' to int: " << castedValue << endl;
    nestedFunction(castedValue);
}
/**
 * @brief This function demonstrates the use of static_cast 
 * to convert an integer to a double.
 * 
 */
void staticCnst()
{
    int n = 10;
    double staticcast = static_cast<double>(n);
    cout << " static casting operator conversion " << endl;
    cout << staticcast << endl;
    cout << typeid(n).name() << endl;
    cout << typeid(static_cast<double>(n)).name() << endl;
    cout << typeid(staticcast).name() << endl;
}
/**
 * @brief This function demonstrates the use of a range-based for loop
 * to iterate over an array of integers.
 *
 */
void range_basedloop()
{

    cout << " range based for loop :" << endl;
    for (auto arr : arrayvar) // range based for variable
    {
        cout << arr << " ";
    }
    cout << endl;
}
/**
 * @brief This function demonstrates the use of a range-based for loop
 * to iterate over an array of integers and perform a static_cast
 * to convert each integer to a double.
 *
 */
void rangebased_staticcast()
{

    cout << "range based for loop  and static :" << endl;
    array<double, 5> staticcast_arr;
    for (size_t i = 0; i < arrayvar.size(); ++i)
    {
        staticcast_arr[i] = static_cast<double>(arrayvar[i]);
    }
    for (auto arr : staticcast_arr) // range based for variable
    {
        cout << typeid(arr).name() << " " << arr << " ";
    }
    cout << endl;
}
/**
 * @brief main function calling the type conversion functions.
 * @details This function initializes a char variable,
 * and calls various type conversion functions to demonstrate their 
 * usage. 
 * It performs inbuilt type casting, operator casting,
 * static casting, and range-based loops.   
 * 
 * @return int
 */
int main()
{

    char c = 'a'; 
    inbuilttypecasting(&c);
    operatorCast(&c);
    staticCnst();
    rangebased_staticcast();
    range_basedloop();
    return 0;
}
