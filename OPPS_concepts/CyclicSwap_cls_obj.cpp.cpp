/**
 * @file CyclicSwap_cls_obj.cpp.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-02-26
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>

using namespace std;

class CyclicSwapping
{
public:
    CyclicSwapping() {}
    void CyclicSwapping_method(int *a, int *b, int *c);
    void displayinfo();
    ~CyclicSwapping() {}
};

// defintion function
void CyclicSwapping::CyclicSwapping_method(int *a, int *b, int *c)
{
    int temp;
    cout << "cyclic swapping:" << endl;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}

void CyclicSwapping::displayinfo()
{
    int a, b, c;
    cout << "enter the values of a,b,c :" << endl;
    cin >> a >> b >> c;
    cout << " before swapping the values: " << endl;
    cout << " a:" << a << " b:" << b << " c:" << c << endl;
    CyclicSwapping_method(&a, &b, &c);
    cout << " before swapping the values: " << endl;
    cout << " a:" << a << " b:" << b << " c:" << c << endl;
}
int main()
{
    CyclicSwapping objCyclicSwapping;
    objCyclicSwapping.displayinfo();
    return 0;
}
