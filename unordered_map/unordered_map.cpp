/**
 * @file unordered_map.cpp
 * @author Gandla Bhargavi
 * @brief Demonstrates the use of unordered_map to manage and
 *        display cumulative sums of numbers.
 * @version 0.2
 * @date 2026-05-01
 * @bhargavi-gudur: modified the code to use C++11 features and added comments for clarity.
 */

#include <iostream>
#include <unordered_map>
#include <utility>

using std::cout;
using std::endl;
using std::make_pair;
using std::pair;
using std::unordered_map;

/**
 * @brief  The CumulativeMap class manages a mapping of integers to their cumulative sums.
 * 
 */
class CumulativeMap
{
private:
    int cumulative_sum = 0;
    int num_size;
    unordered_map<int, pair<int, int>> sum;

public:
   // Constructor to initialize the size of numbers and set up the cumulative sum map.
    CumulativeMap(int size_map) : num_size(size_map) {}

    void display()
    {
        // Fill the map
        for (int index = 1; index <= num_size; index++)
        {
            cumulative_sum += index;
            // Store the index and its corresponding cumulative sum in the map
            sum[index] = make_pair(index, cumulative_sum);
        }

        // Display contents
        // Iterate through the map and display the index, number, and cumulative sum
        for (const auto &[key, value] : sum)
        {
            cout << "Index: " << key
                 << " Number: " << value.first
                 << " Cumulative Sum: " << value.second << endl;
        }

        cout << "Final cumulative sum = " << cumulative_sum << endl;
    }
};
/**
 * @brief  The main function prompts the user for the size of numbers, 
 * creates an instance of CumulativeMap, and displays the cumulative sums.
 * @param  None
 * 
 * @return int 
 */
int main()
{
    int size;
    cout << "Enter the number size: ";
    std::cin >> size;

    CumulativeMap obj(size);
    obj.display();

    return 0;
}
