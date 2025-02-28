/**
 * @file prime_num_inBtw.cpp
 * @author gandla bhargavi
 * @brief To find the prime numbers between the given interval
 * 
 * @version 0.1
 * @date 2025-02-28
 *
 * @copyright Copyright (c) 2025
 *
 */
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void isprime_inbwInterval();
void swap(int *low, int *high);

int main()
{

    isprime_inbwInterval();
    return 0;
}

void isprime_inbwInterval()
{
    int i, low_val, high_val, is_prime;
    cout << "enter the value of low and high value :" << endl;
    cin >> low_val >> high_val;
    cout << "\nPrime numbers between " << low_val << " and " << high_val << " are: " << endl;
    if (low_val > high_val)
    {
        swap(&low_val, &high_val);
    }
    // prime number logic using while loop
    while (low_val < high_val)
    {
        is_prime = true;

        if (low_val == 0 || low_val == 1)
        {
            cout << "0 and 1 are not prime numbers : " << low_val << endl;
            is_prime = false;
        }
        for (i = 2; i <= low_val / 2; ++i)
        {
            if (low_val % i == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << low_val << ", ";
        }

        ++low_val;
    }
}
void swap(int *low, int *high)
{
    int temp;

    temp = (*low) + (*high);
    *low = temp - (*low);
    *high = temp - (*low);

    cout << "low:" << *low << endl;
    cout << "high:" << *high << endl;
}