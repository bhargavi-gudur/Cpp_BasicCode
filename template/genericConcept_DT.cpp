/**
 * @file genericConcept_DT.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-03-16
 *
 * @copyright Copyright (c) 2025
 *
 */
// Online C++ compiler to run C++ program online
#include <iostream>
#include <typeinfo>
using namespace std;

template <typename pointer>

/**
 * @brief
 *
 * @param ptr
 */
void pointer_variable(pointer ptr)
{
    cout << "Pointer Type: " << typeid(ptr).name() << endl;
    cout << "Value Pointed To: " << *ptr << endl;
    cout << "Address of Pointer: " << ptr << endl
         << endl;
    ptr = nullptr;
    cout << "after dellocating Address of Pointer: " << ptr << endl;
}
/**
 * @brief
 *
 * @return int
 */

int main()
{
    int integer = 9;
    float floating = 9.78f;
    char character = 'b';

    cout << "-------------------------" << endl;
    cout << "1.integer data type" << endl;
    pointer_variable(&integer);
    cout << "2.float data type" << endl;
    pointer_variable(&floating);
    cout << "3.character data type" << endl;
    pointer_variable(&character);
    cout << "-------------------------" << endl;
    
    return 0;
}