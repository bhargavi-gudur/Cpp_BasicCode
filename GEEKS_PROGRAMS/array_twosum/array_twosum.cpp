/**
 * @file array_twosum.cpp
 * @author gandla bhargavi
 *
 * @brief This program solves the "Two Sum" problem using
 * a class-based approach in C++. The goal of the problem is
 * to find two numbers in an array that add up to a given
 * target value and return their indices.
 *
 * @version 0.1
 * @date 2024-12-07
 *
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/**
 * @brief class solution
 *
 */
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numMap; // To store the value and its index

        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];

            // Check if complement exists in the map
            if (numMap.find(complement) != numMap.end())
            {
                return {numMap[complement], i}; // Return indices of the pair
            }

            // Store the current number and its index
            numMap[nums[i]] = i;
        }

        // Since the problem guarantees exactly one solution, we should never reach here
        return {};
    }
};
/**
 * @brief  main function ,tests the Solution class with three example cases.
 *
 * @return int
 */
int main()
{
    // Test the Solution class
    Solution solution;

    // Example 1
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Result 1: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Example 2
    vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    vector<int> result2 = solution.twoSum(nums2, target2);
    cout << "Result 2: [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Example 3
    vector<int> nums3 = {3, 3};
    int target3 = 6;
    vector<int> result3 = solution.twoSum(nums3, target3);
    cout << "Result 3: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}
