/**
 * @file DTMacro.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2025-03-18
 * 
 * @copyright Copyright (c) 2025
 * 
 */
/** data type ranges and their macros in c++*/
#include <iostream>
#include <climits> //int ,char  macors
#include <cfloat>  //float ,double macros

const float FLOAT_MAX = FLT_MAX;
const float FLOAT_MIN = FLT_MIN;
using std::cout;
using std ::endl;

void dataTypeMcros();
/**
 * @brief 
 * 
 * @return int 
 */
int main()
{

    dataTypeMcros();
    return 0;
}
/**
 * @brief 
 * 
 */
void dataTypeMcros()
{
    cout << "char ranges from: " << CHAR_MIN << " to " << CHAR_MAX << endl;
    cout << "int ranges from: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "FLOAT ranges from: " << FLOAT_MAX << " to " << FLOAT_MIN << endl;
    cout << "LONG ranges from: " << LONG_MIN << " to " << LONG_MAX << endl;
}