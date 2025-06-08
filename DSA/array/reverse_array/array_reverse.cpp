/**
 * @file array_reverse.cpp
 * @author gandla bhargavi
 * @brief  To reverse the given array numbers and print the reversed array.
 * @bhargavi-gudur
 * @note hackerrank problem solution easy level.
 * @version 0.1
 * @date 2025-03-11
 *
 */

#include <iostream>

using namespace std;

void reverse_num(); // function declaration
/**
 * @brief main function to call reverse_num function
 *
 * @return int
 */
int main()
{
    reverse_num();
    return 0;
}
/**
 * @brief function to reverse the given array numbers and print the reversed array.
 *
 */
void reverse_num()
{
    int i, n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    // for loop to take input from user
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The reversed array is: " << endl;
    // for loop to print the reversed array
    for (i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}