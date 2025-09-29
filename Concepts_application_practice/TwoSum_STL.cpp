/**
 * @file TwoSum_STL.cpp
 * @author Gandla Bhargavi
 * @brief Program to find two numbers in an array that add up to a target using unordered_map.
 *
 * This program takes an array of integers and a target value.
 * It checks each number and stores it in a map with its index.
 * For every number, it calculates the required "need = target - number".
 * If the "need" already exists in the map, we found the pair and return their indices.
 *
 * Time Complexity : O(n)
 * Space Complexity: O(n)
 *
 * @version 0.1
 * @date 2025-09-29
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/**
 * @brief Finds two numbers whose sum equals the target.
 * 
 * @param nums Vector of integers
 * @param target The sum to find
 * @return vector<int> Indices of the two numbers
 */
vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> pos;  // stores number → index

    for (int i = 0; i < (int)nums.size(); i++) {
        int need = target - nums[i];  // value needed to reach target
        if (pos.count(need)) {        // if "need" is already in the map
            return {pos[need], i};    // return the stored index and current index
        }
        pos[nums[i]] = i;             // store current number with its index
    }

    return {}; // return empty if no pair found
}

/**
 * @brief Main function to test the Two Sum logic.
 */
int main() {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    cout << "Array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\nTarget: " << target << endl;

    vector<int> result = twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Pair found at indices: " << result[0] << " and " << result[1] << endl;
        cout << "Numbers: " << numbers[result[0]] << " + " << numbers[result[1]]
             << " = " << target << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}