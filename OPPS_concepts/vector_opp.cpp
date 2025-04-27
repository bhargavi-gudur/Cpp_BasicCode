/**
 * @file vector_opp.cpp
 * @author Gandla Bhargavi
 * @brief This file demonstrates the use of vectors in C++.
 * It defines a vector of integers and provides functions to manipulate
 * @version 0.1
 * @date 2025-03-30
 *
 */

#include <iostream>
#include <vector>
using namespace std;
/**
 * @brief   This class demonstrates the use of vectors in C++.
 * It defines a vector of integers and provides functions to manipulate
 * and display its elements.
 *
 */

class vector_function
{
protected:
    vector<int> numbers = {3, 5, 6, 34, 78, 9, 7};

public:
    void vector_fun()
    {
        cout << " element at index 0 -> " << numbers.at(0) << endl;
        cout << " element at index 0 -> " << numbers.at(5) << endl;
        numbers.at(2) = 200;
        for (int i = 0; i < numbers.size(); i++)
        {
            numbers.at(6) = 100;
            cout << " |" << numbers.at(i) << "| ";
        }
        cout << " size of number -> " << sizeof(numbers) << endl;
    }
    ~vector_function()
    {

        cout << "destructor created for based aaddress" << endl;
    }
};

/**
 * @brief   This class demonstrates the use of vectors in C++.
 * It defines a vector of integers and provides functions to
 * manipulate and display its elements.
 *
 */
class derivedvector_function : public vector_function
{
public:
    void derivedvector_fun()
    {
        cout << "Accessing function from derived class:" << endl;
        vector_function::vector_fun();
    }
    ~derivedvector_function()
    {
        cout << "destructor created for derived aaddress" << endl;
    }
};
/**
 * @brief   This is the main function that creates objects of vector_function
 * and derivedvector_function classes.
 * It calls their respective functions to demonstrate the use of vectors in C++.
 *
 * @return int
 */
int main()
{
    vector_function objvector_function;
    derivedvector_function objderivedvector_function;
    objvector_function.vector_fun();
    objderivedvector_function.derivedvector_fun();
    return 0;
}
