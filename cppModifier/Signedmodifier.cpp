/**
 * @file Signedmodifier.cpp
 * @author gandla bhargavi
 * @brief signed modifiers are the keywords used to change or give extra
 *  meaning  to already existing data types .
 *
 * to demostrate sample program  modifiers.
 *
 * @version 0.1
 * @date 2025-03-19
 *
 */

#include <iostream>

using std::cin;
using std::cout;
using std ::endl;

void signedmodifier();
/**
 * @brief main function  calling  modifier function.
 *
 * @return int
 */
int main()
{
    signedmodifier();
    return 0;
}
/**
 * @brief  this function check signed integer
 * Printing the size of normal and signed int.
 *
 *
 */
void signedmodifier()
{
    signed int integer = 98;
    int integer2 = 900;
    signed char character = 'a';
    char character2 = 'b';
    
    cout << "signed integer size : " << sizeof(integer) << " Bytes. " << endl;
    cout << "integer size: " << sizeof(integer2) << " Bytes. " << endl;
    cout << "signed character size : " << sizeof(character) << " Bytes. " << endl;
    cout << "character size: " << sizeof(character2) << " Bytes. " << endl;
}