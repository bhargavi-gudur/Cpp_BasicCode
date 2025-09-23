/**
 * @file reference.cpp
 * @author gandla bhargavi
 * @brief The provided code demonstrates the * concept of references in C++.
 * @version 0.1
 * @date 2025-03-14
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief this  function  use of references in C++ by showing
 *  how they behave like aliases for variables.
 *
 */
void reference()
{
    int a = 10;
    int &r = a; /*reference created need to initization ,
    later cannot change once assigned name.*/

    cout << "a: " << a << " r:" << r << endl;
    r++;
    cout << "a: " << a << " r:" << r << endl;
    a++;
    cout << "a: " << a << " r:" << r << endl;
    int b = 87;
    r = b;
    cout << "a: " << a << " r:" << r << endl;
}
void callByReference(int &ref)
{
  cout<<"Value before modification: "<<ref<<endl;
  ref=100;
  cout<<"Value after modification: "<<ref<<endl;
}
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    int value_call_reference = 45;
    cout << "**********************************" << endl;
    callByReference(value_call_reference);
    cout << "**********************************" << endl;
    reference();
    cout << "**********************************" << endl;
    return 0;
}
