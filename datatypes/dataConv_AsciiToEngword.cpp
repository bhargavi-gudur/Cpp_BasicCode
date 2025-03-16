/**
 * @file dataConv_AsciiToEngword.cpp
 * @author gandla bhargavi
 * @brief  this program is to convert ascii value to english character.
 * @version 0.1
 * @date 2025-03-02
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
using namespace std;
// function declaration
void ascii_engWord();
void ascii_loopengWord();
/**
 * @brief main function
 *
 * @return int
 */
int main()
{
    cout << "-----------------ascii to english character-----------------" << endl;
    void Engword_ASCIIval();
    cout << "-----------------ascii to english character using loop-----------------" << endl;
    asciiToEngchar_conv();

    return 0;
}
void Engword_ASCIIval()
{
    int i1, i2, i3, i4, i5;
    cout << "enter 5 characters:" << endl;
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    cout << "ascii value to english character:" << endl;

    cout << char(i1) << char(i2) << char(i3) << char(i4) << char(i5) << endl;
}
void asciiToEngchar_conv()
{
    int i, arr[5], size = 5;
    cout << "enter 5 characters:" << endl;

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "ascii value to english character:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << char(arr[i]);
    }

    cout << endl;
}
