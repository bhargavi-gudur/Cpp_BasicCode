/**
 * @file bruteforce_pairSum.cpp
 * @author Gandla Bhargavi
 * @brief  This program defines a class `pairsum_bruteForce` that contains 
 * a method to find the indices of two numbers in an array that add up to a 
 * given target sum using a brute-force approach. 
 * 
 * The main function prompts the user to enter a target sum and displays 
 * the indices of the two numbers that add up to the target if they exist.
 * 
 * @version 0.1
 * @date 2026-04-27
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

/** @brief A class to find the indices of two numbers that add up to
 *  a target sum using a brute-force approach. */
class pairsum_bruteForce
{
    public:
    vector<int> pairsum(vector<int> &nums, int target)
    {
        vector<int> result;
         int n = nums.size();
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = i + 1; j < n; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};

/**
 * @brief  Main function to execute the program that finds two numbers in an 
 * array that add up to a target sum.
 * @return int
 */
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter the target sum: ";
    cin >> target;
    pairsum_bruteForce obj_pairsum_bruteForce;
    vector<int> result = obj_pairsum_bruteForce.pairsum(nums, target);

    if (!result.empty())
    {
        cout << "Indices of the two numbers that add up to " << target << ": ";
        cout << result[0] << " and " << result[1] << endl;
    }
    else
    {
        cout << "No two numbers add up to " << target << "." << endl;
    }
    return 0;
   
}