/**
 *@file reverse_integer.cpp
 * @author Gandla Bhargavi
 * @brief 
 * @version 0.1
 * @date 2025-02-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>

using namespace std;

void reverseofIntegers();
void for_reverseofIntegers();

int main()
{
    cout << "---------------------------------" << endl;
    cout << "while loop:" << endl;
    reverseofIntegers();
    cout<<"---------------------------------"<<endl;
    cout << "for loop" << endl;
    for_reverseofIntegers();
    cout << "---------------------------------" << endl;
    return 0;
}

void reverseofIntegers()
{
    int value = 876;
    int reverse = 0;
    while (value > 0)
    {
        reverse = reverse * 10 + value % 10;
        value = value / 10;
        cout<<"inside loop"<<endl;
        cout << "value : " << value << "\treverse number : " << reverse << endl;
    }
    cout << "outside loop" << endl;
    cout << "value : " << value << "\treverse number : " << reverse << endl;
}

void for_reverseofIntegers()
{
    int value = 876;
    int reverse = 0;
    while (value > 0)
    {
        reverse = reverse * 10 + value % 10;
        value = value / 10;
        cout << "inside loop" << endl;
        cout << "value : " << value << "\treverse number : " << reverse << endl;
    }
    cout << "outside loop" << endl;
    cout << "value : " << value << "\treverse number : " << reverse << endl;
}
