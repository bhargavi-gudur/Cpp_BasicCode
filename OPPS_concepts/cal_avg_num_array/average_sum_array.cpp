/**
 * @file average_sum_array.cpp
 * @author Gandla bhargavi
 * @brief  This program defines a class `Cal_average_sum` that calculates the average
 *  and sum of an array of integers.
 * @version 0.1
 * @date 2026-05-18
 * @update: 2026-05-19  by Gandla bhargavi
 */

#include <iostream>
#include <vector>

// Using declarations for standard library components  std:: not required for each time.
using std::cin;
using std::cout;
using std::endl;
using std::vector;

/**
 * @brief  Class to calculate the average and sum of an array of integers
 * This class takes a vector of integers as input, calculates the sum and
 * average, and displays the results.
 * The constructor initializes the array and performs the calculations,
 * while the destructor is not explicitly defined as there are no dynamic resources to manage.
 *
 */
class Cal_average_sum
{
private:
    vector<int> arr;

public:
    Cal_average_sum(vector<int> arr) : arr(arr)
    {
        int sum = 0;
        int avg = 0;
        int n = arr.size();
        for (auto i : arr)
        {
            sum += i;
        }
        avg = sum / n;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << avg << endl;
    }
};
/**
 * @brief  Main function to execute the program
 *
 * @return int
 */
int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    if (n <= 0)
    {
        cout << "Invalid input. Number of elements must be greater than 0." << endl;
        return 1; // Exit with an error code
    }
    if (n > 1000)
    {
        cout << "Invalid input. Number of elements must be less than or equal to 1000." << endl;
        return 1; // Exit with an error code
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    Cal_average_sum obj(arr);
    return 0;
}