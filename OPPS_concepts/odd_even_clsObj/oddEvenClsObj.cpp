/**
 * @file oddEvenClsObj.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2025-03-03
 *
 * @copyright Copyright (c) 2025
 *
 */

#include <iostream>
using namespace std;
class check_oddEvenAtIntervals
{
private:
    int number;

public:
    check_oddEvenAtIntervals(int num) : number(num) {}
    void oddEvenAtIntervals_method()
    {
        if (number <= 0)
        {
            cout << "user entered invalid number ' "<<number<<"' please,enter greater than zero. "<< endl;
        }
        else
        {
            for (int i = 1; i <= number; i++)
            {

                if (i % 2 == 0)
                {
                    cout << "even number: " << i << endl;
                }
                else
                {
                    cout << "odd number:" << i << endl;
                }
                cout << string(30, '_') << endl;
            }
        }
    }
    ~check_oddEvenAtIntervals() {}
};

int main()
{
    cout<<"-----------------odd and even numbers at intervals-----------------"<<endl;
    cout<<"enter the number to check odd and even numbers at intervals:"<<endl;
    int num;
    cin>>num;
    check_oddEvenAtIntervals objcheck_oddEvenAtIntervals(num);
    objcheck_oddEvenAtIntervals.oddEvenAtIntervals_method();
    return 0;
}