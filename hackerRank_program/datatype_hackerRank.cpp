/**
 * @file datatye_hackerrank.cpp
 * @author gandla bhargavi
 * @brief  this program different data types .
 * this problem from hackerrank question.
 * diffcult level is easy.
 * @version 0.1
 * @date 2025-03-02
 *
 *
 */
#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
void data_type();
int main()
{
    data_type();
    return 0;
}
void data_type()
{
    int a = 0;
    long b = 0.0l;
    char ch;
    float d = 0.0f;
    double e = 0.0;

    cin >> a;
    cin >> b;
    cin >> ch;
    cin >> d;
    cin >> e;
    cout << fixed << setprecision(6);
    cout << a << endl;
    cout << b << endl;
    cout << ch << endl;
    cout << d << endl;
    cout << e << endl;
}