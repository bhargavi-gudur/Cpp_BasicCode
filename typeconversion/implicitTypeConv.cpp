/**
 * @file implicitTypeConv.cpp
 * @author GandlaBhargavi
 * @brief to demostrate the implicit type conversion .
 * @version 0.1
 * @date 2025-03-21
 *
 */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
/**
 * @brief  class of typeconversion
 *
 */
class typeconversion
{
protected:
    int integer;
    char character;

public:
    typeconversion(int xint, char ychar)
    {
        integer = xint;
        character = ychar;
    }
    void implicitTypeConv()
    {
        int sum = 0;
        sum = character + integer;
        cout << " sum :" << sum << endl;
        cout << "ascii alphatic number:" << char(sum) << endl;
    }

    ~typeconversion()
    {
        cout << " Destructor for base typeconversion" << endl;
    }
};
class derived_typeConversion : public typeconversion
{
private:
    float floating;

public:
    derived_typeConversion(int xint, char ychar) : typeconversion(xint, ychar)
     {
         floating = 0;
     }
    void implicitTypeConv_2()
    {
        floating = integer + 1.0;
        
        cout << "integer = " << integer << endl
             << "character = " << character << endl
             << "floating = " << floating<<endl;
    }
    ~derived_typeConversion()
    {
        cout << " Destructor for derived typeconversion" << endl;
    }
};
/**
 * @brief main function create object to access methods
 * in class typeconversion.
 *
 * @return int
 */
int main()
{
    int x;
    char ch;
    cout << "enter the integer : " << endl;
    cin >> x;
    cout << "enter the character : " << endl;
    cin >> ch;

    typeconversion objtypeconvImplicit(x, ch);
    objtypeconvImplicit.implicitTypeConv();

    derived_typeConversion objtypeconvImplicit_derived(x, ch);
    objtypeconvImplicit_derived.implicitTypeConv();
    objtypeconvImplicit_derived.implicitTypeConv_2();

    return 0;
}