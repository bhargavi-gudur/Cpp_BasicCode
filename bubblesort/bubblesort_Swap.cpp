/**
 * @file bubblesort_Swap.cpp
 * @author Gandla Bhargavi
 * @brief bubble sort  using template and inbuilt function swap function.
 * @version 0.1
 * @date 2024-10-01
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
#include <algorithm>
using namespace std;
template <class bubblesort>
/**
 * @brief
 *
 * @param a
 * @param n
 */
void bubblesort_swap(bubblesort a[], int n)
{
    int i, j;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = (n - 1); j > i; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a[j], a[j - 1]);
            }
            cout << "a[j]: " << a[j] << endl;
        }
    }
}
/**
 * @brief
 *
 * @return int
 */
int main()
{
    int loop;
    int a[5];
    cout << " enter the array of number " << endl;
    for (loop = 0; loop < 5; loop++)
    {
        cin >> a[loop];
    }
    int n = (sizeof(a) / sizeof(a[0]));
    bubblesort_swap(a, n);

    cout << "sort of array" << endl;
    for (loop = 0; loop < n; loop++)
    {
        cout << a[loop] << endl;
    }

    return 0;
}
