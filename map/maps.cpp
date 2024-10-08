/**
 * @file maps.cpp
 * @author Gandla Bhargavi
 * @brief This project demonstrates the usage of maps in C++ by processing a vector of integers.
 *  The program calculates the square of each integer and stores it in a map,
 *  then iterates through the map to display the results.
 * @version 0.1
 * @date 2024-10-07
 *
 * @copyright Copyright (c) 2024
 *
 */
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int maps_ordered_fun(const vector<int> &nums);

/**
 * @brief  main function
 *
 * @return int
 */
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int result;
    result = maps_ordered_fun(nums);
    cout << "result:" << result << endl;
    return 0;
}

/**
 * @brief The program calculates the square of each integer and stores it in a map.
 *
 * @param nums
 * @return int
 */
int maps_ordered_fun(const vector<int> &nums)
{
    map<int, int> num_map;
    for (const auto &num : nums)
    {
        num_map[num] = num * num;
    }
    for (const auto &pair : num_map)
    {
        cout << "first:" << pair.first << "second:" << pair.second << endl;
    }

    return 0;
}