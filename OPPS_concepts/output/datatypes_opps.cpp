/**
 * @file datatypes_opps.cpp
 * @author Gandla bhargavi
 * @brief This is a simple C++ program designed to help beginners understand,
 *  the concept of datatypes in C++.
 * It covers basic C++ concepts like classes, objects, and member functions.
 * passing parameters to the member functions ,default constructor and destructor.
 * @version 0.1
 * @date 2025-02-25
 *
 * @copyright Copyright (c) 2025
 *
 */
/* datatypes_opps.cpp method1 */
#include <iostream>

using namespace std;

class datatype
{
private:
    int datatype_int_var;
    float datatype_float_var;
    double datatype_double_var;

public:
    datatype() : datatype_int_var(0), datatype_float_var(0.0), datatype_double_var(0.0) {}
    void datatype_fun();
    void datatype_fun(int integer, float floated, double doubled);
    void display_sizes();
    ~datatype() {}
};

void datatype::datatype_fun()
{
    datatype_int_var = 78;
    datatype_float_var = 3.455544f;
    datatype_double_var = 32.567622232;
}
void datatype::display_sizes()
{
    cout << "Size of int: " << sizeof(datatype_int_var) << " bytes" << endl;
    cout << "Size of float: " << sizeof(datatype_float_var) << " bytes" << endl;
    cout << "Size of double: " << sizeof(datatype_double_var) << " bytes" << endl;
}
void datatype::datatype_fun(int integer, float floated, double doubled)
{

    datatype_int_var = integer;
    datatype_float_var = floated;
    datatype_double_var = doubled;

    cout << "Size of int: " << sizeof(datatype_int_var) << " bytes" << endl;
    cout << "Size of float: " << sizeof(datatype_float_var) << " bytes" << endl;
    cout << "Size of double: " << sizeof(datatype_double_var) << " bytes" << endl;
}

int main()
{
    datatype objDatatype;

    cout << "-----------------Datatypes-----------------" << endl;
    cout << "Datatypes with default constructor  values:" << endl;
    objDatatype.datatype_fun();
    objDatatype.display_sizes();
    cout << "----------------------------------" << endl;
    cout << "datatypes with parameterized constructor values:" << endl;
    objDatatype.datatype_fun(1234, 3.455544f, 32.567622232);
    cout << "----------------------------------" << endl;

    return 0;
}
