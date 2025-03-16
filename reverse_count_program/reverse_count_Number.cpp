/**
 * @file reverse_count_Number.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2025-03-07
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <iostream>
using namespace std;
extern "C"
{
    void reverseNum();
    void countTheNum();
}

class reverse
{
private:
public:
};

int main()
{
    cout << "********** reverse the number ************" << endl;
    reverseNum();
    cout << "********** the number of element using  count********" << endl;
    countTheNum();
    cout << "******************************************************" << endl;
    return 0;
}
void reverseNum()
{
    int num, revNum = 0;
    cout << "enter the number : " << endl;
    cin >> num;
    if (num < 0)
    { // Special case for 0
        num = (-1) * (num);
        cout << "The given number :" << num << endl;
    }

    while (num > 0)
    {
        int last_digit = num % 10;
        cout << "last:" << last_digit << " ,";
        revNum = (revNum * 10) + last_digit;
        // cout<<endl;
        // cout<<"rev:"<<revNum<<" ,";
        num /= 10;
    }
    cout << endl;
    cout << "reverse_num:" << revNum << endl;
}
void countTheNum()
{
    int num, count = 0;
    cout << "enter the number : " << endl;
    cin >> num;
    if (num < 0)
    { // Special case for 0
        num = (-1) * (num);
        cout << "The given number :" << num << endl;
    }

    while (num > 0)
    {
        num /= 10;
        count++;
    }
    cout << "the given number  count : " << count << endl;
}
