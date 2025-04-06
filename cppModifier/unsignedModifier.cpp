/**
 * @file modifier.cpp
 * @author gandla bhargavi
 * @brief unsigned modifiers are the keywords used to change or give extra
 *  meaning  to already existing data types .
 *   to demostrate sample program  modifiers.
 *
 * @version 0.1
 * @date 2025-03-19
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std ::endl;

void unsignedmodifier();
/**
 * @brief main function  calling  unsigned modifier function.
 *
 * @return int
 */
int main()
{
    unsignedmodifier();
    return 0;
}
/**
 * @brief  this function check unsigned integer
 * Printing the size of normal and signed int.
 */
void unsignedmodifier()
{
    unsigned int integer = 98;
    int integer2 = 900;
    unsigned int integer3 = -98;
    int integer4 = -900;
    unsigned char character = 'a';
    char character2 = 'b';
    cout << "----------------------display values--------------------------------------" << endl;
    cout << "Value of unsigned int integer: " << integer << endl;
    cout << "Value of int integer2: " << integer2 << endl;
    cout << "Value of unsigned int integer3 (with negative assignment): " << integer3 << endl;
    cout << "Value of int integer4: " << integer4 << endl;
    cout << "Value of unsigned char character: " << character << " (" << (int)character << ")" << endl;
    cout << "Value of char character2: " << character2 << " (" << (int)character2 << ")" << endl
         << endl;

    cout << "----------------------display address ------------------------------------" << endl;
    cout << "\nSizes of data types and variables:" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of integer: " << sizeof(integer) << " bytes" << endl;
    cout << "Size of integer2: " << sizeof(integer2) << " bytes" << endl;
    cout << "Size of integer3: " << sizeof(integer3) << " bytes" << endl;
    cout << "Size of integer4: " << sizeof(integer4) << " bytes" << endl;
    cout << "Size of character: " << sizeof(character) << " byte" << endl;
    cout << "Size of character2: " << sizeof(character2) << " byte" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
}