/**
 * @file constructorgeeks.cpp 
 * @brief  This program explains how to use constructor in c++. 
 * this geeks to geeks program. so modifcation done by me.
 * @version 0.1
 * @date 2025-03-06
 * 
 */
// C++ program to demonstrate a program which will throw an
// error
#include <iostream>
using namespace std;
/**
 * @brief 
 * 
 */
class myInteger
{
private:
    int value;

public:
    // parameterized constructor
    myInteger(int v)
    {
        value = v;
        cout << "consrtuctor called for value : " <<value<< endl;
    }
    void display();
    ~myInteger()
    {
        cout << "Destructor called"<< endl;
    }
};
// Member functions definitions including constructor
void myInteger::display()
{
    cout << " Value of integer is : " << value << endl;
}
/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
    myInteger objmyInteger(10);
    objmyInteger.display();
    return 0;
}
