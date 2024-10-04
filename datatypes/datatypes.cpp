/**
 * @file datatypes.cpp
 * @author Gandla Bhargavi
 * @brief  this program different data types .
 *  It includes a parameterized constructor for initialization,
 *  methods for inputting and displaying values, and a destructor
 * @version 0.1
 * @date 2024-10-04
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
using namespace std;

/**
 * @brief  created class for datatypes
 *
 */
class datatypes
{
public:
    int integer;
    float floating;
    double doubletyp;
    // Parameterized constructor to initialize values
    datatypes(int intVal, float floatVal, double doubleVal)
        : integer(intVal), floating(floatVal), doubletyp(doubleVal) {}
    void inputs();  // methods
    void display(); // methods
    ~datatypes() {} // Cleans up resources
};
/**
 * @brief Prompts the user to input values for the data members.
 *
 */
void datatypes ::inputs()
{
    cout << "enter the integer :" << endl;
    cin >> integer;
    cout << "enter the floating :" << endl;
    cin >> floating;
    cout << "enter the double :" << endl;
    cin >> doubletyp;
}

/**
 * @brief Displays the values of the data members along with their sizes.
 *
 */
void datatypes ::display()
{
    cout << "enter the integer :" << integer << endl;
    cout << "size of integer: " << sizeof(integer) << endl;
    cout << "enter the floating :" << floating << endl;
    cout << "size of float: " << sizeof(floating) << endl;
    cout << "enter the double :" << doubletyp << endl;
    cout << "size of double: " << sizeof(double) << endl;
}
/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    datatypes objdatatypes(0, 0.0f, 0.0);
    objdatatypes.inputs();
    objdatatypes.display();
    return 0;
}
