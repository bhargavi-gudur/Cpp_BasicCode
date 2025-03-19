#include <iostream>
using std ::cin;
using std::cout;
using std::endl;

void sumOfOddNum();
void swap();
template <class datatype>
void swapValues(datatype &a, datatype &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}
int main()
{
    sumOfOddNum();
    swap();
    return 0;
}
void sumOfOddNum()
{
    int sum = 0, num, temp = 1;
    cout << "enter the num in Between odd digits sum :" << endl;
    cin >> num;
    if (num <= 0)
    {
        cout << "Please enter a positive number!" << endl;
        return;
    }
    while (temp <= num)
    {
        sum += temp;
        temp += 2;
        cout << temp << " is: " << sum << endl;
    }
    cout << "sum of odd number from 1 to " << temp << " is: " << sum << endl;
}

void swap()
{

    int a = 9, b = 24;
    cout << a << "-" << b << endl;
    swapValues(a, b);
    cout << a << "-" << b << endl;

    char x = 'c', y = 'z';
    cout << x << "-" << y << endl;
    swapValues(x, y);
    cout << x << "-" << y << endl;
}