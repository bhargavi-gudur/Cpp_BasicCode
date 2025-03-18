/**
 * @file userdefined.cpp
 * @author GandlaBhargavi
 * @brief to demostrate typedef and using sample c++ code .
 * with oops concept .
 * user defined data-type.
 * @version 0.1
 * @date 2025-03-17
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>

typedef float float_4bytes;
using char_1byte = char;
using int_4byte = int;
using std::cin;
using std::cout;
using std::endl;

/**
 * @brief 
 * 
 */
class userdefinedDT
{
private:
    float_4bytes y;
    char_1byte ch;
    int_4byte x;

public:
    userdefinedDT(int_4byte integer, char_1byte character, float_4bytes floating) : x(integer), ch(character), y(floating) {}
    void display_userdefinedDT()
    {
        // x =10;
        // y=12;
        // ch ='a';
        cout << "x:" << x << endl;
        cout << "ch:" << ch << endl;
        cout << "y:" << y << endl;
    }
    ~userdefinedDT() {}
};
/**
 * @brief 
 * 
 * @return int_4byte 
 */
int_4byte main()
{

    int_4byte myInt = 192;
    char_1byte myChar = 'a';
    float_4bytes myFloat = 99;
    userdefinedDT objuserdefinedDT(myInt, myChar, myFloat);
    objuserdefinedDT.display_userdefinedDT();

    return 0;
}