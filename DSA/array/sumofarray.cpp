/**
 * @file sumofarray.cpp
 * @author Gandla Bhargavi
 * @brief Program to calculate the sum of the product of 
 * all pairs in an array .
 * @version 0.1
 * @date 2025-03-23
 */
#include <iostream>
using namespace std;

void sumofproduct_pairs(); // function declaration
/**
 * @brief  main function  calling sumofproduct_pairs
 *
 * @return int
 */
int main()
{
    sumofproduct_pairs();
    return 0;
}
/**
 * @brief the sum of the product of
 * all pairs in an array .
 *
 */
void sumofproduct_pairs()
{
    int data[] = {10, 1, 2, 3, 6};
    int size = ((sizeof(data)) / sizeof(data[0]));
    int total = 0;
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            total += data[i] * data[j];
            cout << i << " " << total << " ";
            cout << endl;
        }
    }
    cout << "total :" << total << endl;
}