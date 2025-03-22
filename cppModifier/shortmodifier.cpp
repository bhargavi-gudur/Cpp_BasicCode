/**
 * @file shortmodifier.cpp
 * @author gandla bhargavi
 * @brief to demostrate short modifier sample program.
 * @version 0.1
 * @date 2025-03-19
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

/**
 * @brief this function will Printing
 *  the size of short and normal ints.
 * @noreturn type
 */

void shortModifier()
{
     // Printing the size of short and normal ints
     cout << "short int size: " << sizeof(short int)
          << " bytes" << endl;
     cout << "int size: " << sizeof(int)
          << " bytes";
}
/**
 * @brief main function calling short modifier function,
 *
 * @return int
 */
int main()
{
     shortModifier();
     return 0;
}
