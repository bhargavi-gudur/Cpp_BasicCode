/**
 * @file DTMacro.cpp
 * @author gandla bhargavi
 * @brief  data type ranges and their macros
 * @version 0.1
 * @date 2025-09-02

 */

#include <iostream>
#include <climits> //int ,char  macors
#include <cfloat>  //float ,double macros

const float FLOAT_MAX = FLT_MAX;
const float FLOAT_MIN = FLT_MIN;
using std::cout;
using std ::endl;

// Function prototype
void dataTypeMcros();

/**
 * @brief  data type ranges and their macros
 * @return int
 */
int main()
{

    dataTypeMcros();
    return 0;
}
/**
 * @brief  data type ranges and their macros
 *
 */
void dataTypeMcros()
{
    cout << "char ranges from: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "int ranges from: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "FLOAT ranges from: " << FLOAT_MAX << " to " << FLOAT_MIN << endl;
    cout << "LONG ranges from: " << LONG_MIN << " to " << LONG_MAX << endl;
}