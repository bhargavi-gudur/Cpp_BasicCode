/**
 * @file unorderedMaps.cpp
 * @author gandla bhargavi
 * @brief
 * @version 0.1
 * @date 2024-10-07
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findOcuurence(const vector<int> &nums); // vector function  declaration
/**
 * @brief
 *
 * @return int
 */
int main()
{
    int vector_maps;
    vector<int> nums = {1, 2, 5, 6, 7};
    vector_maps = findOcuurence(nums);
    cout << "vector array of unordered maps numbers:" << vector_maps << endl;

    return 0;
}
/**
 * @brief
 *
 * @param nums
 * @return int
 */
int findOcuurence(const vector<int> &nums)
{

    unordered_map<int, int> countmap;
    for (int num : nums)
    {
        countmap[num]++;
    }
    // Iterate through countMap to print each pair's first and second value
    for (const auto &pair : countmap)
    {
        cout << "Number: " << pair.first << ", Count: " << pair.second << endl;
    }
    for (const auto &num : nums)
    {
        if (countmap[num] == 1)
        {
            return num;
        }

        return -1;
    }
    return 0;
}
