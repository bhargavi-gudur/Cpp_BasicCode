/**
 * @file copyConstructor.cpp
 * @author gandla bhargavi
 * @brief 
 * @version 0.1
 * @date 2025-02-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
using namespace std;
class a
{
public:
    int x, y;
    a()
    {
        cout << "constructor created deafult obja " << endl;
    }
    a(int a, int b)
    {
        cout << "constructor created parameterised  objb " << endl;
        cout << "a:" << a << "b:" << b << endl;
        x = a;
        y = b;
    }
    a(a &objcopy)
    {
        cout << "Copy constructor called" << endl;
        x = objcopy.x;
        y = objcopy.y;
    }
};
int main()
{
    a obja;
    cout << "In Main" << endl;
    a objb(5, 6);
    cout << "x:" << objb.x << "y:" << objb.y << endl;
    a objc(objb);
    cout << "x:" << objc.x << "y:" << objc.y << endl;
    return 0;
}